#include <iostream>
using namespace std; 

//array of integrers to hold values
int arr[20];
int cmp_count = 0; // number of comprasion
int mov_count = 0; // number of movement 
int n;
void input() {
	while (true)
	{
		cout << "Masukkan panjang element array :";
		cin >> n; 

		if (n <= 20)
			break;
		else 
			cout << "\nMaksimum panjang array adalah 20" << endl; 

	}

	cout << "\n========================" << endl;
	cout << "\nEnter array element" << endl; 
	cout << "\n========================" << endl; 

	for (int i = 0; i < n; i++)
	{
		cout << "<" << (i + 1) << ">";
		cin >> arr[i];
	}
}
// swap the element at index x with the element at index y 
void swap(int x, int y);
{
	int temp;
	temp = arr[x];
	arr[x] = arr[y];
	arr[y] = temp; 
}
void q_short(int low, int high)
{
	int pivot, i, j;
	if (low > high)// Langkah 1
}

