#include<iostream>
using namespace std;

int main(){
    int counter=2;
    
    int x;
    cin>>x;
    if(x<1||x>30){
        cout<<"wrong\n";
    }


        int matrix[6];
        int matrixx[6];
   
    

    for(int repeat=1;repeat<counter;repeat++){
            for(int z=0;z<=6;z++){
                cin>>matrix[z];
            }
            for(int z=0;z<=6;z++){
                cin>>matrixx[z];
            }

            for(int z=0;z<=6;z++){ 
                if(matrix[z]>1||matrix[z]<0){
                    cout<<"wrong input\n";
                    counter++;
                    break;
                }else if(matrixx[z]>1||matrixx[z]<0){
                    cout<<"wrong input\n";
                    counter++;
                    break;
                }
            }
    }

    //2,4同或2,6不同則cout<<a
    bool question=false;


    if(matrix[1]==matrix[3]||matrix[1]!=matrix[5]){
        question=true;
        cout<<'A';
    }else if(matrixx[1]==matrixx[3]||matrixx[1]!=matrixx[5]){
        question=true;
        cout<<'A';
    }

    if(matrix[6]!=1||matrixx[6]!=0){
        question=true;
        cout<<'B';
    }

    if(matrix[1]==matrixx[1]||matrix[3]==matrixx[3]||matrix[5]==matrixx[5]){
        question=true;
        cout<<"C";
    }

    if(question==false){
        cout<<"none";
    }
/*
    cout<<endl;

    bool question2=false;


    if(matrix2[1]==matrix2[3]||matrix2[1]!=matrix2[5]){
        question2=true;
        cout<<'A';
    }else if(matrix3[1]==matrix3[3]||matrix3[1]!=matrix3[5]){
        question2=true;
        cout<<'A';
    }

    if(matrix2[6]!=1||matrix3[6]!=0){
        question2=true;
        cout<<'B';
    }

    if(matrix2[1]==matrix3[1]||matrix2[3]==matrix3[3]||matrix2[5]==matrix3[5]){
        question2=true;
        cout<<"C";
    }

    if(question2==false){
        cout<<"none";
    }
*/ 
    cout<<endl;


    



    system("pause");
    return 0;
    }