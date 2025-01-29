#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,pos=1;
    cout<<"Enter a number with only one set bit: ";
    cin>>n;
    //the first pos is taken to be 1
    while(n!=0)
    {
        if(n&1) break;
        pos++;
        n=n>>1;
    }
    printf("The position of only set bit is: %d",pos);
    return 0;
}