#include <iostream>
#include<stdlib.h> 
#include<stdio.h>
#include<time.h>
#include<cstdlib>
using namespace std;
//5464646
//1~99猜數字

int main() {

		srand(time(NULL));
		int min=1;
		int max=99;
	
		int question=rand()%(max-min+1)+min;
		
        
        int j=1;
        for(int i=0;i<j;i++){

            int answer[j];

            cin>>answer[j];
            do{
            if(answer[j]>99||answer[j]<1){
                cout<<"should be between 1~99\n";
                j++;
            }

            if(answer[j]<question){
                cout<<answer[j]<<"~99\n";
                j++;
            }else if(question<answer[j]){
                cout<<"1~"<<answer[j]<<endl;
                j++;
            }
            }while(j==1);

            
            do{
            if(answer){
                cout<<answer[j]<<"~99\n";
                j++;
            }else if(question<answer[j]){
                cout<<"1~"<<answer[j]<<endl;
                j++;
            }
            }while(j>1);



            if(answer[j]==question){
                cout<<"correct\n";
                cout<<"the answer is:"<<question<<endl;
            }



        }

      
       




    
    system("pause");
    return 0;
}