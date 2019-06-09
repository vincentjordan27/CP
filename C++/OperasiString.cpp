#include<bits/stdc++.h>
#include<iostream>
#include<string>

using namespace std;

int main()
{
    string s1,s2,s3,s4,r;
    cin >> s1 >> s2 >> s3 >> s4;
    int coun=0;
    if(s1.length() >= 1 && s1.length() <= 100 && s2.length() >= 1 && s2.length() <= 100 && s3.length() >= 1 && s3.length() <= 100 && s4.length() >= 1 && s4.length() <= 100)
       {
        for(int i=0; i<s1.length();i++)
        {
            for(int j=0; j<s2.length(); j++)
            {
                if(s1[i] == s2[j])
                {
                    coun++;
                }
            }
            if(coun == 1)
            {
                coun = 0;
                continue;
            }
            else
                r += s1[i];
        }
        int n = s3.length();
        size_t found = r.find(s3);
        if(found != string::npos)
            r.insert(found+n,s4);

        cout << r << endl;
    }
    return 0;
}
