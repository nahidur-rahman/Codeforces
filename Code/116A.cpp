#include<iostream>
using namespace std;

int main()
{
    int man=0, mx=0, n, a[1005], b[1005];
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>a[i]>>b[i];
        man=man-a[i]+b[i];
        if(mx<man)
            mx=man;
    }
    cout<<mx<<endl;
    return 0;
}
