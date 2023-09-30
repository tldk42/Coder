#include <algorithm>
#include <iostream>
#include <vector>

char ALPHABET[4] = {'A', 'C', 'G', 'T'};
enum
{
	A = 0,
	C = 1,
	G = 2,
	T = 3
};

int main()
{
	using namespace std;

	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int Result = 0;

	int DNALength;
	int SubStrLength;

	cin >> DNALength >> SubStrLength;

	char DNA[DNALength];
	int AlphabetLen[4];

	for (int i = 0; i < DNALength; ++i)
	{
		cin >> DNA[i];
	}

	for (int& i : AlphabetLen)
	{
		cin >> i;
	}


	int CheckingLen[4] = {0};
	int Checked = 0;

	for (int i = 0; i < DNALength; ++i)
	{
		switch (DNA[i])
		{
			case 'A':
				CheckingLen[A]++;
				break;
			case 'C':
				CheckingLen[C]++;
				break;
			case 'G':
				CheckingLen[G]++;
				break;
			case 'T':
				CheckingLen[T]++;
				break;
		}

		Checked++;

		if (Checked >= SubStrLength)
		{
			for (int j = 0; j < 4; ++j)
			{
				if (CheckingLen[j] < AlphabetLen[j])
				{
					break;
				}
				else if (j == 3)
				{
					Result++;
				}
			}
			switch (DNA[i - SubStrLength + 1])
			{
				case 'A':
					CheckingLen[A]--;
					break;
				case 'C':
					CheckingLen[C]--;
					break;
				case 'G':
					CheckingLen[G]--;
					break;
				case 'T':
					CheckingLen[T]--;
					break;
			}
			Checked--;
		}
	}

	cout << Result << '\n';
}
