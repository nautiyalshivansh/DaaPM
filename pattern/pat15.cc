#include<iostream>
using namespace std;
int main(){
    int n,a=1,b=1,c;
    cin>>n;
    cout<<a<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j || (i+j)==(n-1) || i==0 || j==0 || j==n-1 || i==n-1)
                cout<<"*";
            else
                cout<<" ";
        }
        cout<<endl;
    }
}