#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
    int answer = 0;
    
    string x = to_string(a) + to_string(b);
    int xx = atoi(x.c_str());
    
    answer = xx >= (2 * a * b) ? xx : (2*a*b);
    
    return answer;
}