#include<bits/stdc++.h>
using namespace std;
int findLongestConsequence(int ar[],int n)
{
	set<int> S;
	int ans=0;
	for(int i=0;i<n;i++)
	{
		S.insert(ar[i]);
		
	}
	for(int i=0;i<n;i++)
	{
		if(S.find(ar[i]-1)==S.end())
		{
			int j=ar[i];
			while(S.find(j)!=S.end())
			j++;
			ans=max(ans,j-ar[i]);
		}
	}
	return ans;
}
int main()
{
	int ar[]={1,9,3,10,4,20,2};
	int n=sizeof ar/sizeof ar[0];
	cout << "Length of the Longest contiguous subsequence is "
         << findLongestConsequence(ar, n);
    return 0;
}
