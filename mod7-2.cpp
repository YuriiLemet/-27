#include <stdio.h>
#include <iostream>

using namespace std;

int main() {
    int n(0),k(0);
    int a[7]{0} ;
    cin>>n;
    for (int i=0; i<n; i++) {
        cin>>k;
        a[k%7]++;
    }
    k = a[0]*(a[0]-1)/2;
    for (int i=1; i<4; i++){
        k+= a[i]*a[7-i];
    }
    cout<<k;
    return 0;
}
