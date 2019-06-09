#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int x[222],y[222];

	for(int i=0; i<n; i++) 
		cin >> x[i] >> y[i];
	for(int i=0; i<n; i++)
		int X = x[i] , Y = y[i];
       	for(int j=0; j<n; j++)
       		int X2 = x[j] , Y2 = y[j];
       		if(X2 == X)

	return 0;

}