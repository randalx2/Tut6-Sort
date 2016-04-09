//PRANEEL MISTHRY 202515355
//COMPUTER METHODS 3 - TUT6-SORT

#include <iostream>
#include <cstdio>
#include <cmath>
#include <ctime>
#include <string>

using namespace std;

template <typename T>
void sort(T arr1[], int length)   //NB Made this void since attempting to return an array caused compile errors
{
	T temp;
	for (int i = 0; i < length - 1; i++)  //Consider the case error when approaching the last element
	{
		for (int j = i + 1; j < length; j++)  //MUST use another loop counter for the second element for sorting problems
		{
			if (arr1[i] < arr1[j])
			{
				T temp = arr1[i];
				arr1[i] = arr1[j];
				arr1[j] = temp;
			}
		}
	}
}

//Notes for exam
//Ring counter--> When using only one loop counter we have code that mimics the ring counter problem from test 1
//ie each time sort is called the array elements are moved regardless of any if statement conditions.
/*template <typename T>
void sort(T arr1[], int length)   //NB Made this void since attempting to return an array caused compile errors
{
	T temp;
	for (int i = 0; i < length - 1; i++)  //Consider the case error when approaching the last element
	{
        T temp = arr1[i];
	    arr1[i] = arr1[i+1];
		arr1[i+1] = temp;	
	}
}*/

int main()
{
	int intarray[6] = { 1, 5, 19, 2, 13, 15 };
	float fltarray[6] = { 12.5, 10.6, 7.5, 6.35, 36.45, 14.8 };
	string strarray[6] = { "cat", "house", "elephant", "do", "Praneel", "Galaxy Guardian" };

	//Use the function to sort the arrays from highest to lowest
	sort(intarray, 6);
	sort(fltarray, 6);
	sort(strarray, 6);

	//Print out the array for confirmation
	for (int i = 0; i < 6; i++)
	{
		cout << intarray[i] << "\t"; 
	}

	cout << endl;

	for (int i = 0; i < 6; i++)
	{
		cout << fltarray[i] << "\t";
	}

	cout << endl;

	for (int i = 0; i < 6; i++)
	{
		cout << strarray[i] << "\t";
	}
	cout << endl;

	system("PAUSE");
	return 0;
}