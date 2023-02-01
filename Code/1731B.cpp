#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        long long int n, sum=0;
        cin>>n;
        int i=1;
        while(i<n){
            sum+=(i*i)+(i*(i+1));
            i++;
        }
        sum+=i*i;
        unsigned long long rem=(sum*2022);
        rem = rem % (1000000007);
        cout<<rem<<endl;
    }
    return 0;
}
