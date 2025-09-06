#include<iostream>
using namespace std;

void number_triangle(int n) {
    for (int i = 1 ; i<=n; i++) {
        for (int j= 1; j<=i; j++) {
            cout<<j;
        }
        cout<<endl;
    }
}

int main()
{
    int n;
    cin>>n;
    number_triangle(n);
    return 0;
}