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

	vector<vector<int>> A(N + 1, vector<int>(N + 1, 0));
	vector<vector<int>> D(N + 1, vector<int>(N + 1, 0));

	for (int i = 1; i <= N; ++i)
	{
		for (int j = 1; j <= N; ++j)
		{
			cin >> A[i][j];

			D[i][j] = D[i][j - 1] + D[i - 1][j] - D[i - 1][j - 1] + A[i][j];
		}
	}

	for (int i = 0; i < M; ++i)
	{
		int x1, x2, y1, y2;

		cin >> x1 >> y1 >> x2 >> y2;

		int Value = D[x2][y2] - D[x1 - 1][y2] - D[x2][y1 - 1] + D[x1 - 1][y1 - 1];
		cout << Value << '\n';
	}
	return 0;
}