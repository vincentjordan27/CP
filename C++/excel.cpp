#include<iostream>
#include<string>

using namespace std;
string convertToTitle(int n) {
        string r = "";
        while (n > 0) {
            r = (char)(65 + (n - 1) % 26) + r;
            n = (n - 1) / 26;
        }
        return r;
    }
int main()
{
    int n;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        int t;
        cin >> t;

        cout <<"Case #" <<i+1 <<": " << convertToTitle(t); << endl;
    }

    return 0;
}
