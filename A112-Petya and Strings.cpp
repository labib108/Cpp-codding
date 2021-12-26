#include<iostream>
#include <cstring>
using namespace std;

int main()
{
    int i;
    string a,b;
    cin>>a>>b;
    for(i=0; i<a.size(); i++)
    {
        a[i]=toupper(a[i]);
        b[i]=toupper(b[i]);
    }
    if(a>b)
        cout<<1;
    else if(a<b)
        cout<<-1;
    else
        cout<<0;
    return 0;
}
