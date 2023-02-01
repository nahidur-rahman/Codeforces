#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, a[1005], dima=0, sirja=0;
    cin>>n;
    for(int i=0; i<n; i++)
        cin>>a[i];
    int i=0, j=n-1, ts=1;
    while(n--){
        if(ts){
            if(a[i]>a[j]){
                sirja+=a[i];
                i++;
            }
            else{
                sirja+=a[j];
                j--;
            }
            ts=0;
        }
        else{
            if(a[i]>a[j]){
                dima+=a[i];
                i++;
            }
            else{
                dima+=a[j];
                j--;
            }
            ts=1;
        }
    }
    cout<<sirja<<" "<<dima<<endl;
    return 0;
}
