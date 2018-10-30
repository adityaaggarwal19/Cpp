#include<iostream>
using namespace std;

int main()
{
	int t,n;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		cin>>n;
		if(n==2010 || n== 2015 || n== 2016 || n == 2017 || n ==2019)
		{
			cout<<"HOSTED";
		}
		else if (n==2011||n==2012||n==2013||n==2014||n==2018)
		{
			cout<<"NOT HOSTED";
		}
	}
	return 0;
}
