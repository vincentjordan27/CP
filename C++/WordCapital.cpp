#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main()
{
    string kata;
    cin >> kata;
    int len = kata.length();
    if(kata.size() < 10000 && kata.size() > 0)
     {
         for (int i = 0; i < len; i++) {
                int c = kata[0];
                if (islower(c))
                    kata[0] = toupper(c);

            }
        cout << kata << "\n";
     }
    return 0;
}
