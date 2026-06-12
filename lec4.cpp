#include<iostream>
using namespace std;
int main(){
    /*
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=n;
        while(j>=1){
            cout<<j;
            j=j-1;
        }
        cout<<endl;
        i=i+1;
    }
        */
       /*
       int n;
       cin>>n;
       int i=1;
       int count=1;
       while(i<=n){
        int j=1;
        while(j<=i){
            cout<<count<<" ";
            count=count+1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    
       }
        */
       /*
       int n;
       cin>>n;
       int row=1;
       while(row<=n){
        int col=1;
        while(col<=n){
            char ch='A'+row-1;
            cout<<ch;
            col=col+1;
        }
        cout<<endl;
        row=row+1;
       }
*/
/*
      int n;
       cin>>n;
       int row=1;
       while(row<=n){
        int col=1;
        while(col<=n){
            char ch='A'+col-1;
            cout<<ch;
            col=col+1;
        }
        cout<<endl;
        row=row+1;
       } 
*/ 
/*
       int n;
       cin>>n;
       int row=1;
       char start='A';
       while(row<=n){
        int col=1;
        while(col<=n){
            cout<<start;
            start=start+1;
            col=col+1;
        }
        cout<<endl;
        row=row+1;
       }
*/
/*
       int n;
       cin>>n;
       int row=1;
       while(row<=n){
        int col=1;
        while(col<=n){
            char ch='A'+row+col-2;
            cout<<ch;
            col=col+1;
        }
        cout<<endl;
        row=row+1;
       }
        */
       /*
       int n;
       cin>>n;
       int row=1;
       while(row<=n){
        int col=1;
        while(col<=row){
            char ch=('A'+row-1);
            cout<<ch;
            col=col+1;
        }
        cout<<endl;
        row=row+1;
       }
*/
/*
        int n;
       cin>>n;
       int row=1;
       char value='A';
       while(row<=n){
        int col=1;
        while(col<=row){
            cout<<value;
            value=value+1;
            col=col+1;
        }
        cout<<endl;
        row=row+1;
       }
*/
       int n;
       cin>>n;
       int row=1;
       while(row<=n){
        int col=1;
        while(col<=row){
            char ch=('A'+row+col-2);
            cout<<ch;
            col=col+1;
        }
        cout<<endl;
        row=row+1;
       }
}