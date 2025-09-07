#include<iostream>
using namespace std;

void cntTriangle(int n,int k) {
    for (int i = 1 ; i<=n; i++) {
        for (int j = 1; j<=i; j++) {
            cout<<k<<" ";
            k++;
        }
        cout<<endl;
    }
}

int main()
{
    int n,k = 1;
    cin>>n;
    cntTriangle(n,k);
    return 0;
}