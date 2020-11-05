#include<iostream>
using namespace std;

int main(){

    cout<<"This program Adds and Substracts two numbers:\n";

    int num1;
    cout<<"Enter the first number:\n";
    cin>>num1;

    int num2;
    cout<<"Enter second number:\n";
    cin>>num2;

    int sum = num1+num2;
    cout<<"The sum of the 2 numbers is:";
    cout<<sum;
    cout<<"\n";

    int diff = num1-num2;
    cout<<"The difference of the 2 numbers is:";
    cout<<diff;

    return 0;



}