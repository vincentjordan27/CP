#include<string>
#include<iostream>

using namespace std;

int main()
{
    int T,coun=0;
    cin >> T;
    for(int i=0; i<T; i++)
    {
        string s;
        cin >> s;
        if(s == "Tetrahedron")
            coun += 4;
        else if(s == "Cube")
            coun += 6;
        else if(s == "Octahedron")
            coun += 8;
        else if(s == "Dodecahedron")
            coun += 12;
        else if(s == "Icosahedron")
            coun += 20;
    }

    cout << coun << endl;


    return 0;
}
