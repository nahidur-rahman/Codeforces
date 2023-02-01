#include<iostream>
#include<map>
using namespace std;

int main()
{
    map<long long int, int> m;
    long long int n, l;
    for(int i=0; i<4; i++){
        cin>>n;
        m[n]++;
    }
    l=m.size();
    cout<<4-l<<endl;

    return 0;
}
