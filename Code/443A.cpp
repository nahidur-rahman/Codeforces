#include<bits/stdc++.h>
using namespace std;

int main(){
    map<char, int> m;
    char ch[1005]={0};
    int n, i=0;
    //ch[0]=0;
    while(ch[i]!='}'){
        i++;
        cin>>ch[i];
        if(ch[i]>='a' && ch[i]<='z')
            m[ch[i]]++;
    }
    n=m.size();
    cout<<n<<endl;
    return 0;
}
