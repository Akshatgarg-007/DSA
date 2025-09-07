#include<iostream>
using namespace std;

void ABCcenterT(int n) {
    char c = 'A';
    for (int i = 1 ; i<=n; i++) {
        for (int j = 1; j<=n-i; j++) {
            cout<<" ";
        }
        c= 'A';
        for (int k = 1; k<=i; k++) {
            cout<<c<<"";
            c++;
        }
        c = 'A';
        for ( int l = i-1; l>0; l--) {
            cout<<char(c+l-1)<<"";
        }
        cout<<endl;
    }
}

int main()
{
    int n;
    cin>>n;
    ABCcenterT(n);
    return 0;
}