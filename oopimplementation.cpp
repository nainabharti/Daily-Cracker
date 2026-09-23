//use of class
#include<iostream>
using namespace std;
/*
class person
{
    char name[30];
    int age;
    public:
        void getdata(void);
        void display(void);
};
void person :: getdata(void)
{
    cout<<"Enter name: ";
    cin>>name;
    cout<<"Enter age: ";
    cin>>age;
}
void person :: display(void)
{
    cout<<"\nName: "<<name;
    cout<<"\nAge: "<<age;
}
int main()
{
    person p;
    p.getdata();
    p.display();

    return 0;
}
    */
   //scope resolution operator
int m = 10;
int main()
{
    int m = 20;
    {
        int k = m;
        int m =30;

        cout<<"we are in inner block \n";
        cout<<"k = "<< k <<"\n";
        cout<<"m = "<< m <<"\n";
        cout<<"::m = "<< ::m <<"\n";
    }
    cout<<"\nwe are in outer block \n";
    cout<<"m = "<< m <<"\n";
    cout<<"::m = "<< ::m <<"\n";
    
    return 0;
}