#include<iostream>
using namespace std;
int main(){

    //Problem 1
    //*******simple calculator*******
    int a,b;
    cout<<"Enter the value of a";
    cin>>a;
    cout<<"Enter the value of b"<<endl;;
    cin>>b;
    char op;
    cout<<"Enter the (operation +,-,*,/,%) as you want: "<<endl;
    cin>>op;

    switch(op){
        case '+': cout<<(a+b)<<endl;
                  break;
            

        case'-':cout<<(a-b)<<endl;
                break;

        case'*':cout<<(a*b)<<endl;
                break;

        case'/':cout<<(a/b)<<endl;
                break;

        case'%':cout<<(a%b)<<endl;
                break;
        default: cout<<"(Enter the valid answer) " <<endl;     
    }

}

