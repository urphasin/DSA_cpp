#include <bits/stdc++.h>
using namespace std;

int main() {
  int mat[3][5] = {1,1,1,1,1,2,2,2,2,2,3,3,3,3,3};
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      cout << mat[i][j] << " ";
    }
    cout << endl;
  }

  




  int m = 4, n = 10;
  vector<vector<int>> grid(n, vector<int>(m));

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
        cout << grid[i][j] << " ";
    }
  }


  int dx[4] = {-1, 1, 0, 0};
  int dy[4] = {0, 0, -1, 1};

  // for (int k = 0; k < 4; k++) {
  //   int ni = i + dx[k];
  //   int nj = j + dy[k];
  // }



  return 0;
}