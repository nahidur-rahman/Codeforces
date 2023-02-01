#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, a[10]={0};
        long long int num;
        cin>>num;
        for(int i=0; i<n; i++){
            a[num%10]++;
            num/=10;
        }
        for(int i=0; i<10; i++){
            if(a[i])
        }
    }
    return 0;
}
