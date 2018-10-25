	#include<bits/stdc++.h>
	using namespace std;
	int main()
	{
	int t;
	cin>>t;
	int c[t], l=0, test=t;
		while(t--)
		{
			int n, k;	
			cin>>n>>k;
			double a[n];
			for(int i=0;i<n;i++)
				cin>>a[i];

			int count=0;
		sort(a, a+n, greater<int>());

					int d=a[k-1];
					for(int i=0;i<n;i++)
						if(a[i]==d || a[i]>d)
						count++;
		c[l++]=count;
		}
		for (int i = 0; i < test; ++i)
		{
			cout<<c[i]<<endl;
		}
	return 0;
	}