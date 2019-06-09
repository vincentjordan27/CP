#include<iostream>

using namespace std;

int main()
{
    for(int i=1; i<=9; i += 2)
    {
        for(int j=0; j<3; j++)
            cout << "I=" << i << " " << "J=" << i+6-j << endl;
    }


    return 0;
}
