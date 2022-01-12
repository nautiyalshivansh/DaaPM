#include<iostream>
using namespace std;
void priN(int n)
{
    static int a=1;
    if(n<=0)
        return;
    
    cout<<a<<" ";
    a*=2;
    priN(n-1);
}
int main()
{
    int n;
    cin>>n;
    priN(n);
}