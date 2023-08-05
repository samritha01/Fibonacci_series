#include<iostream>
using namespace std;
int main()
{
    int a0=0,a1=1,nextTerm=0,n;
    cout<<"Enter n:";
    cin>>n;
    cout<<"Fibonacci series:"<<a0<<", "<<a1<<" ,";
    nextTerm=a0+a1;
    cout<<"hi";
    while(nextTerm<=n)
    {
        cout<<nextTerm<<", ";
        a0=a1;
        a1=nextTerm;
        nextTerm=a0+a1;
        
    }
    return 0;
}