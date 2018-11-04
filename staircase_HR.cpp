#include <bits/stdc++.h>

using namespace std;

// Complete the staircase function below.
int staircase(int n) {
    for(int i=0;i<n;i++)
    {
        for(int j=n-i-1;j>0;j--)
        {
            cout<<" ";
        }
        for(int k=i+1;k>0;k--)
        {
        	cout<<"#";
		}
		cout<<endl;
    }
    return 0;
}

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    staircase(n);

    return 0;
}

