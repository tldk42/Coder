#include <iostream>

int main()
{
	using namespace std;

	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int N;
	int Count = 1;
	int StartIndex = 1;
	int EndIndex = 1;
	int Sum = 1;

	cin >> N;

	while (EndIndex != N)
	{
		if (Sum == N)
		{
			Count++;
			EndIndex++;
			Sum += EndIndex;
		}

		else if (Sum > N)
		{
			Sum -= StartIndex;
			StartIndex++;
		}

		else
		{
			EndIndex++;
			Sum += EndIndex;
		}
	}
	cout << Count << '\n';
}
