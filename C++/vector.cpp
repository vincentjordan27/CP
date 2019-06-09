#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> arr;

    for(int i=0; i<5; i++)
        arr.push_back(i);

    for(int i=0; i<arr.size(); i++)
        cout << arr[i] <<endl;

    arr.pop_back();

    for(int i=0; i<arr.size(); i++)
        cout << arr[i] <<endl;


    return 0;
}
