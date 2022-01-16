#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    int n,a,b,c=0,m=0,i;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a>>b;
        c=c-a+b;
        if(c>m)
        {
            m=c;
        }
    }
    cout<<m<<endl;
    return 0;


}
