#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
    int T;
    cin >> T;
    if( T >= 1 && T <= 100)
    {
        for(int i=0; i <T; i++)
        {

            int a,cou=0;
            string s;
            cin >> a >> s;

                string r = "";

                for(int i=0; i<s.length(); i++)
                {
                    if(cou == 0)
                    {
                        if(s[i] == 8)
                        {
                            r[0] = s[i];
                            cou++;

                        }
                        else
                                continue;
                    }

                        if(r.length() == 11)
                            {
                                break;

                            }
                            else
                              {
                                  r += s[i];

                              }



                }

                if(r.length() == 11)
                {
                    cout << "YES" << endl;
                }
                else
                    cout << "NO" << endl;


            }
        }

    return 0;
}
