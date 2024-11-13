#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    char string[100]={0};     
    cin.getline(string,1000);

    int quantity[133]={0};
    
    for(int j=0,i=0;j<100,i<=93;j++,i++){
        for(int k=33;k<=126;k++){
            if(string[j]==k){
                quantity[k]++;
            }
        }        
    }

    int total=0;
    for(int i=33;i<127;i++){
        if(quantity[i]!=0){
            total+=1;
        }
    }
    cout<<total<<"\n";

    for(int i=33;i<127;i++){
        if(quantity[i]!=0){
            cout<<char(i)<<" "<<quantity[i]<<endl;
        }
    }

     /*
    for(int i=0; i<100 && string[i]!=NULL; i++){
        cout<<int(string[i])<<endl;
    }
    */
    
    system("pause");
    return 0;
}