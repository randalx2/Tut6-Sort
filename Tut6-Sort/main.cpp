#include <iostream>
#include <cstdio>
#include <cmath>
#include <ctime>
#include <string>

using namespace std;

template <class T>
T sort(T arr1[], int length)
{
	T temp;
	for (int i = 0; i < length - 1; i++)
	{
		if (arr1[i + 1] > arr1[i])
		{
			temp = arr1[i];
			arr1[i] = arr1[i + 1];
			arr1[i + 1] = temp;
		}
	}
	return arr1;
}

int main()
{

	system("PAUSE");
	return 0;
}