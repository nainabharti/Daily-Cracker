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
//
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