#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int l=0; int r=n-1;
    int SerejaScore=0, DimaScore=0;
    for(int turn=0; turn<n; turn++)
    {
        if(turn%2==0)
        {
            if(arr[l]>arr[r])
            {
                SerejaScore+=arr[l];
                l++;
            }
            else{
                SerejaScore+=arr[r];
                r--;
            }
        }
        else{
            if(arr[l]>arr[r])
            {
                DimaScore+=arr[l];
                l++;
            }
            else{
                DimaScore+=arr[r];
                r--;
            }
        }
    }
    
    cout<<SerejaScore<<" "<<DimaScore<<'\n';
    
    return 0;
}