#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	using namespace std;

	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int N;
	int M;

	cin >> N >> M;

	vector<int> A(N, 0);
	A.reserve(N);

	for (int i = 0; i < N; ++i)
	{
		cin >> A[i];
	}

	sort(A.begin(), A.end());

	int Count = 0;
	int i = 0;
	int j = N - 1;

	while (i < j)
	{
		if (A[i] + A[j] < M)
		{
			i++;
		}

		else if (A[i] + A[j] > M)
		{
			j--;
		}
		else
		{
			Count++;
			i++;
			j--;
		}
	}

	cout << Count << '\n';
}