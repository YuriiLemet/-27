#include <iostream>

using namespace std;

int main(){
    int a[5];
    int sum(0), maximum(0), n(0);
    cin >> n;
    for (int i=0; i<5; i++){
        cin >> a[i];
        sum += a[i];
    }
    maximum = sum;
    for (int i=5; i<n; i++){
        sum -= a[0];
        for (int j=0; j<4; j++){
            a[j] = a[j+1];
        }
        cin >> a[4];
        sum += a[4];
        if (sum > maximum){
            maximum = sum;
        }
        
    }
    cout<< maximum <<endl;
    return 0;
}
