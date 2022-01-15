#include<iostream>
using namespace std;

int main()
{
    int i=0,a,b;
    cin>>a>>b;
    while(1)
    {
        i++;
        if(3*a>2*b)
        {
            cout<<i<<endl;
            break;
        }
        a=3*a;
        b=2*b;
    }
    return 0;
}
