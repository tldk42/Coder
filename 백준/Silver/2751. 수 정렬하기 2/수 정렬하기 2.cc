#include <algorithm>
#include <iostream>
#include <queue>
#include <stack>
#include <vector>

// struct compare
//{
//	bool operator()(int a1, int a2)
//	{
//		int AbsA1 = abs(a1);
//		int AbsA2 = abs(a2);
//
//		if (AbsA1 == AbsA2)
//			return a1 > a2;
//		else
//			return AbsA1 > AbsA2;
//	}
// };

template <typename T>
static void MergeRecursive(T array[], int lhs, int pivot, int rhs)
{
	int i = lhs;
	int j = pivot + 1;
	int t = 0;
	int temp[rhs - lhs + 1];

	while (i <= pivot && j <= rhs)
	{
		if (array[i] < array[j])
		{
			temp[t++] = array[i++];
		}
		else
		{
			temp[t++] = array[j++];
		}
	}
	while (i <= pivot)
	{
		temp[t++] = array[i++];
	}
	while (j <= rhs)
	{
		temp[t++] = array[j++];
	}
	i = lhs;
	t = 0;
	while (i <= rhs)
	{
		array[i++] = temp[t++];
	}
}

template <typename T>
static void MergeSort(T array[], int lhs, int rhs)
{
	if (rhs - lhs < 1)
		return;

	int pivot = lhs + (rhs - lhs) / 2;
	MergeSort(array, lhs, pivot);
	MergeSort(array, pivot + 1, rhs);
	MergeRecursive(array, lhs, pivot, rhs);
}


int main()
{
	using namespace std;

	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int N;

	cin >> N;
	int A[N];

	for (int i = 0; i < N; ++i)
	{
		cin >> A[i];
	}

	MergeSort(A, 0, N - 1);

	for (int i = 0; i < N; ++i)
	{
		cout << A[i] << "\n";
	}
}
