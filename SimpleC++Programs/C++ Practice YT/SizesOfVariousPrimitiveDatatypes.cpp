#include<iostream>
using namespace std;

int main() {

    int a;  //declaration
    a=1;   //intialisation

    cout<<"Size of int "<<sizeof(a)<<endl;

    float b;
    cout<<"Size of float is "<<sizeof(b)<<endl;

    char c;
    cout<<"Size of char is "<<sizeof(c)<<endl;

    bool d;
    cout<<"Size of boolean is "<<sizeof(d)<<endl;

    short int si;
    long int li;
    cout<<"Size of short int:"<<sizeof(si)<<endl;
    cout<<"Size of long int:"<<sizeof(li)<<endl;


    return 0;

}