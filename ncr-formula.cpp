#include<iostream>
using namespace std;

int fact(int num)//function begins after calling it
{
     int factorial=1;
     for(int i=2;i<=num;i++)//loop for calculating the factorial
     {
         factorial*=i;
     }
     return factorial;//returning the factorial
}

int main()//execution begins from main function
{
    int n,r;//declaing some vaiables
    cout<<"ente the values of n and r respectively :"<<endl;
    cin>>n>>r;//taking input
    int ans=fact(n)/(fact(n-r)*fact(r));//formula for ncr
    cout<<ans<<endl;//printing the values of ncr
    return 0;
}
