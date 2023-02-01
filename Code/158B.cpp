#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, a, c1=0, c2=0, c3=0, c4=0, sum=0, taxi=0;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>a;
        if(a==1)
            c1++;
        else if(a==2)
            c2++;
        else if(a==3)
            c3++;
        else
            c4++;
    }
    sum+=c4;
    if(c1<=c3){
        sum+=c1;
        c3-=c1;
        c1=0;
    }
    else{
        sum+=c3;
        c1-=c3;
        c3=0;
    }
    if(c2%2==0){
        c2/=2;
        sum+=c2;
        c2=0;
    }
    else{
        c2/=2;
        sum+=c2;
        c2=1;
    }
    if(c1!=0){
        if(c2!=0){
            c1-=2;
        }
        if(c1%4==0){
            c1/=4;
        }
        else if(c1<0){
            c1=0;
        }
        else{
            c1/=4;
            c1++;
        }
    }
    cout<<sum+c1+c2+c3<<endl;
    return 0;
}
