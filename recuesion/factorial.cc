#include<iostream>
using namespace std;
int calFact(int n)
{
    if(n<=1)
        return 1;
    return n * calFact(n-1);
}
int main()
{
    int n;
    cin>>n;
    cout<<calFact(n);
}