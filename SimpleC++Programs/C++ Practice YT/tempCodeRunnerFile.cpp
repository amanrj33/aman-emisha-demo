#include<iostream>
using namespace std;

int main (){
    int i=1;
    int b;
    b = i++;
    cout<<b;
    int a=b;
    b = ++i;
    cout<<a;

    return 0;
}