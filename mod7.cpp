#include <stdio.h>
#include <iostream>

using namespace std;

int main() {
    int n(0),k(0);
    int a[1001] ;
    cin>>n;
    for (int i=0; i<n; i++) {
        cin>>k;
        a[i] = k;
    }
    k=0;
    for (int i=0; i<n; i++) {
        for (int j=i+1; j<n;j++) {
            if ((a[i] +a[j]) % 7==0) {
                k++;
            }
        }
    }
    cout<<k;
    return 0;
}
