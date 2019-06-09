#include <iostream>
#include <string>

typedef int in;

using namespace std;

int main()
{
    string movie;
    cout << "What is the movie name : ";
    getline(cin,movie);

    in metascore;
    cout << "input score : ";
    cin >>  metascore;

    in tomatometer;
    cout << "Input Score : ";
    cin >> tomatometer;

    double avg =(metascore + tomatometer) / 2 ;
    double rescaledScore =avg /10;

    cout << "Our Calculated average on a 10 point scale for " << movie << " is " << rescaledScore << "\n";
}
