#include<iostream>

using namespace std;

class Geeks
{
public:
    void func(int x)
    {
        cout << "Value of x is : " << x << endl;
    }
    void func(double x)
    {
        cout << "Value of x is : " << x << endl;
    }
    void func(int x,int y)
    {
        cout << "Value of x and y is : " << x << " " << y <<endl;
    }


};

int main()
{
    Geeks obj1;

    obj1.func(13);
    obj1.func(3.98);
    obj1.func(23,56);

    return 0;
}
