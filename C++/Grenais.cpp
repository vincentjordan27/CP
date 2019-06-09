#include<iostream>

using namespace std;

int main()
{
    int inter=0,gremio=0,draw=0,game=0;
    while(true)
    {
        int a,b,x;
        cin >> a >> b;
        if(a > b)
            inter++,game++;
        else if(a < b)
            gremio++,game++;
        else
            draw++,game++;
        cout << "Novo grenal (1-sim 2-nao)" << endl;
        cin >> x;
        if(x == 2)
            break;
    }
    cout << game << " grenais" << endl;
    cout << "Inter:" << inter << endl;
    cout << "Gremio:" << gremio << endl;
    cout << "Empates:" << draw << endl;
    if(inter > gremio)
        cout << "Inter venceu mais" << endl;
    else if(inter < gremio)
        cout << "Gremio venceu mais" << endl;
    else
        cout << "Não houve vencedor" << endl;

    return 0;
}
