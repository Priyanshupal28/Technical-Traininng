#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int num=n,pow=0,square=0;
    while(n!=0)
    {
        if(n&1) square+=(num<<pow);
        pow++;
        n=n>>1;
    }
    cout<<square;
    return 0;
}