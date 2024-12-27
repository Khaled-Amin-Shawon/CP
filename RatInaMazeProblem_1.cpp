/*
||-----------------------------------||
||       Khaled  Amin  Shawon        ||
||         Big Khaled code           ||
||-----------------------------------||
*/
//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution
{
public:
    void searchPaths(vector<vector<int>> &maze, int row ,int col, int numRows, int numCols, string currentPath, vector<string> &allPaths){
        if(row==numRows-1 && col==numCols-1){
            allPaths.push_back(currentPath);
            return;
        }
        maze[row][col] =0;
        vector<pair<pair<int,int>,char>> directions= {
            {{-1,0},'U'},{{0,1},'R'},{{1,0},'D'},{{0,-1},'L'}
        };
        for(const auto & direction : directions){
            int newRow = row+ direction.first.first;
            int newCol = col+ direction.first.second;
            if(newRow>=0 && newRow<numRows && newCol>=0 && newCol<numCols && maze[newRow][newCol]==1){
                searchPaths(maze, newRow, newCol, numRows,numCols, currentPath+direction.second, allPaths);
            }
        }
        maze[row][col] =1;
    }
    // Function to find all possible paths from top left to bottom right of a given matrix
    vector<string> findPath(vector<vector<int>> &mat)
    {
        if(mat.empty()|| mat[0].empty()||mat[0][0]==0 || mat.back().back()==0){
            return {};
        }
        int numRows=mat.size();
        int numCols=mat[0].size();
        vector<string> allPaths;
        searchPaths(mat, 0, 0, numRows,numCols,"", allPaths);
        return allPaths;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int>(n, 0));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++)
                cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends