#include<bits/stdc++.h>

using namespace std;

class vehicle
{
public:
    vehicle()
    {
        cout << "This is a vehicle" <<endl;
    }
};

class fourwheel : public vehicle
{
public:
    fourwheel()
    {
        cout << "This is four wheel vehicle" <<endl;
    }
};

class car : public fourwheel
{
public:
    car()
    {
        cout << "This is a car" <<endl;
    }

};

int main()
{
    car obj;

    return 0;
}
