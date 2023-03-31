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
		return;

	// Partition the list into two parts
	// One containing element less that or equal to pivot 
	// Outher containing element greather than pivot 
	i = low + 1; // Langkah 3
	j = high; // Langkah 4 
	pivot = arr[low]; // Langkah 2

	while (i <= j) // Langkah 10
	{
		// Search for an element greater than pivot 
		while ((arr[i] <= pivot) && (i <= high)) // Langkah 5 
		{
			i++; // Langkah 6
			cmp_count++; 
		}
		cmp_count++;
		// Search for an element less thaner equal to pivot 
		while ((arr[j] > pivot) && (j >= low)) // Langkah 7
		{
			j--; // Langkah 8 
			cmp_count++;
		}
		cmp_count++; 
		if (i < j) // Langkah 9 
			//if greater element is on left of the element 
		{
			// swap the element at index i with the element at index j 
			swap(i, j);
			mov_count++;
		}
	}
	//j now contraint the index of the last element in the sort list 
	if (low, j)// Langkah 11
		//move to the pivot its correct position in the list 
	{
		swap(low, j);
		mov_count++;
	}
	//sort the list on the left of pivot using quick sort 
	q_short(low, j - i); //Langkah 12
	//sort the list on the right of pivot using quick sort 
	q_short(j + 1, high);//Langkah 13
}
void display() {
	cout << "\n=======================" << endl; 
	cout << "\n-sorted array" << endl; 
	cout << "\n=======================" << endl; 

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << "\n\nNumber of comparasions: " << cmp_count << endl;

}

