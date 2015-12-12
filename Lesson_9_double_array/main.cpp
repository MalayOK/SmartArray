#include<iostream>
#include "SmartArray.h"
using namespace std;
using namespace lesson_9;
int main()
{
	SmartArray a;
	for (int i = 0; i < 25; ++i)
	{
		a.Add(3+i);
		cout << a[i] << endl;
	}
	a.GetSize();
	a.Insert(2, 158);
	a.GetSize();
	double x = a[10];
	cout << x<<endl;
    x=a.GetAt(15);
	cout << x;
	int y=a.FindNext(3, 50);
	cout << y << endl;
	return 0;
}
