#include<iostream>
using namespace std;

int main()
{
    int i;
    string str;
    cin>>str;
    if(str[0]>=97 && str[0]<=122)
    {
        str[0]=str[0]-32;
    }
    cout<<str;
    return 0;
}
