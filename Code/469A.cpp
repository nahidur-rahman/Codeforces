#include<iostream>
using namespace std;

int main()
{
    int n, p, p1, q1, q, a[105]={0}, temp=1;
    cin>>n;
    cin>>p;
    for(int i=1; i<=p; i++){
        cin>>p1;
        a[p1]=1;
    }
    cin>>q;
    for(int i=0; i<q; i++){
        cin>>q1;
        a[q1]=1;
    }
    for(int i=1; i<=n; i++)
        if(a[i]==0)
            temp=0;
    if(temp)
        cout<<"I become the guy."<<endl;
    else
        cout<<"Oh, my keyboard!"<<endl;

    return 0;
}
