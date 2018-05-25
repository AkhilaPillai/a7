#include<iostream>
using namespace std;
int main()
{
int v,i;
cin>>v;
int a[v];
for(i=0;i<v;i++)
{
cin>>a[i];
}
for(i=0;i<v;i++)
{
    cout<<i;
    cout<<a[i]<<endl;
}
return 0;
}
