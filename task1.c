#include <iostream>
#include <cstdlib> 
#include <ctime> 

using namespace std; 

int main()
{
	int n, i, min, max; 
	float sr, sred;

	srand((int) time(NULL));
	cout << "enter size of the array:" << endl;
	cin >> n; 
	int *array = new int [n];
	for (i=0; i<n; i++) 
	{
		array[i] = (rand() % 199 -99);
		cout << array[i] << " " << endl;
	}
	sred = 0;
	for (i=0; i<n; i++)
		sred += array[i];
	sr = sred / n;
	cout << "the arithmetic mean of the array is equal to: " << sr << " " << endl;
	max = array[0];
	min = array[0];
	for (i=0; i<n; i++)
	{
		if (array[i] < min) min = array[i];
		if (array[i] > max) max = array[i];
	}
	cout << "the minimum value of the array element is equal to: " << min << " " << endl;
	cout << "the maximum value of the array element is equal to: " << max << " " << endl;
	return 0;
}

