#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,ele;
    vector<int> arr;
    cout<<"Enter size of array you want to enter: ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter distinct elements: ";
        cin>>ele;
        arr.push_back(ele);
    }
    vector<vector<int>> powerSet;
    for(int i=0;i<(1<<n);i++)
    {
        vector<int> subArray;
        int count=0;
        while(count<n)
        {
            if(i&(1<<count)) subArray.push_back(arr[count]);
            count++;
        }
        powerSet.push_back(subArray);
    }
    for(int i=0;i<powerSet.size();i++)
    {
        for(int j=0;j<powerSet[i].size();j++)
        {
            cout<<powerSet[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}