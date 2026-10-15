#include<iostream>
using namespace std;
int main(){
    //Problem 1
    // int a,b;
    // cout<<"Enter the value of a and b is: ";
    // cin>>a>>b;    
    // if(a>0 || a==0){
    //     cout<<"Positive";  //|| koi ek shi hone chaiye        
    // }
    // else{
    //     cout<<"negative";
    // }
    // cout<<endl;


    //probelm 2
    // if(a%2==0){
    //     cout<<"Even";        
    // }
    // else{
    //     cout<<"odd";
    // }
    // cout<<endl;
    // //Probelm 3
    // if(a>b){
    //     cout<<"a is greater:";
    // }
    // else{
    //     cout<<"b is greater";
    // }


    //probelm 3
    //student pass yah fail
    // int marks;
    // cout<<"Enter the total marks:";
    // cin>>marks;
    
    // if(marks>=45){
    //     cout<<"Pass";
    // }
    // else{
    //     cout<<"Fail";
    // }



    //problem 4
    //Grade acc to tha marks
    int score;
    cout<<"Enter the score: ";
    cin>>score;
    if(score<0||score>100){
        cout<<"Invalid marks please (0-100):"<<endl;
    }
    else if(score>=90){
        cout<<"Grade A"<<endl;        
    }
    else if(score>=75){
        cout<<"Grade B"<<endl;        
    }
    else if(score>=65){
        cout<<"Grade C"<<endl;        
    }
    else if(score>=50){
        cout<<"Grade D"<<endl;        
    }
    else{
        cout<<"Grade f:"<<endl;
    }
    
    //Probelm 5

    int e;
    cout<<"Enter the value of e"<<endl;
    cin>>e;
    if(e%3==0||e%5==0){
        cout<<"The number divisible by 3 and 5:"<<endl;
    }
    else{
        cout<<"Not divisible:"<<endl;
    }

}