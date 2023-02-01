#include<bits/stdc++.h>
using namespace std;

int main()
{
    int y, w;
    cin>>y>>w;
    int mx=max(y, w);

    switch(mx){
      case 1: printf("1/1");break;
      case 2: printf("5/6");break;
      case 3: printf("2/3");break;
      case 4: printf("1/2");break;
      case 5: printf("1/3");break;
      case 6: printf("1/6");break;
    }

    return 0;
}
