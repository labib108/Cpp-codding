#include<iostream>
#include<algorithm>
using namespace std;

int main ()
{
    int i,x=0;
    int arr[100];
    string str;
    cin>>str;
    for(i=0;i<str.size();i=i+2)
    {
        arr[x]=str[i]-'0';
        x++;
    }
    sort(arr,arr+x);
    for(i=0;i<x;i++)
    {
        cout<<arr[i];
        if(i==x-1)
            break;
        cout<<'+';
    }
    return 0;

}
