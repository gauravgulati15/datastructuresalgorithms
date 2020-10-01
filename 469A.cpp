#include<bits/stdc++.h>
using namespace std; 
int main()
{
	int n;
	cin>>n;
	map<int, int> occ;
		
	for(int i=0;i<2;i++)
	{	int a;
		cin>>a;
		while(a--)
		{
			int x;
			cin>>x;
			++occ[x];
		}
	}
	
	for(int i=1;i<=n;i++)
	{
		if(occ[i]==0)
		{
			cout<<"Oh, my keyboard!";
			return 0;
		}
	}
	cout<<"I become the guy.";
}