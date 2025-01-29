#include <bits/stdc++.h>
using namespace std;
//Enter only two distinct elements and others repeated 2 times
int main()
{
    int n,ele;
    vector<int> v;
    //the length of the array will always be even considering the question
    cout<<"Enter length of array: ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter arr["<<i<<"]: ";
        cin>>ele;
        v.push_back(ele);
    }

    int ans;
    for(int i=0;i<v.size();i++)
    {
        ans^=v[i];
    }
    int seperator=(ans&ans-1)^ans;
    int b1=0,b2=0;
    for(int i=0;i<n;i++)
    {
        if(v[i]&seperator) b1^=v[i];
        else b2^=v[i];
    }
    cout<<b1<<" is the first element and "<<b2<<" is the second element";

}