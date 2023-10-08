#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int k) {
    string answer = "";
    
    for (int i = 0; i < k; ++i)
    for (char c : my_string)
    {
        answer += c;
    }
    
    return answer;
}