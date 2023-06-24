#include <bits/stdc++.h>
using namespace std;
bool isSafe(vector<vector<int>> &mat, vector<vector<bool>>&visited,

XW ((x > 0 && x < R && y >= 0 && y < C) && !visited[x][y] && mat[ 
    bool ratInMaze(vector<vector<int>> &mat, vector<vector<bool>> &visited, int x, int y, const int &R){
        //base condition
        if (x == R - 1 && y ==C-1 && mat[R-1][C-1]== 1) {
            visited[x][y]= true;
            return true;
        }
        // we're not there yet
        if (ratInMaze(mat, visited,))

bool ratInMaze(std::vector<std::vecto if (isSafe(mat, visited, x, y, R, std::vector<std::vector<bool>> &visit for (int i = 0; i < 4; i++) { const int &R, const int &C)

// recursion

->go, e -> blocker, bool ranInMaze(vector<vector<int>> &mat) {

int R= mat.size();

if (R== 0) { return true;

} int C mat[0].size();

vector<vector<bool>> visited (R, vector<bool>(C, false)); return ratInMaze(mat, visited, e, e, R, C);
int main(){
    
}