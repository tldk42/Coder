#include <iostream>

int main()
{
	using namespace std;

	int N = 0;
	string Numbers ;

	cin >> N >> Numbers;

	int sum = 0;
	for (char c : Numbers)
	{
		sum += c - '0';
	}

	cout << sum << '\n';

	return 0;
}