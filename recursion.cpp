//print name n times
#include<iostream>
using namespace std;
/*
void function(int i,int n)
{
    if(i>n)
    return;
    cout<<"Naina"<<endl;
    function(i+1,n);
}
int main(){
    int n;
    cout<<"enter the number: ";
    cin>>n;
    function(1,n);
}
*/
//print counting
/*
void function(int i, int n){
    if (i>n)
    return;
    cout<<i<<endl;
    function(i+1,n);
}
int main()
{
    int n;
    cout<<"enter the number: ";
    cin>>n;
    function(1,n);
}
*/
//print counting in reverse order
/*
void function(int i, int n){
    if(i<1)
    return;
    cout<<i<<endl;
    function(i-1,n);
}
int main(){
    int n;
    cout<<"enter number: ";
    cin>>n;
    function(n,n);
}
*/
//backtracking
/*
void function(int i,int n){
    if(i<1)
    return;
    function(i-1,n);
    cout<<i<<endl;
}
int main(){
    int n;
    cout<<"enter the number: ";
    cin>>n;
    function(n,n);
}
*/
//print reverse counting using backtracking
/*
void function(int i, int n){
    if(i>n)
    return;
    function(i+1,n);
    cout<<i<<endl;
}
int main(){
    int n;
    cout<<"enter the number: ";
    cin>>n;
    function(1,n);
}
*/
//sum of first n numbers (parameterised)
/*
void function(int i, int sum){
    if(i<1){
    cout<<"the sum is: "<<sum;
    return;
    }
    function(i-1,sum+i);
}
int main(){
    int n;
    cout<<"enter the number: ";
    cin>>n;
    function(n,0);
}
*/
//sum of first n numbers (functional)
int function(int n){
    if(n==0)
    return 0;
    return n + function(n-1);
}
int main(){
    int n;
    cout<<"enter the number: ";
    cin>>n;
    cout<<"the sum is: "<<function(n);
}