#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"give any intiger :";
    cin>>n;
    if(n%3==0||n%5==0)
    {
        cout<<"the given intiger is multiple of 3 or 5";
    }
    else
    {
        cout<<"the given number is not multiple of 3 or 5";
    }
    return 0;
    
}