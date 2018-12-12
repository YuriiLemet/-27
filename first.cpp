#include <iostream>
#include <string>
#include <cmath>

using namespace std;
int main()
{
    int n(0),x(0),y(0),xmax(0),ymax(0);
    double s(0);
    cin>>n;
    for(int i=0; i<n; i++){
       cin>>x>>y;
       if((x==0)&&(abs(y)>ymax)){ymax=abs(y);}
       if((y==0)&&(abs(x)>xmax)){xmax=abs(x);}
    }
    s=xmax*ymax/2;
    if(s==0){
        cout<<"Треугольника не существует";
    } else{
     cout<<s;   
    }
}

