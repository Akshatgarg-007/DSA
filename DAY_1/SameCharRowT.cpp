#include<iostream>
using namespace std;

void SameCharRowT(int n) {
    char c = 'A';
    for (int i = 1 ; i<=n; i++) {
        for (int j = 1; j<=i; j++) {
            cout<<c<<" ";
        }
        c++;
        cout<<endl;
    }
}

int main()
{
    int n;
    cin>>n;
    SameCharRowT(n);
    return 0;
}