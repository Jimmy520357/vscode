#include<iostream>
using namespace std;


int main(){
 
    int counter=2;

    int x,temp;
    for(int judge=1;judge<counter;judge++){
    
        cin>>x;
    if(x<1||x>30){
        cout<<"wrong\n";
        cout<<"pls retype\n";
        counter++;
    }
    if(x>0&&x<31){
        temp=x;
    }
    }

    //[2][7]
   int matrix[temp*2][7];


    for(int repeat=1;repeat<counter;repeat++){
         for(int i=0;i<temp*2;i++){
            for(int j=0;j<7;j++){
                 cin>>matrix[i][j];
                continue;
              }
            }  
    }
    /*
    for(int z=1;z<=temp*2;z++){ 
        for(int k=1;k<=7;k++){
            if(matrix[z][k]>100||matrix[z][k]<0){
            cout<<"wrong input\n";
            counter++;
            break;
            }
        }
        continue; 
    }*/
    bool question=false;


    for(int n=0;n<temp*2;n+=2){
        if(matrix[n][1]==matrix[n][3]||matrix[n][1]!=matrix[n][5]){
             question=true;
             cout<<'A';
            }else if(matrix[n+1][1]==matrix[n+1][3]||matrix[n+1][1]!=matrix[n+1][5]){
                        question=true;
                         cout<<'A';
         }
    }
    
    for(int n=0;n<temp*2;n+=2){
        if(matrix[n][6]!=1||matrix[n+1][6]!=0){
        question=true;
        cout<<'B';
    }
    }
    
    for(int n=0;n<temp*2;n+=2){
         if(matrix[n][1]==matrix[n+1][1]||matrix[n][3]==matrix[n+1][3]||matrix[n][5]==matrix[n+1][5]){
            question=true;
             cout<<"C";
            }
        }    

    if(question==false){
        cout<<"None";
    }
  

    /*
    for(int i=0;i<temp*2;i++){
        for(int j=0;j<7;j++){
            cout<<matrix[i][j];
        }
        cout<<endl;
    }
    */
    





    system("pause");
    return 0;
}