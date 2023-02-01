#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    cin>>t;
    while(t--){
        long long int n, cnt=0;
        cin>>n;
        while(n>1){
            if(n%6==0){
                n/=6;
            }
            else{
                n*=2;
            }
            cnt++;
        }
        if(n==1)
            cout<<cnt<<endl;
        else
            cout<<-1<<endl;
    }
    return 0;
}

/*
#include<bits/stdc++.h>
using namespace std;
int main(){
   long long t;
   cin>>t;
   while(t--){
    long long n,c=0;
    cin>>n;
    while(n>1){
        if(n%6==0) n/=6;
        else n*=2;
        c++;
    }
     cout<<(n==1?c:-1)<<endl;
   }
return 0;
}
*/
