#include<iostream>
using namespace std;

int main()
{
    int n, count=0, p[101], q[101];
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>p[i]>>q[i];
        if(q[i]-p[i]>=2)
            count++;
    }
    cout<<count<<endl;
    return 0;
}
