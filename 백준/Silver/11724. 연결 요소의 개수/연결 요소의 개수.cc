
#include <iostream>
#include <stack>
#include <string>
#include <vector>
using namespace std;


void DFS(int index, std::vector<bool>& Visited, std::vector<std::vector<int>>& A)
{
	if (Visited[index])
		return;

	Visited[index] = true;

	for (int i : A[index])
	{
		if (!Visited[i])
		{
			DFS(i, Visited, A);
		}
	}
}

int main()
{

	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);


	int N;
	int M;
	cin >> N >> M;

	vector<vector<int>> A;
	vector<bool> Visited;

	A.resize(N + 1);
	Visited = vector<bool>(N + 1, false);

	for (int i = 0; i < M; ++i)
	{
		int Start, End;
		cin >> Start >> End;
		A[Start].push_back(End);
		A[End].push_back(Start);
	}

	int Count = 0;

	for (int i = 1; i < N + 1; ++i)
	{
		if (!Visited[i])
		{
			Count++;
			DFS(i, Visited, A);
		}
	}

	cout << Count << '\n';
}