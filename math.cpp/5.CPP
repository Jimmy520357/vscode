#include<iostream>
using namespace std;

int main(){
   // 50/10/5/1
    int coin;
    cin>>coin;
    int a,b,c,d;
    if(coin/50>0){
       a=coin/50;
    }else if(coin/10>0){
            b=coin/10;
     }
     if(coin/50>0){
        b=(coin-50*a)/10;
     }
    if((coin-50*a-10*b)/5>0){
        c=(coin-50*a-10*b)/5;
    }
    if((coin-50*a-10*b-5*c)/1>0){
        d=(coin-50*a-10*b-5*c);
    }

    cout<<a <<"\t50dollar\n";
    cout<<b <<"\t10dollar\n";
    cout<<c <<"\t5dollar\n";
    cout<<d <<"\t1dollar\n";
    system("pause");
    return 0;
}