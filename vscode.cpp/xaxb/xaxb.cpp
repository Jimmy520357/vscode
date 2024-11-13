#include <iostream>
#include<stdlib.h> 
#include<stdio.h>
#include<time.h>
#include<cstdlib>
using namespace std;

int main() {
		
	for(int u=0,f=1;u<f;u++){
		srand(time(NULL));
		int min=0;
		int max=9;
	
		int q=rand()%(max-min+1)+min;
		int w=rand()%(max-min+1)+min;
		int e=rand()%(max-min+1)+min;
		int r=rand()%(max-min+1)+min;
		
		if(q!=w&&q!=e&&q!=r&&w!=e&&w!=r&&e!=r){
			cout<<"game start:\n";
			cout<<"if u want to END,input 0000\n";
		}else{
			f++;
			continue;
		}		
	
	int abcd;
	int a,b,c,d;
	int answer[]={q,w,e,r};
	int end=1;

	for(int k=0;k<end;k++){
		for(int i=1,j=2;i<j;i++){
		cin>>abcd;
		a=abcd/1000;

		if(a<1){
			a=0;
		}
		b=(abcd-1000*a)/100;
		c=(abcd-1000*a-100*b)/10;
		d=(abcd-1000*a-100*b-10*c);
	
	
		if(a==0&&b==0&&c==0&&d==0){
			cout<<"the answer is : "<<q<<w<<e<<r<<endl;
			cout<<"game over\n";
			system("pause");
			return 0;
		}
		bool number;
		bool repeated;
		
		if(abcd>9876||abcd<123){
			cout<<"should be 4 number"<<endl;
			//j++; 
			number=true;
		}
		
		if(a!=b&&a!=c&&a!=d&&b!=c&&c!=d&&b!=d){
			continue;
		}else{
			cout<<"can not repeated"<<endl;
			j++;
			repeated=true;	
		}
		if(repeated==true&&number==true){
			j--;
		}	
	}
		
	int guess[]={a,b,c,d};

	int x=0;
	int y=0;
	
	for(int m=0;m<=3;m++){
		if(guess[m]==answer[m]){
		x=x+1;
	}
	}

	if(guess[0]==answer[1]||guess[0]==answer[2]||guess[0]==answer[3]){
		y=y+1;
	}
	if(guess[1]==answer[2]||guess[1]==answer[3]||guess[1]==answer[0]){
		y=y+1;
	}
	if(guess[2]==answer[3]||guess[2]==answer[1]||guess[2]==answer[0]){
		y=y+1;
	}
	if(guess[3]==answer[0]||guess[3]==answer[1]||guess[3]==answer[2]){
		y=y+1;
	}
	do{
	cout<<x<<"A"<<y<<"B"<<endl;
	cout<<"-------"<<endl;
	}while(q=false);
	

	if(x!=4){
		end++;
	}
	
		if(x==4&&y==0){
			cout<<"Congratulations"<<endl;
			cout<<"the answer is "<<answer[0]<<answer[1]<<answer[2]<<answer[3]<<endl; 
		}
		if(x==4&&y==0){
			cout<<"press y or Y to continue,n or N to end "<<endl;
			char enter;
			cin>>enter;
			if(enter=='Y'||enter=='y'){
				f++;
			}
			if(enter=='N'||enter=='n'){
				break;
			}
		}	
	}
	}
	system("pause");
	
	return 0;
}