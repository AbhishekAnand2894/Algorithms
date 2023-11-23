#include <bits/stdc++.h>
using namespace std;


int main()
{
	int n;
	cin>>n;
	vector<int>a(n);
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int len = (int) sqrt (n + .0) + 1;
	//cout<<len<<endl;
	vector<int>b(len);
	for(int i=0;i<n;i++)
	{
		b[i/len]+=a[i];
	}
	int q;
	cin>>q;
	while(q--)
	{
		int l,r;
		cin>>l>>r;
		//l--;
		//r--;
		int sum=0;
		for(int i=l;i<=r;)
		{
			if(i%len==0&&i+len-1<=r)
			{
               sum+=b[i/len];
               i+=len;
			}
			else
			{
				sum+=a[i];
				i++;
			}

		}
		cout<<sum<<endl;
	}



	return 0;
}