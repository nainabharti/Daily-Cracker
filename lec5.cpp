#include<iostream>
using namespace std;
int main(){
    /*
    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    cout<<"printing cout from 1 to 10"<<endl;
    for(int i=1;i<=n;i++){
        cout<<i<<endl;

    }
  */
 
int n=10;
int a=0;
int b=1;
cout<<a<<" "<<b<<" ";
for(int i=1;i<=n;i++){
    int nextNumber=a+b;
    cout<<nextNumber<<" ";
    a=b;
    b=nextNumber;
}
    
   for(int i=0;i<5;i++){
    cout<<endl<<"HI"<<endl;
    cout<<"HLO"<<endl;
    continue;

    cout<<"replay toh karde"<<endl;
   }
}