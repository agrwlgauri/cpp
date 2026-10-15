#include<iostream>
using namespace std;
int main(){
    //Problem 1
    cout<<"....... Print detail.........";
    string name ="Gouri agrawal";
    int age=20;
    string Branch="EACE";
    string Location="gwalior";
    cout<<endl;
    cout<<"Name is :"<<name<<endl;
    cout<<"Age is :"<<age<<endl;
    cout<<"Branch is :"<<Branch<<endl;
    cout<<"Location of my college is :"<<Location<<endl;
    cout<<endl;
    
    //Problem 2
    int a=10;
    int b=20;
    cout<<"Value of a is "<<a<<endl;
    cout<<"Value of b is "<<b<<endl;
    cout<<"**********Before Swapping**********"<<endl;
    cout<<"Value of a is :"<<a<<" and Value of b is :"<<b<<endl;
    int temp;
    temp=a;
    a=b;
    b=temp;
    cout<<"**********After Swapping**********"<<endl;
    cout<<"Value of a is :"<<a<<" and Value of b is :"<<b<<endl;
    cout<<endl;

    //Problem 3
    float l=32.4;
    float d=45.9;
    cout<<"Length of the rectangle is:"<<l<<endl;
    cout<<"Breadth of the rectangle is:"<<d<<endl;
    cout<<"Area of the rectangle is: "<<l*d<<endl;
    cout<<endl;

    //Problem 4
    int m1=100;
    int m2=56;
    int m3=45;
    int m4=67;
    int m5=89;
    int Total;
    Total=m1+m2+m3+m4+m5;
    cout<<"Total marks:"<<Total<<endl;
    int Average;
    Average=Total/5;
    cout<<"Average is:"<<Average<<endl;
}