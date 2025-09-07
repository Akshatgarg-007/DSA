#include<iostream>
using namespace std;

void ABCTriangle (int n) {
    for (int i = 1 ; i<=n; i++) {
        char c = 'A';
        for (int j = 1; j<=i; j++) {
            cout<<c<<" ";
            c++;
        }
        cout<<endl;
    }
}

int main()
{
    int n;
    cin>>n;
    ABCTriangle(n);
    return 0;
}