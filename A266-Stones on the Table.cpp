#include<iostream>
using namespace std;

int main()
{
    int i,n,x=0;
    string str;
    cin>>n>>str;
    for(i=0; i<n; i++)
    {
        if(str[i]==str[i+1])
            x++;
    }
    cout<<x;
    return 0;
}
