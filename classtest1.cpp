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