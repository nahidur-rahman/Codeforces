#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, r, rem, i=1;
    cin>>n>>r;
    while(i){
        rem=(n*i)%10;
        if(rem==0 || rem==r)
            break;
        i++;
    }
    cout<<i<<endl;
    return 0;
}
