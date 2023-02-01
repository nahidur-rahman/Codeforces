#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    cin>>n;
    n=(2*(2*(pow(2, n-1)-1)+1));
    cout<<n<<endl;
    return 0;
}
