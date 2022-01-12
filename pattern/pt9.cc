#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
     char c='A'+(n-1);
   for(int i=n;i>0;i--)
    {
        int j;
         for( j=0;j<n-i;j++)
            cout<<" ";
       cout<<c;
       for (j=0;j<2*(i-1);j++)
            cout<<" ";
        if(i!=1)
            cout<<c;
            c--;
        cout<<endl;
    }
}