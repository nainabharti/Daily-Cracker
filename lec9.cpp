#include<iostream>
using namespace std;

void printarray(int arr[], int size){

cout<<"printing the array"<<endl;
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";

}
cout<<"PRINTING IS DONE"<<endl;
}
int main(){
    int number[15];
    cout<<"value at 14 index"<<number[14]<<endl;
    int second[3] ={5,7,11};
    cout<<"velue at 2 index"<<second[2]<<endl;
    int third[15] ={2,7};
    int n=15;
    printarray(third,15);
    
    int fourth[10] = {0};
     n=10;
    printarray(fourth,10);

    int fifth[12] ={1};
    n=12;
    printarray(fifth,12);

    int fifthsize = sizeof(fifth)/sizeof(int);
    cout<<"size of fifth is " <<fifthsize <<endl;

    char ch[5] = {'a','b','c','r','p'};
    cout <<ch[3]<<endl;
    
    return 0;
}