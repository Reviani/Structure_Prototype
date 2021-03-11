#pragma once
#include <vector>

template<class T> 
class ListManager
{
public:
	ListManager();
	void MakeList();
	void MergeSort(int *NumArray[]);
	void QuickSort();
	// gfg STANDS for geeks for geeks, as thats where i copied this code to try to understand and reverse enginier this data
	void GFGMerge(int arr[], int l, int m, int r);
	void MergeSort(int arr[], int l, int r);
	void PointerMerge(int *arr[]);
	void printArray(int A[], int size);
private:
};

template<class T>
inline ListManager<T>::ListManager()
{
}

template<class T>
inline void ListManager<T>::MakeList()
{
}

template<class T>
inline void ListManager<T>::MergeSort(int * NumArray[])
{
}

template<class T>
inline void ListManager<T>::QuickSort()
{
}


/*

break array down to smallist possible bits (sets of two)
-

*/
template<class T>
inline void ListManager<T>::GFGMerge(int arr[], int l, int m, int r)
{
	int n1 = m - l + 1;
	int n2 = r - m;

	// Create temp arrays  
	//int L[] = new int ;
	//int R[n2];
	// wouldn't this give errors with non int arrays?
	vector<int> L(n1), R(n2); 


	// Copy data to temp arrays L[] and R[]  
	for (int i = 0; i < n1; i++)
		L[i] = arr[l + i];
	for (int j = 0; j < n2; j++)
		R[j] = arr[m + 1 + j];

	// Merge the temp arrays back into arr[l..r] 

	// Initial index of first subarray 
	int i = 0;

	// Initial index of second subarray 
	int j = 0;

	// Initial index of merged subarray 
	int k = l;

	while (i < n1 && j < n2)
	{
		if (L[i] <= R[j])
		{
			arr[k] = L[i];
			i++;
		}
		else
		{
			arr[k] = R[j];
			j++;
		}
		k++;
	}

	// Copy the remaining elements of 
	// L[], if there are any  
	while (i < n1)
	{
		arr[k] = L[i];
		i++;
		k++;
	}

	// Copy the remaining elements of 
	// R[], if there are any  
	while (j < n2)
	{
		arr[k] = R[j];
		j++;
		k++;
	}
}


// l is for left index and r is  
// right index of the sub-array 
// of arr to be sorted */
template<class T>
void ListManager<T>::MergeSort(int arr[], int l, int r)
{
//	int TestArray[] = { 5, 63, 56, 7, 23, 45, 2, 32 };


	//This If statment Stops the recursion when array is split into one peice
	if (l < r)
	{
		// -first call must be made
		//-finds the middle of  array
		// Same as (l+r)/2, but avoids  
		// overflow for large l and h 
		int m = l + (r - l) / 2;

		// Sort first and second halves 
		MergeSort(arr, l, m);
		MergeSort(arr, m + 1, r);

		GFGMerge(arr, l, m, r);
	}
}

template<class T>
inline void ListManager<T>::PointerMerge(int * arr[])
{
}

template<class T>
inline void ListManager<T>::printArray(int A[], int size)
{
	for (int i = 0; i < size; i++)
		cout << A[i] << " ";

	cout << "\n";
}
