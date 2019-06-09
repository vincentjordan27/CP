#include<bits/stdc++.h>

using namespace std;
bool groupsum(int start, int arr[],int target)
{
    int total;
    for(int i=0; i<jumlah; i++)
    {
        total = arr[i];
        for(int j= i+1; j<=jumlah; j++)
        {
            if(total == target)
                return true;
            if(j == jumlah)
                break;
            if(total + arr[j] > target)
                continue;
            else
                total = total + arr[j];
        }
    }

    return false;
}

int main()
{
    int start,target,jumlah;
    cin >> start >> jumlah >> target;
    int nums[jumlah];
    for(int i=0; i<jumlah; i++)
    {
        cin >> nums[i];
    }
    sort(nums,nums+jumlah,greater<int>());
    bool hasil = groupsum(start,nums,target,jumlah);

    if(hasil)
        cout << "YES" <<endl;
    else
        cout << "NO" <<endl;

    return 0;
}
