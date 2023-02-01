#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n, a[105], b;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>b;
        a[i]=b;
    }
    sort(a, a+n);
    for(int i=0; i<n; i++)
        cout<<a[i]<<" ";
    cout<<endl;
    return 0;
}
