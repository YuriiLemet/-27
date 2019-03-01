#include <stdio.h>
#include <iostream>


using namespace std;


int main(){
    int k(0), n(0), s(0);
    int count[10]={0}, pairs[10]={1,2,3,4,5,6,7,8,9,10};
    cin >> n;
    for (int i=0; i<n; i++){
        cin>>k;
        count[k-1] +=1;
    }
    for (int i=9; i>=1; i--){
        for (int j=1; j<i; j++){
            if (count[j-1]>count[j]){
                s=count[j-1];
                count[j-1]=count[j];
                count[j]=s;
                s=pairs[j-1];
                pairs[j-1]=pairs[j];
                pairs[j]=s;
            }
        }
    }
    for (int i=0; i<10; i++){
        if (count[i]>0){
            cout << pairs[i] <<' ' << count[i]<<'\n';
        }
    }
    return 0;
}
