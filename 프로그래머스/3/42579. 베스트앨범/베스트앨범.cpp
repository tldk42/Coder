#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <queue>

using namespace std;

vector<int> solution(vector<string> genres, vector<int> plays) {
    vector<int> answer;
    
    unordered_map<string, int> totalScore;
    unordered_map<string, priority_queue<pair<int, int>>> chartsWithGenre;
    
  for (int i = 0; i < plays.size(); ++i)
    {
        chartsWithGenre[genres[i]].push({plays[i], -i});
        totalScore[genres[i]] += plays[i];
    }

    vector<pair<int, string>> genreScore;
    for(auto it = totalScore.begin(); it != totalScore.end(); it++)
        genreScore.push_back({it->second, it->first});
    sort(genreScore.begin(), genreScore.end(), greater<>());

    for (const auto& element : genreScore)
    {
        int count = 0;
        while (!chartsWithGenre[element.second].empty() && count < 2)
        {
            answer.push_back(-chartsWithGenre[element.second].top().second);
            chartsWithGenre[element.second].pop();
            count++;
        }
    }

    return answer;
}