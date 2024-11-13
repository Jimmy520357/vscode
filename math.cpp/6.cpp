#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;


int main(){
    system("color 0b");
    /*
    int n,i,total,total1,total2;

    cin>>n;
    total=0;
    for(i=1;i<=n;i++){
        total+=i;
    }
    cout<<total<<endl;

     for(i=1;i<=n;i+=2){
        total1+=i;
    }
    cout<<total1<<endl;

    for(i=0;i<=n;i+=2){
        total2+=i;
    }
    cout<<total2<<endl;
    */
   /*
    int start,end;
    cin>>start;
    cin>>end;
    if(start<end){
        for(int i=start;i<=end;i++){
            cout<<i<<"\t";
        }
        cout<<endl;
    }

    if(start>end){
        for(int i=start;i>=end;i--){
            cout<<i<<"\t";
        }
        cout<<endl;

    }
    if(start==end){
        cout<<start<<endl;
    }
*/
    /*
    double total;
    double a;
    do{
        cout<<"pls type a number : ";
        cin>>a;
        total+=a;



    }while(a!=0);
    cout<<total;
    */


   /*
    int number;
    cin>>number;
   
    while(number>=0){
        int total=1;
        for(int i=1;i<=number;i++){
            total*=i;

        }
        cout<<total;
        break;
    }
    */

/*
   int number;
   do{
    cin>>number;

    for(int i=1;i<=number;i++){
                cout<<"*";
                continue;
            }
            cout<<endl;

   }while(number!=0);
   */
    
    /*
    int number=1;
    while(number!=0){
         cin>>number;
    for (int i=1;i<=number;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
        continue;

    }
    }
   */
  
  /*
     string str = "Hello, World!";
    cout << "Length of the string is: " << str.length() << endl;
  */
    /*
    int a;
	a=8;
	
	int * p;
	p=&a;
	*p=20;

	int * q=&a;
	*q=10;
	cout<<*q<<endl;
	cout<<q<<endl;
	cout<<p<<endl;
	cout<<*p<<endl;
  
    int x=2;
    cout<<6*("x ^ 5 = %f\n", pow (x, 5.0) );
    cout<<endl;
    cout<<6*pow(x,8.0);

    */

    int number;
    cin>>number;

    int total=0;
    for(int i=1;i<=number;i++){
        total+=i;
    }
    cout<<total;






    system("pause");
    return 0;
}
    





    
   
