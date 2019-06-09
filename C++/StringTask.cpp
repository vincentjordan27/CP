#include <iostream>
#include <cctype>
#include <string>

using namespace std;

int main()
{
    int n,i;
    string kata,kata2;

    cin >> kata;
    n = kata.length();
    for(i=0; i<n; i++)
    {
        if(kata[i] == 'A' || kata[i] == 'O' || kata[i] == 'Y' || kata[i] == 'E' || kata[i] == 'U' || kata[i] == 'I' || kata[i] == 'a' || kata[i] == 'o' || kata[i] == 'y' || kata[i] == 'e' || kata[i] == 'u' || kata[i] == 'i' )
        {
            continue;
        }
        else
        {
            kata2 += '.';
            kata2 += towlower(kata[i]);
        }
    }
    cout << kata2 << "\n";

    return 0;
}

/*
    cout<<"Enter element to be delete : ";
	cin>>del;
	for(i=0; i<size; i++)
	{
		if(arr[i]==del)
		{
			for(int j=i; j<(size-1); j++)
			{
				arr[j]=arr[j+1];
			}
			count++;
			break;
		}
	}

*/

/*
    isupper(x)

*/
