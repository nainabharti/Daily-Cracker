#include<iostream>
using namespace std;

int main() {
    /*
    int a;
    cin>>a;
   // cout<< "value of n is :"<< n <<endl;

  // if a is positive
  if (a> 0) {
  cout<<"A is positive"<<endl;
  }
else{
    cout<< "A is negative"<<endl;
}
    */
   /*
   int a,b;
   cin>> a >>b;
   cout<< "value of a and b is "<<a<< " "<<b<<endl;
   */

   /*
   int a,b;
   cout<<"Enter the value of a : "<<endl;
   cin>>a;
   cout<<"Enter the  value of b: "<<endl;
   cin>>b;

   if(a>b){
    cout<<"a is greater "<<endl;
   }
   if(b>a){
    cout<<"b is greater"<<endl;
   }
    */
   /*
   int a;
   cout<<"Enter the value of a: "<<endl;
   cin>>a;
   if(a>0){
    cout<<"a is positive"<<endl;
   }
   else{
    if(a<0){
        cout<<"a is negative"<<endl;
    }
    else{
        cout<<"a is 0"<<endl;
    }
   }
    */
   /*
   char ch;
   cout<<"enter the value :"<<endl;
   cin>>ch;
   if(ch>='a'&&ch<='z'){
    cout<<"this is lowercase";
   }
 else if(ch>='A'&& ch<='Z'){
    cout<<"this is uppercase";
   }
  else if(ch>='0'&&ch<='9'){
    cout<<"this is numeric value"<<endl;
   }
   else{
    cout<<"special character";
   }
   */
  /*
  int n;
  cin>>n;
  int i=1;
  while(i<=n){
    cout<<i<<" ";
    i=i+1;
  }
    */
   int n;
   cin>>n;
   int sum=0;
   int i=0;
   while(i<=n){
    sum=sum+i;
    i=i+2;
   }
   cout<<"value of sum is "<<sum<<endl;
}
