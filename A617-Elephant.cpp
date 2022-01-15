#include<iostream>
using namespace std;

int main()
{
    int x,a,b,c,d,e;
    cin>>x;
    a=x/5;
    x=x%5;
    b=x/4;
    x=x%4;
    c=x/3;
    x=x%3;
    d=x/2;
    x=x%2;
    e=x;
    cout<<a+b+c+d+e<<endl;
    return 0;

}
