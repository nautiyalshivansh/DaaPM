#include<iostream>
using namespace std;
void priN(int n)
{
    if(n<=0)
        return;
    priN(n-1);
    cout<<2*n<<" ";
}
int main()
{
    int n;
    cin>>n;
    priN(n);
}