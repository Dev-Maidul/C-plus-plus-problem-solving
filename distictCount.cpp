// https://www.hackerearth.com/practice/data-structures/trees/binary-search-tree/practice-problems/algorithm/distinct-count/
// #include<bits/stdc++.h>
// using namespace std;
// int main(void){
//     int t;
//     cin>>t;
//     while(t--)
//     {
//     	int n,x;
//     	cin>>n;
//     	vector<int>vec(n);
//     	for(int i=0; i<n; i++)
//     	{
//     		cin>>vec[i];
//     	}
//    sort(vec.begin(),vec.end());
//     	int dist=1;
//     	for(int i=0; i<n-1; i++)
//     	{
//     		if(vec[i]!=vec[i+1])
//     		{
//     			dist++;
//     		}
//     	}
//     	if(dist==x) cout<<"Good"<<'\n';
//     	else if(dist>x) cout<<"Average"<<'\n';
//     	else cout<<"Bad"<<'\n';
//     }
//     return 0;
// }
// =========================solution 2======================
#include<bits/stdc++.h>
using namespace std;
int main(void){
    int t;
    cin>>t;
    while(t--)
    {
    	int n,x;
    	cin>>n;
    	vector<int>vec(n);
    	for(int i=0; i<n; i++)
    	{
    		cin>>vec[i];
    	}
   sort(vec.begin(),vec.end());
    	vec.erase(unique(vec.begin(),vec.end()),vec.end());
    	int dist=vec.size();
    	if(dist==x) cout<<"Good"<<'\n';
    	else if(dist>x) cout<<"Average"<<'\n';
    	else cout<<"Bad"<<'\n';
    }
    return 0;
}
