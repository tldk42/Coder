#include <string>
#include <vector>
#include <stdlib.h>


using namespace std;

int solution(int a, int b) {
    int answer = 0;
    
    string aString = to_string(a);
    string bString = to_string(b);
    
    string x1 = aString + bString;
    string x2 = bString + aString;
    
   int x11 = atoi(x1.c_str());
    int x22 = atoi(x2.c_str());
    
    answer = x11 > x22 ? x11 : x22;
    return answer;
}