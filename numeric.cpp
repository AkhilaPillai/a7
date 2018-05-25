#include <iostream>
#include<string>
using namespace std;

int main()
{
    char s;
cin>>s;
if((s>='a' && s<='z') ||  (s>='A' && s<='Z'))
    {
        cout<<"no";
    }
else
{
    cout<<"yes";
}
    return 0;
}
