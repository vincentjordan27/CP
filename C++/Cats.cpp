#include<bits/stdc++.h>
using namespace std;
int fish[15]=   {1,0,0,1,0,0,1,1,0,0,1,0,0,1};
int rabbit[15]= {0,1,0,0,0,1,0,0,1,0,0,0,1,0};
int chicken[15]={0,0,1,0,1,0,0,0,0,1,0,1,0,0};
int main()
{
	int a,b,c;
	int x,y,z;
	int week;
	cin>>a>>b>>c;
	x=a/3;
	y=b/2;
	z=c/2;
	week=min(min(x,y),z);
	a=a-3*week;
	b=b-2*week;
	c=c-2*week;
	int day=7*week;
//cout<<"week"<<week<<" day"<<day<<endl;
	int big=0;
	for(int i=1;i<=7;i++)
	{
		int tian=0;
		x=a;
		y=b;
		z=c;
		for(int j=0;j<7;j++)
		{
			x=x-fish[i+j];
			y=y-rabbit[i+j];
			z=z-chicken[i+j];
			if(x<0||y<0||z<0)break;
			tian++;
		}
	    big=max(big,tian);
	}
	cout<<day+big;
	return 0;
}
