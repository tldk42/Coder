#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<vector<int>> targets) {
    int answer = 0;
    
    sort(targets.begin(), targets.end(), [](vector<int> a, vector<int> b) {
        return a[1] < b[1];
    });
    
    int lineNum = -1;
    
    for (vector<int> target : targets)
    {
        int s = target[0];
        int e = target[1];
        
        if (lineNum <= s)
        {
            ++answer;
            lineNum = e;
        }
    }
    
    
    return answer;
}