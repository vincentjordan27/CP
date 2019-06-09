#include <iostream>

using namespace std;

int main(){

   long int n,i,j,coun,l,modus,arr[100000];
    cin >> n;

    for(i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    modus = arr[0],l = 1;
    for(i=0; i<n-1; i++)
    {
        if(arr[i]>0)
        {
            coun = 1;
            for(j=i+1; j<n; j++)
            {
                if(arr[i] == arr[j])
                {
                    arr[j] = 0;
                    coun += 1;
                }


            }
            if(coun > l)
            {
                l = coun;
                modus = arr[i];
            }
            else if(coun == l)
            {
                if(arr[i] > modus)
                {
                    l = coun;
                    modus = arr[i];
                }
            }
        }
    }
    cout << modus << endl;
 return 0;

}
