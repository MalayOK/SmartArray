//#include <exception>
//#include <iostream>
//#include "SmartArray.h"
//#include "MyException.h"









//
//namespace lesson_13
//{
//
//	/*SmartArray::SmartArray()
//	
//	SmartArray::~SmartArray()
//	{
//		if (myarray != nullptr)
//			delete[] myarray;
//	}
//	double SmartArray::operator [] (unsigned int index)const
//	{
//		MY_MACROS_2;
//		if ((index > size) || (index < 0))
//			return 0;
//		return myarray[index];
//	}
//	void SmartArray::Add(double el)
//	{
//		if (size == capacity)
//			Resize();
//		myarray[size] = el;
//		size++;
//#ifdef _DEBUG
//		std::cout << "Add()" << std::endl;
//		MY_MACROS;
//#endif
//	}*/
//
//	int SmartArray::GetSize()const
//	{
//#ifdef _DEBUG
//		std::cout << "GetSize()" << std::endl;
//		MY_MACROS;
//#endif
//		return size;
//	}
//
//	int SmartArray::GetCapacity()const
//	{
//#ifdef _DEBUG
//		std::cout << "GetCapacity()" << std::endl;
//		MY_MACROS;
//#endif
//		return capacity;
//	}
//
//	/*double SmartArray::GetAt(int index)const
//	{
//		MY_MACROS_2;
//#ifdef _DEBUG
//		std::cout << "GetAt()" << std::endl;
//		MY_MACROS;
//#endif
//		if ((index > size) || (index < 0))
//			return 0;
//		return myarray[index - 1];
//	}
//	unsigned int SmartArray::FindNext(unsigned int index, double value)const
//	{
//		MY_MACROS_2;
//#ifdef _DEBUG
//		std::cout << "FindNext()" << std::endl;
//		MY_MACROS;
//#endif
//		for (unsigned int i = index; i < size; ++i)
//		{
//			if (myarray[i] == value)
//				return i;
//		}
//		return -1;
//	}
//
//	void SmartArray::Insert(unsigned int index, double value)
//	{
//		MY_MACROS_2;
//#ifdef _DEBUG
//		std::cout << "Insert()" << std::endl;
//		MY_MACROS;
//#endif
//		size++;
//		if (size == capacity)
//			Resize();
//		double tmpNumber = myarray[index];
//		myarray[index] = value;
//		for (unsigned int i = index + 1; i < size; ++i)
//		{
//			myarray[i] = tmpNumber;
//			tmpNumber = myarray[i + 1];
//		}
//
//
//	}
//	void SmartArray::Resize()
//	{
//#ifdef _DEBUG
//		std::cout << "Resize()" << std::endl;
//		MY_MACROS;
//#endif
//		capacity *= 2;
//		double* temp = new double[capacity];
//		for (unsigned int i = 0; i < size; ++i)
//		{
//			temp[i] = myarray[i];
//		}
//		delete[] myarray;
//		myarray = temp;
//
//	}
//	void SmartArray::Remove(unsigned int index)
//	{
//		MY_MACROS_2;
//#ifdef _DEBUG
//		std::cout << "Resize()" << std::endl;
//		MY_MACROS;
//#endif
//		--size;
//
//		if (size != 0 && (size * 2) < capacity)
//		{
//			capacity /= 2;
//			double* temp = new double[capacity];
//			for (unsigned int i = 0; i < size; ++i)
//			{
//				temp[i] = myarray[i];
//			}
//			delete[] myarray;
//			myarray = temp;
//		}
//		double tempNumber;
//		for (unsigned int i = index + 1; i < size; ++i)
//		{
//			tempNumber = myarray[i - 1];
//			myarray[i] = tempNumber;
//		}
//
//	}
//
//	unsigned int SmartArray::Count(double value)const
//	{
//#ifdef _DEBUG
//		std::cout << "Resize()" << std::endl;
//		MY_MACROS;
//#endif
//		unsigned int counter = 0;
//		for (unsigned int i = 0; i < size; ++i)
//		{
//			if (myarray[i] == value)
//				counter++;
//		}
//		return counter;
//	}*/
//}
