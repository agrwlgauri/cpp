#include<iostream>
using namespace std;
int main(){
    //problem 1
    //******Note Counting Problem *******

    int amount;
    cout<<"Enter the amount";
    cin>>amount;
    int choice;
    cout<<"Enter the value of note u want to find(500,100,50,20,10)"<<endl;
    cin>>choice;
    switch(choice){
        case 500:
            cout<<"Notes of 500 :"<<amount/500<<endl;
            amount=amount%500;
            break;
        case 100:
            cout<<"Notes of 100: "<<amount/100<<endl;
            amount=amount%100;
            break;
        case 50:
            cout<<"Notes of 50: "<<amount/50<<endl;
            amount=amount%50;
            break;
        case 20:
            cout<<"Notes of 20: "<<amount/20<<endl;
            amount=amount%20;
            break;
        case 10:
            cout<<"Notes of 10: "<<amount/10<<endl;
            amount=amount%10;
            break;        
    }

}