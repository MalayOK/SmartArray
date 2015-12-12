#pragma once
using namespace std;
namespace lesson_9
{
class SmartArray
{
public:
	SmartArray();
	~SmartArray();
	double operator [] (unsigned int index)const;
	void Add(double el);
	int GetSize()const;
	int GetCapacity()const;
	double GetAt(unsigned int index)const;
	unsigned int FindNext(unsigned int index, double value)const;
	void Insert(unsigned int index, double value);
	void Remove(unsigned int index);
	unsigned int Count(double value)const;
private:
	void Resize();
	unsigned int size;
	int capacity;
	double* myarray;
};
}