#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
    int la, lb;
    float sa, sb, xa, xb;
    string a, b;
    cin>>a>>b;
    la=a.length();
    lb=b.length();

    if(a[la-1]=='S'){
        sa=3;
        xa=0.1;
    }
    else if(a[la-1]=='M'){
        sa=4;
        xa=1;
    }
    else if(a[la-1]=='L'){
        sa=5;
        xa=2;
    }
    if(b[lb-1]=='S'){
        sb=3;
        xb=0.1;
    }
    else if(b[lb-1]=='M'){
        sb=4;
        xb=1;
    }
    else if(b[lb-1]=='L'){
        sb=5;
        xb=2;
    }

    sa = pow(xa,(la-1)) + sa;
    sb = pow(xb,(lb-1)) + sb;

    if(sa>sb)
        cout<<">"<<endl;
    else if(sa<sb)
        cout<<"<"<<endl;
    else
        cout<<"="<<endl;
    }
    return 0;
}
