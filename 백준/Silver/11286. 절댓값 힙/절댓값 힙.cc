#include <iostream>
#include <queue>
#include <stack>
#include <vector>

struct compare
{
	bool operator()(int a1, int a2)
	{
		int AbsA1 = abs(a1);
		int AbsA2 = abs(a2);

		if (AbsA1 == AbsA2)
			return a1 > a2;
		else
			return AbsA1 > AbsA2;
	}
};


int main()
{
	using namespace std;

	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int N;
	priority_queue<int, vector<int>, compare> Queue;

	cin >> N;

	for (int i = 0; i < N; ++i)
	{
		int Value;
		cin >> Value;

		if (Value == 0)
		{
			// 절댓값이 가장 작은 값 출 및 제거
			if (Queue.empty())
			{
				cout << "0\n";
			}
			else
			{
				cout << Queue.top() << '\n';
				Queue.pop();
			}
		}
		else
		{
			Queue.push(Value);
		}
	}
}
