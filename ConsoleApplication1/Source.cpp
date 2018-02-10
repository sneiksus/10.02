#include <iostream>
#include<ctime>
#include<string>
using namespace std;
void fill(int ar[], int size);
void print(const  int ar[], int size);
int sum2(int ar[], int size);
int  max(int ar[], int size);
int main()
{
	const int size = 6;
	int arr[size];
	int SUM=0, MAX=-1;
	 fill(arr, size);
	 print(arr, size);
	 SUM = sum2(arr, size);
	 MAX= max(arr, size);
	 cout << "MAX = " << MAX << "\n SUM = " << SUM << endl << endl;
}
void fill(int ar[], int size)
{
	srand(time(0));
	for (int i = 0; i < size; ++i)
		ar[i] = rand() % (22 - 2 + 1) + 2;
}
void print(const int ar[], int size)
{
	for (int i = 0; i < size; i++)
		cout << ar[i]<<" ";
}
int  sum2(int ar[], int size)
{
	int sum = 0;
	for (int i = 0; i < size; i++)
		sum += ar[i];
	return sum;
}
int  max(int ar[], int size)
{
	int max = -1;
	for (int i = 0; i < size; i++)
		if (ar[i] >max)
			max = ar[i];
	return max;
}