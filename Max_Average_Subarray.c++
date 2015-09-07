#include<bits/stdc++.h>
using namespace std;
int findMaxSum(int ar[],int n,int k)
{
	if (k>n)
	return -1;
	int sum=ar[0];
	for(int i=1;i<k;i++)
	{
		sum+=ar[i];
	}
	int max_sum=sum, max_end=k-1;
	for (int i=k;i<n;i++)
	{
		sum+=ar[i]-ar[i-k];
		if(sum>max_sum)
		{
			max_sum=sum;
			max_end=i;
		}
	}
	return max_end-k+1;
}
int main()
{
	int ar[]={1,12,-5,-6,50,3};
	int k=4;
	int n=sizeof(ar)/sizeof(ar[0]);
	cout <<"Index from where maximum average subarray is starting is"<<findMaxSum(ar,n,k);
	return 0;
}


