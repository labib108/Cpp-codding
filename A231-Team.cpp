#include<iostream>
using namespace std;

int main()
{
    int n,i,x=0;
    cin>> n;
    for(i=1;i<=n;i++)
    {
        int a,b,c;
        cin >>a >>b >>c;
        if(a+b+c>=2)
            x++;
        else
            continue;
    }
    cout<< x <<endl;
    return 0;
}
