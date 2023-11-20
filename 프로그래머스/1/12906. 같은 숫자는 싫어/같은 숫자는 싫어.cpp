#include <vector>
#include <stack>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr) 
{
    vector<int> answer;
    stack<int> bChecked;
    
    bChecked.push(arr[0]);
    answer.push_back(arr[0]);
    
    for (const int a : arr)
    {
        if (!bChecked.empty() && bChecked.top() != a)
        {
            bChecked.push(a);
            answer.push_back(a);
        }
    }
    
    return answer;
}