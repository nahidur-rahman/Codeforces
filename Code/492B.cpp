/*
#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n, l;
    double maxx=-1000000.0, dis=0.0;
    cin>>n>>l;
    int arr[n+1];
    for(int i=0; i<n; i++)
        cin>>arr[i];
    sort(arr, arr+n);
    if(arr[0]!=0){
        maxx=arr[0]/1.0;
    }
    for(int i=1; i<n; i++){
        dis=(arr[i]-arr[i-1])/2.0;
        maxx=max(maxx, dis);
    }
    if(arr[n-1]!=l){
        dis=(l-arr[n-1])/1.0;
        maxx=max(maxx, dis);
    }
    cout<<maxx<<endl;

    return 0;
}
*/
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,l, a[1001],dif;
    scanf("%d %d", &n, &l);
    for(int i=0; i<n; i++)
        scanf("%d", a+i);
    sort (a, a+n);
    if(a[0] != 0){
        dif = 2*a[0];
    }
    else dif = 0;
    for(int i=1; i<n ;i++)
    {
        if(dif < (a[i] - a[i-1]))
            dif = a[i] - a[i-1];
    }
    if (a[n-1] != l){
        if(dif < 2*(l - a[n-1]))
            dif = 2*(l - a[n-1]);
    }
    printf("%lf\n", dif/2.0);
    return 0;
}
