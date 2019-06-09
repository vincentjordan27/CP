#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
#include <set>

using namespace std;

bool f(int x, int y)
{
    return x  > y;
}

void mapDemo()
{
    map<int,int> A;
    A[1] = 100;
    A[2] = -1;
    A[3] = 200;
    A[10000213] = 1;

    map<char,int> cnt;
    string x = "Vincentius Jordan";ff

    for(char c : x){
        cnt[c]++;
    }
    cout << cnt['n'] << " " << cnt['V'] << endl;
}
void vectorDemo()
{
    vector <int> A = {11,2,3,14 };

    sort(A.begin(), A.end());

    for(int i=0; i<4; i++)
    {
        cout << A[i] << " ";
    }
    cout << "\n";

    bool present = binary_search(A.begin(),A.end(),3);
    present = binary_search(A.begin(),A.end(),4);

    A.push_back(100);
    present = binary_search(A.begin(),A.end(),100);

     A.push_back(90);
      A.push_back(50);
       A.push_back(70);
        A.push_back(30);
         A.push_back(123);
    sort(A.begin(),A.end());
         //2,3,11,14,30,50,70,90,123

    vector <int>::iterator it = lower_bound(A.begin(),A.end(),70);
     vector <int>::iterator it2 = upper_bound(A.begin(),A.end(),70);

    cout << *it << " " << *it2 << endl;

    cout << it2 - it << endl;

    sort(A.begin(),A.end(),f);


    vector<int>::iterator it3;

    for(it3 = A.begin(); it3 != A.end(); it3++)
    {
        cout << *it3 << " ";
    }
}

void setDemo()
{
    set<int> S;
    S.insert(-10);
    S.insert(2);
    S.insert(32);
    S.insert(-3);

    //-10 -3 2 32

    for(int x: S)
    {
        cout << x << " ";
    }
    cout << endl;

    auto it = S.find(-1 );
    if(it == S.end())
    {
        cout << "Not Present\n";
    }
    else
        cout << "Found\n";
    cout << *it << endl;

    auto it2 = S.lower_bound(-3);
    auto it3 = S.upper_bound(2);

    cout << *it2 << " " << *it3 ;

    auto it4 = S.upper_bound(-1);
    if(it4 == S.end())
    {
        cout << "Oops! cant find something like that"
 << endl;    }

}

int main()
{
    mapDemo();

    return 0;
}
