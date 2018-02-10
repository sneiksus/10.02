#include <iostream>
#include<ctime>
#include<string>
using namespace std;
const int colls = 6;
void fileM(long ar[][colls],int rows)
{
	srand(time(0));
	for (int r = 0; r < rows; r++)
		for (int c = 0; c < colls; c++)
			ar[r][c] = rand() % (81 - 11 + 1) + 11;
}
void printM(const long ar[][colls], int rows)
{
	for (int r = 0; r < rows; r++)
	{
		for (int c = 0; c < colls; c++)
			cout << ar[r][c] << " ";
		cout << endl;
	}
}
long maxM(const long ar[][colls], int rows)
{
	unsigned short max  = 22;
	for (int r = 0; r < rows; r++)
		for (int c = 0; c < colls; c++)
			if (ar[r][c] > max)
				max = ar[r][c];
	return max;
}
void main()
{
	const short rows = 4;
	long arr[rows][colls];
	fileM(arr, rows);
	printM(arr, rows);
	cout << "\n\nMAX = " << maxM(arr, rows) << "\n\n\n";
}