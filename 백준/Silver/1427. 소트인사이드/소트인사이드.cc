#include <algorithm>
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

	string str;
	cin >> str;

	vector<int> A;
	A.reserve(str.size());

	for (int i = 0; i < str.size(); ++i)
	{
		A.push_back(stoi(str.substr(i, 1)));
	}

	sort(A.begin(), A.end(), [](int lhs, int rhs) { return rhs < lhs; });


	for (int i : A)
	{
		cout << i;
	}
}
