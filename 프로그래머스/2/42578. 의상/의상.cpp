#include <string>
#include <vector>
#include <map>

using namespace std;

int solution(vector<vector<string>> clothes) {
    int answer = 0;
    
    map<string, int> clothList;
    
    for (vector<string> cloth : clothes)
    {
        clothList[cloth[1]] ++;
    }
    
    int add = 1;
    for (const auto& cloth : clothList)
    {
        add *= (cloth.second + 1);
    }
    
    return answer + add - 1;
}