#include<iostream>
using namespace std;

void EmptyRhombus(int n) {
    for (int i = n ; i>=1; i--) {
        for (int j = 1; j<=i; j++) {
            cout<<"*";
        }
        for (int k = 1; k<=n-i; k++) {
            cout<<"  ";
        }
        for (int k = 1; k<=i; k++) {
            cout<<"*";
        }
        cout<<endl;
    }

    for (int i = 1; i<=n; i++) {
        for (int j = 1; j<=i; j++) {
            cout<<"*";
        }
        for (int k = 1; k<=n-i; k++) {
            cout<<"  ";
        }
        for (int l = 1; l<=i; l++) {
            cout<<"*";
        }
        cout<<endl;
    }
}

int main()
{
    int n;
    cin>>n;
    EmptyRhombus(n);
    return 0;
}