#include <iostream>
#include <vector>

using namespace std;

bool isValidMove(vector<vector<bool>> &board, int n, int rookRow, int rookCol, int newRow, int newCol)
{

    if (newRow < 0 || newRow >= n || newCol < 0 || newCol >= n || board[newRow][newCol])
    {
        return false;
    }

    for (int i = 0; i < n; i++)
    {
        if (board[newRow][i] && i != newCol)
        {
            return false;
        }
        if (board[i][newCol] && i != rookRow)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;

        vector<vector<bool>> board(n, vector<bool>(n, false));

        for (int i = 0; i < m; i++)
        {
            int x, y;
            cin >> x >> y;
            board[x - 1][y - 1] = true;
        }

        bool possible = false;

        for (int i = 0; i < n && !possible; i++)
        {
            for (int j = 0; j < n && !possible; j++)
            {
                if (board[i][j])
                {
                    for (int k = 0; k < n && !possible; k++)
                    {
                        if (!board[i][k] && k != j)
                        {
                            possible = isValidMove(board, n, i, j, i, k);
                        }
                        if (!board[k][j] && k != i)
                        {
                            possible = isValidMove(board, n, i, j, k, j);
                        }
                    }
                }
            }
        }

        cout << (possible ? "YES" : "NO") << endl;
    }

    return 0;
}