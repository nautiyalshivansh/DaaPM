#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int j,no;
     for(int i=0;i<=n;i++)
    {
        no=n;
        for(j=0;j<=i;j++)
        {
            cout<<no--;
        }
        cout<<endl;
    }
    for(int i=0;i<n;i++)
    {
        no=n;
        for(j=0;j<n-i;j++)
        {
            cout<<no--;
        }
        cout<<endl;
    }
}