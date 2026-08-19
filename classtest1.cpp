//row major 
#include<iostream>
using namespace std;
int main () {
int a [10][10];
int i, j;
cout <<"The Elements of the matrix is: ";
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        cin>>a[i][j];
    }
}
cout<<"The row major order is: ";
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        cout<<a[i][j]<<" ";
    }
}
return 0;
}