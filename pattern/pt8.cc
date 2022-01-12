#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
     for(int i=0;i<n;i++)
    {
        int j;
         for( j=0;j<n-1-i;j++)
            cout<<" ";
       cout<<i+1;
       for (j=0;j<2*i;j++)
            cout<<" ";
        if(i!=0)
            cout<<i+1;
        cout<<endl;
    }
   for(int i=n-1;i>0;i--)
    {
        int j;
         for( j=0;j<n-i;j++)
            cout<<" ";
       cout<<i;
       for (j=0;j<2*(i-1);j++)
            cout<<" ";
        if(i!=1)
            cout<<i;
        cout<<endl;
    }
}