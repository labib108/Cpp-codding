#include<iostream>
using namespace std;

int main()
{
    int i,x=0,y=0,k,n,w;
    cin>>k>>n>>w;
    for(i=1; i<=w; i++)
    {
        x=x+k;
        y=y+x;
    }
    if(y>n)
        cout<<y-n;
    else
        cout<<0;
    return 0;
}
//3 17 4
//3 6 9 12
