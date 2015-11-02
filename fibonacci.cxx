#include <iostream>
using namespace std;
int main(){
int a,b,c,N;
cout <<"N"<<endl;
cin>>N;
a=0;b=1;
if(N==0){cout<<a<< endl;}
else {if(N==1){cout<<b<< endl;}
     else{
        for(int i=2;i<=N;i++){
         c=a+b;
         a=b;
         b=c;
        }
  cout<<c<<endl;
}}
return 0;
}

