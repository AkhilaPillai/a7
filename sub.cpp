#include<iostream>
using namespace std;
int main()
{
int c1,c2,m1,h1,h2,m2;
int h,m;
int s,hr,min;
cin>>h1;
cin>>m1;
cin>>h2;
cin>>m2;
c1=h1*60;
m1=c1+m1;
c2=h2*60;
m2=c2+m2;
if(m1>m2)
{
 s=m1-m2;
 hr=s/60;
 min=s%60;
}
else
 {
 s=m2-m1;
 hr=s/60;
 min=s%60;
 }
 cout<<hr<<" "<<min;
return 0;
}
