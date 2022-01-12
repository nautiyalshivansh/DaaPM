#include<iostream>
using namespace std;
int main(){
    int n,a=1,b=1,c;
    cin>>n;
    cout<<a<<endl;
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            c=a+b;
            a=b;
            b=c;
            cout<<a<<" ";
        }
        cout<<endl;
    }
}