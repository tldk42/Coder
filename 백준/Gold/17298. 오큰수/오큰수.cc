#include <iostream>
#include <stack>


int main()
{
	using namespace std;

	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int N;

	cin >> N;

	int Array[N];
	int Answer[N];

	for (int i = 0; i < N; ++i)
	{
		cin >> Array[i];
	}

	stack<int> Stack;
	Stack.push(0);

	for (int i = 0; i < N; ++i)
	{
		while (!Stack.empty() && Array[Stack.top()] < Array[i])
		{
			Answer[Stack.top()] = Array[i];
			Stack.pop();
		}
		Stack.push(i);
	}

	while (!Stack.empty())
	{
		Answer[Stack.top()] = -1;
		Stack.pop();
	}

	for (int Result : Answer)
	{
		cout << Result << ' ';
	}
}
