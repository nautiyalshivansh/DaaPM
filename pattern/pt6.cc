#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int j;
         for( j=0;j<n-1-i;j++)
        {
            cout<<" ";
        }

        for(j=2*i+1;j>0;j--)
        {
                cout<<j;
        }
        cout<<endl;
    }
}