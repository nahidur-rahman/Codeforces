#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[26]={0}, n1, n2, n3, flag=1;
    string s1,s2,s3;
    cin>>s1>>s2>>s3;
    n1=s1.length();
    n2=s2.length();
    n3=s3.length();
    for(int i=0; i<n1; i++){
        arr[s1[i]-'A']++;
    }
    for(int i=0; i<n2; i++){
        arr[s2[i]-'A']++;
    }
    for(int i=0; i<n3; i++){
        arr[s3[i]-'A']--;
    }

    for(int i=0; i<26; i++){
        if(arr[i]!=0){
            flag=0;
            break;
        }
    }
    if(flag)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
