#include<iostream>
using namespace std;
void calFib(int n,int a,int b)
{
    if(n<=0)
    {
        return;
    }
    if(b==1)
    cout<<a<<" "<<b<<" ";
    else
    cout<<b<<" ";
    calFib(n-1,b,a+b);
}
int main()
{
    int n;
    cin>>n;
    calFib(n,1,1);
}