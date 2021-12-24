#include<iostream>
using namespace std;

int main()
{
    int n,i,x=0;
    string ch;
    cin>> n;
    for(i=0; i<n; i++)
    {
        cin >> ch;
        if(ch[1]=='+')
        {
            ++x;
        }
        else
            --x;
    }
    cout<< x;
    return 0;
}
