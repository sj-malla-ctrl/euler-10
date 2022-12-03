#include<iostream>
using namespace std;
int main()
{
    int t=0,a=1,b=2,c=0;
    while(b<=4000000)
    {
        c=b+a;
        if(b%2==0)
        t=t+b;
        a=b;
        b=c;
        
    }
    cout<<t;
    return 0;
}