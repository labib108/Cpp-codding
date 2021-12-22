#include<iostream>
using namespace std;

int main()
{
    int a,i,n,k,x=0,round[100];
    cin>> n >> k;
    for(i=0;i<n;i++)
    {
        cin>> round[i];
    }
    for(i=0;i<n;i++)
    {
        if(round[i]>=round[k-1] && round[i]>0)
            x++;
        else
            continue;
    }
    cout<< x <<endl;
    return 0;
}
