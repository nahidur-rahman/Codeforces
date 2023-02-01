#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int x;
        cin >> x;
        cout << "Division ";
        if(x <= 1399) {
            cout << 4;
        }
        else if(x <= 1599) {
            cout << 3;
        }
        else if(x <= 1899) {
            cout << 2;
        }
        else {
            cout << 1;
        }
        cout << '\n';
    }
    return 0;
}
