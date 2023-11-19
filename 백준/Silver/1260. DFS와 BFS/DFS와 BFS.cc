#include <string>
#include <vector>
#include <queue>
#include <iostream>
#include <algorithm>

using namespace std;

void dfs(const vector<vector<int>>& map, vector<bool>& visitedMap, int start)
{
    visitedMap[start] = true;
    cout << start << ' ';

    for (int i = 0; i < map[start].size(); ++i)
    {
        if (!visitedMap[map[start][i]])
        {
            dfs(map, visitedMap, map[start][i]);
        }
    }
}

void bfs(const vector<vector<int>>& map, vector<bool>& visitedMap, int start) {
    queue<int> que;
    que.push(start);
    visitedMap[start] = true;
    cout << start << ' ';

    while (!que.empty())
    {
        int currentNode = que.front();
        que.pop();

        for (int i = 0; i < map[currentNode].size(); ++i)
        {
            if (!visitedMap[map[currentNode][i]])
            {
                que.push(map[currentNode][i]);
                visitedMap[map[currentNode][i]] = true;
                cout << map[currentNode][i] << ' ';
            }
        }
    }
}

int main()
{
    // node, edge, start
    int n, m, s;

    cin >> n >> m >> s;

    vector<vector<int>> map(n + 1);
    vector<bool> visitedMap(n + 1, false);

    for (int i = 0; i < m; ++i)
    {
        int node1, node2;
        cin >> node1 >> node2;
        map[node1].push_back(node2);
        map[node2].push_back(node1);
    }

    for (int i = 1; i <= n; ++i)
    {
        sort(map[i].begin(), map[i].end());
    }

    dfs(map, visitedMap, s);

    cout << '\n';
    fill(visitedMap.begin(), visitedMap.end(), false);

    bfs(map, visitedMap, s);
}
