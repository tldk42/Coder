#include <iostream>
#include <stack>
#include <vector>


int main()
{
	using namespace std;

	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int N;

	cin >> N;

	deque<int> Array;

	for (int i = 1; i <= N; ++i)
	{
		Array.push_back(i);
	}

	int Value;
	while (!Array.empty())
	{
		Value = Array.front();
		Array.pop_front();
		if (!Array.empty())
		{
			Array.push_back(Array.front());
			Array.pop_front();
		}
		else
		{
			cout << Value;
			return 0;
		}
	}

	cout << Value;
}
