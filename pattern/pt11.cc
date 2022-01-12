#include<iostream>
using namespace std;
int main(){
    int n,j;
    cin>>n;
   for(int i=0;i<n/2;i++)
    {
         for( j=0;j<=i;j++)
            cout<<j+1;
       for (;j<n-1-i;j++)
            cout<<" ";
        for( ;j<n;j++)
            cout<<j+1;
        cout<<endl;
    }
    for(int i=n/2;i>=0;i--)
    {
         for( j=0;j<=i;j++)
            cout<<j+1;
       for (;j<n-1-i;j++)
            cout<<" ";
        for( ;j<n;j++)
            cout<<j+1;
        cout<<endl;
    }
}