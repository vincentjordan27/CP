#include <iostream>
#include <string>

using namespace std;

int main()
{
    string word;
    cin >> word;


        int hitung = 0;
        char huruf='0';
        cin >> huruf;
        int i;
        for(i=0; i<(int)word.size(); i++)
        {

            char ch = word.at(i);
            if(huruf == ch)
            {
                hitung++;
            }
        }
        cout <<  hitung ;



    return 0;
}
