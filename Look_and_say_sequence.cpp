#include<bits/stdc++.h>
using namespace std;
//finding nth number of look-and-say sequence
int main()
{
	int n;
	cin>>n;
	if (n==1)
	cout<<"1";
	if (n==2)
	cout<<"11";
	string str="11";
	for(int i=3;i<=n;i++)
	{ 
		str+="z";//a dummy constant is added at end
		
		int l=str.length();
		char ch=str[0];
		int counter=1;
		string final="";
		for(int i=1;i<=l;i++)
		{
			str+='z';
			if(str[i]!=ch)
			
			{
				final+=counter+'0';
				final+=ch;
				counter=1;
				ch=str[i];
			}
			else
			counter++;
		}
		cout<<final<<endl;
		str=final;
		final="";
	
	}
	
	return 0;
	
}
