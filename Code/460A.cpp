#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, cnt=0;
    cin>>n>>m;
    while (n)
	{
		cnt++;
		n--;
		if (cnt%m==0)
            n++;
	}
    cout<<cnt<<endl;
    return 0;
}
