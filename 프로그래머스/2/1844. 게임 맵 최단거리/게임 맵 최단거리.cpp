#include<vector>
#include <queue>
using namespace std;

constexpr int row[] = {-1, 0, 1, 0};
constexpr int col[] = {0, 1, 0, -1};

int dfs(const vector<vector<int>>& maps)
{
    const int width = maps[0].size();
    const int height = maps.size();
    
    queue<pair<int, int>> candidate;
    vector<vector<int>> distanceMap(height, vector<int>(width, -1));
    
    distanceMap[0][0] = 0;
    candidate.push({0, 0});
    
    while(!candidate.empty())
    {
        pair<int, int> coord = candidate.front();
        candidate.pop();
        
        for (int i = 0; i < 4; ++i)
        {
            int coordX = coord.first + row[i];
            int coordY = coord.second + col[i];
                
            if (coordX >= 0 && coordX < height && coordY >= 0 && coordY < width && distanceMap[coordX][coordY] == -1 && maps[coordX][coordY] == 1)
            {
                distanceMap[coordX][coordY] = distanceMap[coord.first][coord.second] + 1;
                candidate.push({coordX, coordY});
            }
        }
    }
    
    return distanceMap[height - 1][width - 1];
}


int solution(vector<vector<int> > maps)
{
    int distance = dfs(maps);
        
    return distance == -1 ? -1 : distance + 1;
}