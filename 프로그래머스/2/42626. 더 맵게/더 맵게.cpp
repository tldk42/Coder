#include <string>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int solution(vector<int> scoville, int K) {
    int answer = 0;
    
    priority_queue<int, vector<int>, greater<int>> newScoville(scoville.begin(), scoville.end());
    
    
    while (newScoville.size() > 1 && newScoville.top() < K)
    {
      
        int leastScovilleValue = newScoville.top();
        newScoville.pop();
        int secondLeastScoville = newScoville.top();
        newScoville.pop();
            
        newScoville.push(leastScovilleValue + 2 * secondLeastScoville);
        answer++;
    }
    
    if (newScoville.top() < K)
        return -1;
    
    return answer;
}