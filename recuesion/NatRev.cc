#include<iostream>
using namespace std;
void priN(int n)
{
    if(n<=0)
        return;
    cout<<n<<" ";
    priN(n-1);
}
int main()
{
    int n;
    cin>>n;
    priN(n);
}