#include <iostream>

int main()
{
	using namespace std;
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int N, M;
	int Sum = 0;

	cin >> N >> M;

	int Array[N];
	pair<int, int> Path[N + 1];
	Path[0] = {0, 0};

	for (int i = 0; i < N; ++i) {
		cin >> Array[i];
		Sum += Array[i];
		Path[i + 1] = {i + 1, Sum};
	}

	for (int i = 0; i < M; ++i)
	{
		int Start, End;
		cin >> Start >> End;

		int Value = Path[End].second - Path[Start - 1].second;
		cout << Value << '\n';
	}

	return 0;
}