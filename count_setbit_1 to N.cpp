#include <bits/stdc++.h>
using namespace std;


int power(int n)
{
    int pow=0;
    while(n>=(1<<pow+1))
    {
        pow++;
    }
    return pow;
}
int count_setbits(int n)
{
    if(!n) return 0;
    int x=power(n);
    int bits_0_to_2x=(1<<(x-1))*x;
    int bits_2x_to_n=n-(1<<x)+1;
    int rest=n-(1<<x);
    int ans=bits_0_to_2x+bits_2x_to_n+count_setbits(rest);
    return ans;
}
int main()
{
    int n;
    cout<<"Enter the range: ";
    cin>>n;
    int ans=count_setbits(n);
    cout<<ans;
}



