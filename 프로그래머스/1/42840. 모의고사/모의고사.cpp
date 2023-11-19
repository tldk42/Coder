#include <string>
#include <algorithm>
#include <vector>

using namespace std;

constexpr int PLAYER_1[5] = {1, 2, 3, 4, 5};
constexpr int PLAYER_2[8] = {2, 1, 2, 3, 2, 4, 2, 5};
constexpr int PLAYER_3[10] = {3, 3, 1 ,1, 2, 2, 4, 4, 5, 5};

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    
    vector<int> scores(3, 0);
    
    int index = 0;
    for (const int answer : answers)
    {
        if (PLAYER_1[index % 5] == answer)
        {
            scores[0]++;
        }
        if (PLAYER_2[index % 8] == answer)
        {
            scores[1]++;
        }
        if (PLAYER_3[index % 10] == answer)
        {
            scores[2]++;
        }
        index++;
    }
    
    index = 0;
    for (int i = 0; i < 3; ++i)
    {
        if (index < scores[i])
        {
            index = scores[i];
        }
    }
    
    for (int i = 0; i < 3; ++i)
    {
        if (index == scores[i])
        {
            answer.push_back(i + 1);
        }
    }
    
    return answer;
}