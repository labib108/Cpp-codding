#include<iostream>
using namespace std;

int main()
{
    int i,x=1;
    string a;
    cin>>a;
    for(i=0; i<a.size(); i++)
    {
        if(a[i]!=a[i+1])
        {
            x=1;
        }
        else
        {
            x++;
            if(x==7)
            {
                cout<<"YES"<<endl;
                break;
            }
        }
    }
    if(x<7)
    {
        cout<<"NO"<<endl;
    }
    return 0;
}
