#include <bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t;
	cin>>t;
	for(int i = 0;i<t;i++)
	{
		int n;
		cin>>n;
		if(n==1)
		{
			cout<<1<<'\n';
		}
		else
		{
			int f = 2;
			for(int k = 0;k<n;k++)
			{
				cout<<f<<' ';
				f+=1;

			}
			cout<<'\n';
		}
	}
	return 0;
}   
