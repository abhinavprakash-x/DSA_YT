#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    void recurse(vector<vector<int>>& maze, vector<string>& ans,
            string& temp, int x, int y, int n, vector<vector<bool>>& visited)
    {
        if(x < 0 || y < 0 || x >= n || y >= n)
        {
            return; // Not a Valid Index
        }
        
        if(maze[x][y] == 0) return;
        if(visited[x][y] == 1) return;
        
        if(x == n - 1 && y == n - 1)
        {
            ans.push_back(temp);
            return; // Valid Solution
        }
        
        visited[x][y] = 1;
        
        for(int i = 0; i < 4; ++i)
        {
            if(i == 3)
            {
                // UP
                temp.push_back('U');
                recurse(maze, ans, temp, x - 1, y, n, visited);
                temp.pop_back();
            }
            if(i == 1)
            {
                // Left
                temp.push_back('L');
                recurse(maze, ans, temp, x, y - 1, n, visited);
                temp.pop_back();
            }
            if(i == 0)
            {
                temp.push_back('D');
                recurse(maze, ans, temp, x + 1, y, n, visited);
                temp.pop_back();
            }
            if(i == 2)
            {
                temp.push_back('R');
                recurse(maze, ans, temp, x, y + 1, n, visited);
                temp.pop_back();
            }
        }
        
        visited[x][y] = 0;
    }
  
    vector<string> ratInMaze(vector<vector<int>>& maze) {
        // code here
        vector<string> ans;
        int x = 0, y = 0;
        string temp;
        vector<vector<bool>> visited(maze.size(), vector<bool>(maze.size(), 0));
        recurse(maze, ans, temp, x, y, maze.size(), visited);
        return ans;
    }
};

int main()
{
    vector<vector<int>> maze = {
        {1, 0, 0, 0},
        {1, 1, 0, 1},
        {1, 1, 0, 0},
        {0, 1, 1, 1}
    };
    Solution sol;
    vector<string> result = sol.ratInMaze(maze);
    for(const string& path : result)
    {
        cout << path << endl;
    }
    return 0;
}