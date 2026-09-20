#include<bits/stdc++.h>
using namespace std;
//integer hashing using arrays
/*
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    //precompute 
    int hash[13] = {0};
    for(int i =0; i<n; i++){
        hash[arr[i]] += 1;
    }
    int q;
    cout<<"enter the value of q: ";
    cin>>q;
    while(q--){
        int number;
        cin>>number;
        //fetch
        cout<<hash[number]<<endl;
    }
    return 0;
}
*/
int main(){
    string s;
    cout<<"Enter the string: ";
    cin>>s;
    //precompute
    int hash[26]={0};
    for(int i=0; i<s.size(); i++){
        hash[s[i]-'a']++;
    }
    int q;
    cout<<"Enter the number of query: ";
    cin>>q;
    while(q--){
        char c;
        cin>>c;
        //fetch
        cout<<hash[c-'a']<<endl;
    }
    return 0;
}