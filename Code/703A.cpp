#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,a,b,cnt=0;
	cin>>n;
	while(n--){
		cin>>a>>b;
		if(a>b)
            cnt++;
		else if(a<b)
            cnt--;
	}
	if(cnt>0)
        cout<<"Mishka"<<endl;
	else if(cnt<0)
        cout<<"Chris"<<endl;
	else
        cout<<"Friendship is magic!^^"<<endl;
	return 0;
}
