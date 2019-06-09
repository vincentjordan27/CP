#include <bits/stdc++.h>
#include <iostream>
#include <cstdio>
using namespace std;

int main() {

int N, M,i,j;
int matriks[101][101];
  cin >> N >> M;
  for (i = 0; i < N; ++i) {
    for (j = 0; j < M; ++j) {
      cin >> matriks[i][j];
    }
  }
for(j=0;j<M; j++)
{
  for(i=N-1; i>=0; i--)
  {
      if(i == 0)
      {
          cout << matriks[i][j];
      }
      else
        cout  << matriks[i][j] << " ";
  }
  cout << "\n";
}

return 0;
}
