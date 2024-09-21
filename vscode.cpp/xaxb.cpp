#include <iostream>
#include<stdlib.h> 
#include<stdio.h>
#include<time.h>
#include<cstdlib>
using namespace std;
//run this program using the console pauser or add your own getch, system("pause") or input loop 

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
	
	
	int a,b,c,d;
	int answer[]={q,w,e,r};
	int end=1;

	for(int k=0;k<end;k++){
		for(int i=1,j=2;i<j;i++){
		cin>>a;
		cin>>b;
		cin>>c;
		cin>>d;
		
		if(a==0&&b==0&&c==0&&d==0){
			cout<<q<<w<<e<<r<<endl;
			cout<<"game over\n";
			return 0;
			cout<<"press enter to continue\n";
			cin.get();
			return 0;
		}
		bool w;
		bool q;
		if(a>9||a<0||b>9||b<0||c>9||c<0||d>9||d<0){
			cout<<"should be between 0 ~ 9 "<<endl;
			j++; 
			w=true;
		}
		
		if(a!=b&&a!=c&&a!=d&&b!=c&&c!=d&&b!=d){
			continue;
		}else{
			cout<<"can not repeated"<<endl;
			j++;
			q=true;	
		}
		if(w==true&&q==true){
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
	
	cout<<x<<"A"<<y<<"B"<<endl;
	
	if(x!=4){
		end++;
	}
	
		if(x==4&&y==0){
			cout<<"Congratulations"<<endl;
			cout<<"the answer is "<<q<<w<<e<<r<<endl; 
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