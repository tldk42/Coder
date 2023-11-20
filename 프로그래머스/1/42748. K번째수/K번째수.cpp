#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    
    
    for (const vector<int> command : commands)
    {
        int i = command[0] - 1;
        int j = command[1];
        int k = command[2];
        
        vector<int> modifiedArray = array;
        sort(modifiedArray.begin() + i, modifiedArray.begin() + j);
        answer.push_back(modifiedArray[i + k - 1]);
    }
    
    return answer;
}