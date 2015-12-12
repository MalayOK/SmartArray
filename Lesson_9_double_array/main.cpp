#include <exception>
#include<iostream>
#include "SmartArray.h"
using namespace std;
using namespace lesson_13;
int main()
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
	MY_MACROS_2;
	double x = a[10];
	a.Insert(4, 148);
	a.GetSize();
	cout << x<<endl;
    x=a.GetAt(-122);
	cout << x;
	int y=a.FindNext(3, 50);
	cout << y << endl;
	return 0;
}
