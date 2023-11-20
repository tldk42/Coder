#include <vector>
#include <unordered_set>
using namespace std;

int solution(vector<int> nums)
{
    int answer = 0;
    
    int pocket = nums.size() / 2;
    unordered_set<int> set;
    
    
    for (const int num : nums)
    {
        if (set.find(num) != set.end())
        {
            answer --;
        }
        else
        {
            set.insert(num);
        }
        answer ++;
    }
    
    return answer < pocket ? answer : pocket;
}