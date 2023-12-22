#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,flag;
    cout<<"enter the value"<<endl;
    cin>>a;
    cin>>b;
    for(int i=0;i<=b;i++)
    {
        if(i==1||i==0)
        {
             continue;
            
    
        }
        flag=1;
       
        for(int j=2;j<=i/2;j++)
        {
            if(i%j==0)
            {
                flag=0;
                break;
            }
            
        }
        if(flag==1)
        {
            cout<<i<<endl;
        }
    }
}