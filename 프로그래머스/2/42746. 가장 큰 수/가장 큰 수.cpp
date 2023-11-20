#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(vector<int> numbers) {
    string answer = "";
    
    vector<string> numberStr;
    
    for (const int number : numbers)
    {
        numberStr.push_back(to_string(number));    
    }
    
    sort(numberStr.begin(), numberStr.end(), [](string lhs, string rhs)
         {
            return lhs + rhs > rhs + lhs;
         });
    
    if (numberStr[0] == "0")
        return "0";
    
    for (const string number : numberStr)
    {
        answer += (number);
    }
    
    return answer;
}