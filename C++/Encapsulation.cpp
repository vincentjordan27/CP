#include<bits/stdc++.h>
#include<iostream>

using namespace std;

class Encapsulation
{
private:
    int x;
public:
    void sets(int a)
    {
        x = a;
    }

    int get()
    {
        return x;
    }
};

int main()
{
    Encapsulation obj;
    obj.sets(10);
    obj.get();

    cout << obj.get() <<endl;
    return 0;
}
