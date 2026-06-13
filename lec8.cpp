#include<iostream>
using namespace std;
int main(){
/*
    char ch ='a';
    cout<<endl;
    switch( ch ) {

        case 1: cout<< "First" <<endl;
        break;

        case 2: cout<<  "charcter one" <<endl;
        break;

        default: cout<< "it is a default case " <<endl;
    
    }

    cout<<endl;
    return 0;
    */

    int a,b;

    cout<<"Enter the value of a: "<<endl;
    cin>>a;

    cout<<"Enter the value of b: "<<endl;
    cin>>b;

    char op;
    cout<< "Enter the operation you want to perform" <<endl;
    cin>>op;

    switch( op ) {
        case '+':cout <<(a+b)<<endl;
        break;

        case '-': cout <<(a-b)<<endl;
        break;

        case '*':cout <<(a*b)<<endl;
        break;

        case '/':cout <<(a/b)<<endl;
        break;

        case '%':cout <<(a%b)<<endl;
        break;

        default: cout<< "Please enter a valid operation" <<endl;

    }
    cout<<endl;
    return 0;
}