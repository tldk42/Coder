#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

vector<string> solution(vector<string> players, vector<string> callings) {
    unordered_map<string, int> tableOName;
    
    int index = 0;
    for (const string& player : players)
    {
        tableOName.insert({player, index++});
    }
    
    for (const string& player : callings)
    {
        int playerRank = tableOName[player];
        string forwardPlayer = players[playerRank - 1];
        players[playerRank - 1] = player;
        players[playerRank] = forwardPlayer;
        
        tableOName[player] -= 1;
        tableOName[forwardPlayer] += 1;
    }
  
    return players;
}