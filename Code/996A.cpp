#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, cnt=0;
    cin>>n;

    if(n >= 100){
        cnt = n/100;
        n%=100;
    }
    if(n>=20){
        cnt += n/20;
        n %= 20;
    }
    if(n>=10){
        cnt += n/10;
        n %= 10;
    }
    if(n>=5){
        cnt += n/5;
        n %= 5;
    }
    cnt += n;

    cout<<cnt<<endl;

    return 0;
}
