#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int a;
    cin>>a;
    for(int i=1;i<=a;i++){
        int b;
        cin>>b;
        int array[b];
        for(int j=0;j<b;j++){
            cin>>array[j];
        }
        
        sort(array,array+b);
        cout<<(array[b-1]-array[0])*2;
    }



    system("pause");
    return 0;
}