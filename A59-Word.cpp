#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int a=0,b=0,i;
    for(i=0;i<s.size();i++)
    {
        if(s[i]>=65 && s[i]<=90)
        {
            a++;
        }
        else
            b++;
    }
    if(b>=a)
    {
        transform(s.begin(),s.end(),s.begin(), ::tolower);
        cout<<s<<endl;
    }
    else
    {
        transform(s.begin(),s.end(),s.begin(), ::toupper);
        cout<<s<<endl;
    }
    return 0;
}
