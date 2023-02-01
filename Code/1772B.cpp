#include<bits/stdc++.h>
using namespace std;

int a1, a2, a3, a4, temp;

void check(){
    if(a1<a2 && a1<a3 && a2<a4 && a3<a4)
        temp=1;
}

void rotat(){
    int temp=a1;
    a1=a3;
    a3=a4;
    a4=a2;
    a2=temp;
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        temp=0;
        cin>>a1>>a2>>a3>>a4;
        for(int i=0; i<4; i++){
            check();
            if(temp==1)
                break;
            rotat();
        }
        if(temp)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
