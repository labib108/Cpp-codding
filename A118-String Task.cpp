#include<iostream>
#include<string>
using namespace std;

int main()
{
    int i,j;
    string str1,str2;
    cin>>str1;
    for(i=0;i<str1.size();i++)
    {
        str1[i]=tolower(str1[i]);
        if(str1[i]=='a' || str1[i]=='e' || str1[i]=='i' || str1[i]=='o' || str1[i]=='u'|| str1[i]=='y')
            continue;
        else
        {
            str2+='.';
            str2+=str1[i];
        }
    }
    cout<<str2<<endl;
    return 0;
}
