//row major 
/*
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
*/
/*
//column major
#include<iostream>
using namespace std;
int main()
{
int b[10][10];
int i,j;
cout<<"The Elements of the matrix is: ";
for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
        cin>>b[i][j];
    }
}
cout<<"The column major order is: ";
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        cout<<b[j][i]<<" ";
    }
}
return 0;
}
*/
// diagonal matrix
/*
#include<iostream>
using namespace std;
int main()
{
int b[10][10];
int i,j;
cout<<"The Elements of the matrix is: ";
for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
        cin>>b[i][j];
    }
}
cout<<"The elements of the diagonal matrix is: ";
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        if (i==j){
            cout<< b[i][j] <<" ";
        }
    }
}
return 0;
}
*/
//addition of matrix
/*
#include<iostream>
using namespace std;
int main(){
    int r, c;
    int a[100][100], b[100][100],sum[100][100];
    cout<<"Enter the number of rows: ";
    cin>> r;
    cout<<"Enter the number of columns: ";
    cin>> c;
    cout<<"Enter elements of first matrix:\n";
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>a[i][j];
        }
    }
    cout<<"Enter elements of second matrix:\n";
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>b[i][j];
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            sum[i][j]=a[i][j]+b[i][j];
        }
    }
    cout<<"Sum of the two matrices:\n";
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<sum[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
*/
//subtraction of matrix
/*
#include<iostream>
using namespace std;
int main(){
    int r, c;
    int a[100][100], b[100][100],sub[100][100];
    cout<<"Enter the number of rows: ";
    cin>> r;
    cout<<"Enter the number of columns: ";
    cin>> c;
    cout<<"Enter elements of first matrix:\n";
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>a[i][j];
        }
    }
    cout<<"Enter elements of second matrix:\n";
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>b[i][j];
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            sub[i][j]=a[i][j]-b[i][j];
        }
    }
    cout<<"Subtraction of the two matrices:\n";
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<sub[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
*/
//multiplication of matrix
/*
#include<iostream>
using namespace std;
int main (){
    int r1,c1,r2,c2;
    int a[100][100],b[100][100],result[100][100]={0};
    cout<<"rows and columns of the first matrix:\n";
    cin>> r1 >> c1;
    cout<<"rows and columns of the second matrix:\n";
    cin>> r2 >>c2;
    if (c1 != r2){
        cout<<"matrix multiplication is not possible.";
        return 0;
    }
    cout<<"Enter elements of first matrix:\n";
    for(int i=0; i<r1; i++)
    {
        for(int j=0; j<c1; j++){
            cin>>a[i][j];
        }
    }
    cout<<"Enter elements of second matrix:\n";
    for(int i=0; i<r2; i++)
    {
        for(int j=0; j<c2; j++){
            cin>>b[i][j];
        }
    }
    for(int i=0; i<r1; i++)
    {
        for(int j=0; j<c2; j++){
            for(int k=0; k<c1;k++){
                result[i][j]=result[i][j]+ a[i][k] *b[k][j];
            }
        }
    }
    cout<<"Result of multiplication:\n";
    for(int i=0; i<r1; i++)
    {
        for(int j=0; j<c2; j++){
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
*/
//division of matrix
/*
#include<iostream>
using namespace std;
int main(){
    int a[100][100],b[100][100],result[100][100];
    int r,c;
    cout<<"Enter no. of rows: ";
    cin>> r;
    cout<<"Enter no. of columns: ";
    cin>> c;
    cout<<"Enter elements of first matrix:\n";
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>a[i][j];
        }
    }
    cout<<"Enter elements of second matrix:\n";
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>b[i][j];
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(b[i][j] == 0){
                cout<<"Division by zero is not possible.";
                return 0;
            }
            result[i][j]=(float)a[i][j]/b[i][j];
        }
    }
    cout<<"Result of division:\n";
    for(int i=0; i<r; i++){
        for(int j=0;j<c;j++){
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
*/
//linear search
/*
#include<iostream>
using namespace std;
int linearsearch(int arr[] ,int size, int target)
{
    for(int i=0;i<size;i++){
        if(arr[i]==target){
            return i;
        }
    }
    return -1;
}
int main (){
    int target;
    int arr[]={12,45,2,8,34};
    int size= sizeof(arr) / sizeof(arr[0]);
    cout<<"enter the element you want to search for: ";
    cin>>target;
    int result =linearsearch(arr,size,target);
    if(result != -1){
        cout<<"Element found at index: "<< result <<endl;
    } else {
        cout<<" Element not found in array." << endl;
    }
    return 0;
}
*/
//binary search
#include<iostream>
using namespace std;
int binarysearch(int arr[],int size,int key){
    int low=0;
    int high=size-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]<key){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return -1;
}
int main()
{
    int n;
    int arr[100];
    cout<<"Enter number of elements:";
    cin>>n;
    cout<<"Enter elements in sorted order:\n ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cout<<"Enter element to search: ";
    cin>>key;
    int result = binarysearch(arr,n,key);
    if (result != -1){
        cout<<"Elements found at index "<< result;
    }
    else{
        cout<<"Elements not found ";
    }
    return 0;
}