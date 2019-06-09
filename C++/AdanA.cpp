#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main()
{
    int your_int;
    cin >> your_int;
    int total = 0;
    int n=0;
      stringstream stream;
    stream << hex << your_int;
    cout << hex << your_int << endl;
    while (your_int > 0) {
    total += (pow(10,n++))*(your_int % 8);
    your_int /= 8;
}
    cout << total << endl;

    return 0;
}
