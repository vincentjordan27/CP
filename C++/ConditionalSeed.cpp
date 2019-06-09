#include <iostream>

using namespace std;

int main()
{
    int x;
    cin >> x;
    if(x > 0 && x < 60)
    {
        cout << "Sad Times\n";
    }
    else if(x >= 60 && x < 70 )
    {
        cout << "Bummer\n";
    }
    else if(x >= 70  && x < 80)
    {
        cout << "Average\n";
    }
    else if(x >=80 && x < 90)
    {
        cout << "Well Done\n";
    }
    else if(x >= 90 && x <= 100)
    {
        cout << "Awesome\n";
    }

    return 0;
}
