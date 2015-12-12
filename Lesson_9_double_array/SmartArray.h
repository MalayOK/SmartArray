#pragma once
#include <exception>
#include "MyException.h"
using namespace std;
namespace lesson_13
{

template<class T>
class SmartArray
{
public:
	SmartArray();
	~SmartArray();
	T operator [] (int index)const;
	void Add(T el);
	T GetAt(int index)const;
	int FindNext(int index, T value)const;
	void Insert(int index, T value);
	void Remove(int index);
	int Count(T value)const;
	int GetSize()const;
	int GetCapacity()const;
		
private:
	
	void Resize();
	 int size;
	 int capacity;
	 T* myarray;
};
template <class T>
SmartArray<T>::SmartArray()
{
	size = 0;
	capacity = 8;
	myarray = new T[capacity];
}
template <class T>
SmartArray<T>::~SmartArray()
{
	if (myarray != nullptr)
		delete[] myarray;
}

template <class T>
T SmartArray<T>::operator [] (int index)const
{
	
	if ((index > size) || (index < 0))
		return 0;
	return myarray[index];
}

template <class T>
void SmartArray<T>::Add(T el)
{
	if (size == capacity)
		Resize();
	myarray[size] = el;
	size++;
#ifdef _DEBUG
	std::cout << "Add()" << std::endl;
	MY_MACROS;
#endif
}

template <class T>
T SmartArray<T>::GetAt(int index)const
{
#ifdef _DEBUG
	std::cout << "GetAt()" << std::endl;
	MY_MACROS;
#endif
	if ((index > size) || (index < 0))
		return 0;
	return myarray[index - 1];
}

template <class T>
int SmartArray<T>::FindNext(int index, T value)const
{
#ifdef _DEBUG
	std::cout << "FindNext()" << std::endl;
	MY_MACROS;
#endif
	for (int i = index; i < size; ++i)
	{
		if (myarray[i] == value)
			return i;
	}
	return -1;
}

template <class T>
void SmartArray<T>::Insert(int index, T value)
{
#ifdef _DEBUG
	std::cout << "Insert()" << std::endl;
	MY_MACROS;
#endif
	if (size == capacity)
		Resize();
	size++;
	T tmpNumber = myarray[index];
	myarray[index] = value;
	for (int i = index + 1; i < size; ++i)
	{
		myarray[i] = tmpNumber;
		tmpNumber = myarray[i + 1];
	}
}
	template <class T>
	void SmartArray<T>::Remove(int index)
	{
#ifdef _DEBUG
		std::cout << "Resize()" << std::endl;
		MY_MACROS;
#endif
		

		if (size != 0 && (size * 2) < capacity)
		{
			capacity /= 2;
			T* temp = new T[capacity];
			for (unsigned int i = 0; i < size; ++i)
			{
				temp[i] = myarray[i];
			}
			delete[] myarray;
			myarray = temp;
		}
		for ( int i = index + 1; i < size; ++i)
		{
			myarray[i] = myarray[i + 1];
		}
		--size;
	}

	template <class T>
	int SmartArray<T>::Count(T value)const
	{
#ifdef _DEBUG
		std::cout << "Resize()" << std::endl;
		MY_MACROS;
#endif
		int counter = 0;
		for (int i = 0; i < size; ++i)
		{
			if (myarray[i] == value)
				counter++;
		}
		return counter;
	}
	template <class T>
	int SmartArray<T>::GetSize()const
	{
#ifdef _DEBUG
		std::cout << "GetSize()" << std::endl;
		MY_MACROS;
#endif
		return size;
	}
	template <class T>
	int SmartArray<T>::GetCapacity()const
	{
#ifdef _DEBUG
		std::cout << "GetCapacity()" << std::endl;
		MY_MACROS;
#endif
		return capacity;
	}
	template <class T>
	void SmartArray<T>::Resize()
	{
#ifdef _DEBUG
		std::cout << "Resize()" << std::endl;
		MY_MACROS;
#endif
		capacity *= 2;
		T* temp = new T[capacity];
		for ( int i = 0; i < size; ++i)
		{
			temp[i] = myarray[i];
		}
		delete[] myarray;
		myarray = temp;

	}

}
