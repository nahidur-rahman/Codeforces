#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        long long int n, k;
        cin>>n>>k;
        //int sum=0;
        long long int lg[n+1], qs[k+1];
        for(long long int i=0; i<n; i++)
            cin>>lg[i];
        for(long long int i=0; i<k; i++){
                long long int sum=0;
            cin>>qs[i];
            for(long long int j=0; j<n; j++){
                if(qs[i]>=lg[j])
                    sum+=lg[j];
                else
                    break;
            }
            cout<<sum;
            if(i!=k-1)
                cout<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
