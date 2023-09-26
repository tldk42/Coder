#include <iostream>
#include <vector>

int main()
{
	using namespace std;
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int N, M;

	cin >> N >> M;

	vector<long> S(N, 0);
	vector<long> C(M, 0);

	long Answer = 0;

	cin >> S[0];

	for (int i = 1; i < N; ++i)
	{
		int Number;
		cin >> Number;

		S[i] = S[i - 1] + Number;
	}

	for (int i = 0; i < N; ++i)
	{
		int Remainder = S[i] % M;

		if (Remainder == 0)
		{
			Answer++;
		}

		C[Remainder]++;
	}

	for (int i = 0; i < M; ++i)
	{
		if (C[i] > 1)
		{
			Answer += (C[i] * (C[i] - 1) / 2);
		}
	}

	cout << Answer << '\n';


	return 0;
}