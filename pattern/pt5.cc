#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
     for(int i=0;i<n;i++)
    {
        int j;
         for( j=0;j<n-i;j++)
        {
            cout<<" ";
        }

        for(j=0;j<=i;j++)
        {
            if(j==0)
                cout<<"*";
            else
                cout<<" *";
        }
        cout<<endl;
    }
    for(int i=0;i<n-1;i++)
    {
        int j;
         for(j=0;j<=i;j++)
        {
            cout<<" ";
        }

        for(j=0;j<n-1-i;j++)
        {
            if(j==0)
                cout<<"*";
            else
                cout<<" *";
        }
        cout<<endl;
    }
}