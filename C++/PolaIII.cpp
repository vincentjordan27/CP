#include <cstdio>
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
  int N,e=-1;
  cin >> N;
  for (int i = 1; i <= N; i++) {
    for (int j = 1; j <= i; j++) {
        e = e + 1;
        if(e == 10)
            e = 0;
        cout << e;
      }
      cout << "\n";
    }



  return 0;
}
