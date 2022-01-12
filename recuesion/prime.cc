#include<iostream>
using namespace std;
bool isPrime(int n)
{
    if(n==2)
        return true;
    for(int i=2;i*i<=n;i++)
    {
        if (n%i==0)
            return false;
    }
    return true;
}
void priP(int n)
{
    static int i=1;
    i++;
   if(n<=0)
        return;
    if (isPrime(i)){
        cout<<i<<" ";
        priP(n-1);
    }
    else
        priP(n);  
}
int main()
{
    int n;
    cin>>n;
    priP(n);
}