#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
   for(int i=n;i>0;i--)
    {
        int j;
         for( j=0;j<n-i;j++)
            cout<<" ";
       cout<<n-i+1;
       for (j=0;j<2*(i-1);j++)
            cout<<" ";
        if(i!=1)
            cout<<n-i+1;
        cout<<endl;
    }
    for(int i=1;i<n;i++)
    {
        int j;
         for( j=0;j<n-1-i;j++)
            cout<<" ";
       cout<<n-i;
       for (j=0;j<2*i;j++)
            cout<<" ";
        if(i!=0)
            cout<<n-i;
        cout<<endl;
    }
}