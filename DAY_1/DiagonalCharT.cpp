#include<iostream>
using namespace std;

void DiagonalCharT (int n) {
    for (int i = n ; i>=1; i--) {
        for (int j = i; j<=n; j++) {
            char c= 'A';
            c = c+j-1;
            cout<<c<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    int n;
    cin>>n;
    DiagonalCharT(n);
    return 0;
}