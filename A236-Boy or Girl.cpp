#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    int i,n=0,l;
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    for(i=0;i<s.size();i++)
    {
        if(s[i+1]!=s[i])
            n++;
    }
    if(n%2==0)
        cout<<"CHAT WITH HER!"<<endl;
    else
        cout<<"IGNORE HIM!" <<endl;
    return 0;

}
