#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, c1=0, c2=0, c3=0;
    vector<int> vec1, vec2, vec3;
    cin>>n;
    int a[n+1];
    for(int i=0; i<n; i++){
        cin>>a[i];
        if(a[i]==1){
            c1++;
            vec1.push_back(i+1);
        }
        else if(a[i]==2){
            c2++;
            vec2.push_back(i+1);
        }
        else{
            c3++;
            vec3.push_back(i+1);
        }
    }
    int cnt=min(c1, min(c2, c3));
    cout<<cnt<<endl;
    if(cnt==0){
        return 0;
    }
    for(int i=0; i<cnt; i++){
        cout<<vec1[i]<<" "<<vec2[i]<<" "<<vec3[i]<<endl;
    }
    return 0;
}
