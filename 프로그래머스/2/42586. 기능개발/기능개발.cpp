#include <string>
#include <vector>
#include <queue>
#include <iostream>
using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    queue<int> deployStack;
        
    for (const int progress : progresses)
    {
        deployStack.push(progress);
    }
    
    int tick = 1;
    int index = 0;
    
    while (!deployStack.empty())
    {
        int currentMainProgress = deployStack.front();
        int count = 0;
        
        while (currentMainProgress + (tick * speeds[index]) < 100)
        {
            tick++;
        }
        while (!deployStack.empty() && deployStack.front() + (tick * speeds[index]) >= 100)
        {
            deployStack.pop();
            count++;
            index++;            
        }
        
        answer.push_back(count);
    }
    
    
    return answer;
}