#include<iostream>
using namespace std;

void ABCInvertedT(int n) {
    for (int i = n ; i>=1; i--) {
        char c = 'A';
        for (int j = i; j>=1; j--) {
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
    ABCInvertedT(n);
    return 0;
}