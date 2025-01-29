#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    if(n<1) printf("No, it is not a power of 2.");
    else if(n&(n-1)) printf("No, it is not a power of 2.");
    else printf("Yes, it is a power of 2.");
    return 0;
}