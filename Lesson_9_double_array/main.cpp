#include <exception>
#include<iostream>
#include "SmartArray.h"
using namespace std;
using namespace lesson_13;
int main()
{
	try
	{
	SmartArray<int> a;
	for (int i = 0; i < 100; ++i)
	{
		a.Add(3+i);
		cout << a[i] << endl;
	}
	SmartArray<double> b;
	b.Add(1.2);
	a.Add(23);
	a.GetSize();
	a.Insert(2, 158);
	a.GetSize();
	int index = -21;
	a[index];
	double x = a[10];
	cout << x<<endl;
	x = a.GetAt(-122);
	cout << x;
	int y = a.FindNext(3, 50);
	cout << y << endl;	
	}
		catch (myexception& ex)
	{
		std::cout << "This is my exception!" << ex.what() << std::endl; 
	}
		catch (std::exception& ex)
	{
		std::cout << ex.what() << std::endl; 
	}
		catch (...)
	{
		std::cout << "Catched exception" << std::endl; 
	}
  
	cin.get();
	return 0;
}
