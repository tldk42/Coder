#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

vector<int> solution(vector<string> name, vector<int> yearning, vector<vector<string>> photo) {
    vector<int> answer;
    unordered_map<string, int> scoreMap;
    
    for (int i = 0; i < name.size(); ++i)
    {
        scoreMap.insert({name[i], yearning[i]});
    }
    
    for (const vector<string>& persons : photo)
    {
        int score = 0;
        for (const string& person : persons)
        {
            score += scoreMap[person];
        }
        answer.push_back(score);
    }
    
    
    return answer;
}