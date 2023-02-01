#include <bits/stdc++.h>
using namespace std;

string s;
int n;

void solve(){
	cin >> n >> s;
	set<char> st;
	bool flag = 0;
	for(int i = 0 ; i < n ; i += 1){
		if(st.count(s[i])){
			flag = 1;
			break;
		}
		st.insert(s[i]);
		int j = i;
		while(j < n && s[j] == s[i]){
			j += 1;
		}
		i = j-1;
	}
	if(flag){
		cout << "NO" << endl;
	}
	else{
		cout << "YES" << endl;
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
