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

	cin >> N;

	vector<int> A(N, 0);
	A.reserve(N);

	for (int i = 0; i < N; ++i)
	{
		cin >> A[i];
	}

	sort(A.begin(), A.end());

	int Result = 0;

	for (int k = 0; k < N; ++k)
	{
		long Found = A[k];
		int i = 0;
		int j = N - 1;

		while (i < j)
		{
			if (A[i] + A[j] == Found)
			{
				if (i != k && j != k)
				{
					Result++;
					break;
				}
				else if (i == k)
				{
					++i;
				}
				else if (j == k)
				{
					--j;
				}
			}

			else if (A[i] + A[j] < Found)
			{
				i++;
			}
			else
			{
				j--;
			}
		}
	}

	cout << Result << '\n';
}
