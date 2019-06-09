#include <iostream>
#include <list>
#include <iterator>

using namespace std;

void showlist(list <int> g)
{
    list <int> :: iterator it;
    for(it = g.begin(); it!= g.end(); ++it)
    {
        cout << "\t" << *it;
    }
    cout << "\n";
}

int main()
{
    list <int> glist1,glist2;
    int input,i;
    for(i=0; i<10; ++i)
    {
        cin >> input;
        glist1.push_back(input);
        glist2.push_front(i*3);
    }

    cout << "\n List 1 is : ";
    showlist(glist1);

    cout << "\n List 2 is : ";
    showlist(glist2);

    cout << "\nglist1.front() : " << glist1.front();
    cout << "\nglist2.front() : " << glist2.front();

    cout << "\ngqlist1.pop_front() : ";
    glist1.pop_front();
    showlist(glist1);

    cout << "\ngqlist2.pop_back() : ";
    glist2.pop_back();
    showlist(glist2);

    cout << "\ngqlist1.reverse() : ";
    glist1.reverse();
    showlist(glist1);

    cout << "\ngqlist2.sort(): ";
    glist2.sort();
    showlist(glist2);

    return 0;
}
