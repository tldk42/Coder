#include <algorithm>
#include <iostream>
#include <queue>
#include <stack>
#include <vector>

// struct compare
//{
//	bool operator()(int a1, int a2)
//	{
//		int AbsA1 = abs(a1);
//		int AbsA2 = abs(a2);
//
//		if (AbsA1 == AbsA2)
//			return a1 > a2;
//		else
//			return AbsA1 > AbsA2;
//	}
// };

int MAX_NUM;




bool IsPrime(int Number) {
	for (int i = 2; i < Number / 2; ++i)
	{
		if (Number % i == 0)
			return false;
	}
	return true;
}

void DFS(int Number, int MaxNum)
{
	if (MaxNum == MAX_NUM)
	{
		if (IsPrime(Number)) {
			std::cout << Number << '\n';
		}
		return;
	}

	for (int i = 1; i < 10; ++i)
	{
		if (i % 2 == 0){
			continue ;
		}
		if (IsPrime(Number * 10 + i)) {
			DFS(Number * 10 + i, MaxNum + 1);
		}
	}
}

int main()
{
	using namespace std;

	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	
	cin >> MAX_NUM;

	DFS(2, 1);
	DFS(3, 1);
	DFS(5, 1);
	DFS(7, 1);



}
