#include<iostream>
using namespace std;

int main() {

    int a;
    cout<<"Enter marks:";
    cin>>a;

    if (a>=100){
        cout<<"Congratulations you have scored full marks!"<<endl;
    }
    else if (a<100 and a>=85) {
        cout<<"Awesome marks now go play"<<endl;
    }
    else if (a<85 and a>=75) {
        cout<<"Very Good keep it up!"<<endl;
    }
    else if (a<75 and a>=65) {
        cout<<" Very Good"<<endl;
    }
    else if (a<65 and a>=45) {
        cout<<"Good!"<<endl;
    }
    else {
        cout<<"You can score more for sure!"<<endl;
    }


    return 0;


}