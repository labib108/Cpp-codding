#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int i,j,x,p;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            cin>>p;
            if(p==1)
            {
                x=abs(i-3)+abs(j-3);
            }
        }
    }
     cout<< x;
    return 0;
}
