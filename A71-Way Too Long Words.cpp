#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    int i,n;
    cin>> n;
    for(i=1; i<=n; i++)
    {
        int x;
        string str;
        cin>> str;
        x=str.size();
        if(x>10)
        {
            cout<<str[0]<<x-2<<str[x-1]<<endl;
        }
        else
        {
            cout<<str<<endl;
        }
    }
    return 0;
}
