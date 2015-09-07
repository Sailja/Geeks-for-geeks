#include<bits/stdc++.h>
using namespace std;
long long int countNonDecreasing(int n)
{
	//d[i][j] contains total count of non decreasing 
	//numbers ending with digita i and of length j
	long long int dp[10][n+1];
	memset(dp,0,sizeof dp);
	for(int i=0;i<n;i++)
		dp[i][1]=1;
	for(int j=0;j<=9;j++)
	{
		for(int len=2;len<=n;len++)
		{
			for(int x=0;x<=j;x++)
			dp[j][len]+=dp[x][len-1];
		}
	}
	long long int count = 0;
 
    // There total nondecreasing numbers of length n
    // wiint be dp[0][n] +  dp[1][n] ..+ dp[9][n]
    for (int i = 0; i < 10; i++)
        count += dp[i][n];
 
    return count;
}
