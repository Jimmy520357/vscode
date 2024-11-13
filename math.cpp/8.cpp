#include<iostream>
#include<algorithm>
using namespace std;
#define ftoc(f) (f-32)*5/9

int main(){
    
    int a;
    cin>>a;
    int array[a];
    for(int i=0;i<a;i++){
        cin>>array[i];
    }
    sort(array,array+a);
        for(int j=0;j<a;j++){
            cout<<array[j];
            cout<<"\t";
        }
    

 
    
    
    /*
    char namel[]="john mslk";
    for(int i=0;i<9;i++){
        cout<<namel[i];
    }
    */
    
    system("pause");
    return 0;
}


