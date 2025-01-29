#include <bits/stdc++.h>
using namespace std;
/*int main()
{
    int a,b;
    cout<<"Enter dividend: ";
    cin>>a;
    cout<<"Enter d: ";
    cin>>b;
    if(b==1) cout<<dividend;
    int sum=0,count=0;
    while(sum+b<=a)
    {
        count++;
        sum+=b;
    }
    cout<<count;
    return 0;
}*/

int main()
{
    int divisor,dividend,pow = 0,quotient=0;
    cout<<"Enter Numerator: ";
    cin>>dividend;
    cout<<"Enter Denominator: ";
    cin>>divisor;
    bool sign=true;
    if((dividend<0&&divisor>0)||(dividend>0&&divisor<0)) sign=false;
    int n=abs(dividend);
    int d=abs(divisor);
    while (n>=(d*(1<<pow)))
    {
        pow++;
    }
    while (n>=d)
    {
        if(n-d*(1<<pow)>=0)
        {
            n-=d*(1<<pow);
            quotient+=1<<pow;
        }
        pow--;
    }
    if(sign) cout<<quotient;
    else cout<<-quotient;
}