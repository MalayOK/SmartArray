#include "SmartArray.h"
namespace lesson_9
{
SmartArray::SmartArray()
	{
		size = 0;
		capacity = 8;
		myarray = new double[capacity];
	}
SmartArray::~SmartArray()
	{
		if (myarray != nullptr)
			delete[] myarray;
	}
double SmartArray::operator [] (unsigned int index)const
	{
		if ((index > size) || (index<0))
			return 0;
		return myarray[index];
	}
void SmartArray::Add(double el)
	{
		if (size == capacity)
			Resize();
		myarray[size] = el;
		size++;
	}

int SmartArray::GetSize()const
	{
		return size;
	}

int SmartArray::GetCapacity()const
	{
		return capacity;
	}

double SmartArray::GetAt(unsigned int index)const
{
	if ((index > size) || (index < 0))
		return 0;
	return myarray[index - 1];
}
unsigned int SmartArray::FindNext(unsigned int index, double value)const
{
	for (unsigned int i=index; i < size; ++i)
	{
		if (myarray[i] == value)
			return i;	
	}
	return -1;
}

void SmartArray::Insert(unsigned int index, double value)
{
	size++;
	if (size == capacity)
		Resize();
	double tmpNumber = myarray[index];
	myarray[index] = value;
	for (unsigned int i = index + 1; i< size; ++i)
	{
		myarray[i] = tmpNumber;
		tmpNumber = myarray[i + 1];
	}
}
void SmartArray::Resize()
{
	capacity *= 2;
	double* temp = new double[capacity];
	for (unsigned int i = 0; i < size; ++i)
	{
		temp[i] = myarray[i];
	}
	delete[] myarray;
	myarray = temp;

}
void SmartArray::Remove(unsigned int index)
{ 
	--size;
	
		if (size!=0 && size * 2 < capacity)
		{
			capacity /= 2;
			double* temp = new double[capacity];
			for (unsigned int i = 0; i < size; ++i)
			{
				temp[i] = myarray[i];
			}
			delete[] myarray;
			myarray = temp;
		}
		double tempNumber;
		for (unsigned int i = index + 1; i < size; ++i)
		{
			tempNumber = myarray[i - 1];
			myarray[i] = tempNumber;
		}
	
}

unsigned int SmartArray::Count(double value)const
{
	unsigned int counter = 0;
	for (unsigned int i = 0; i < size; ++i)
	{
		if (myarray[i] == value)
			counter++;
	}
	return counter;
}
}
