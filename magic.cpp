#include <stdio.h>
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    int k(0),min(255),c;
    string s;
    getline(cin, s);
    for (int i=0; i<s.length(); i++){
            if (((s[i]<='z')&&(s[i]>='a'))||((s[i]>='A')&&(s[i]<='Z'))){
                k++;
            }else{
                if (k<min){
                    min = k;
                }
                k=0;
            }
    }
    for (int i=0; i<s.length();i++){
        c=(int)s[i]-min;
        if (((s[i]<='z')&&(s[i]>='a'))||((s[i]>='A')&&(s[i]<='Z'))){
                if((s[i]<='z')&&(s[i]>='a')){
                    if (c<'a'){
                        cout << (char)(c + 26 );
                    }else{
                        cout <<(char)c;
                    }
                }
                if((s[i]<='Z')&&(s[i]>='A')){
                    if (c<'A'){
                        cout << (char)(c + 26);
                    }else{
                        cout <<(char)c;
                    }
            }
        }else{
            cout<<s[i];
        }
    }
    return 0;
}
