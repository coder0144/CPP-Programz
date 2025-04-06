#include<iostream>
using namespace std;

int main() {
    int a,b;
    cin>>a>>b;
    if(a>b){
        cout<<"a is biggest"<<endl;
    }
    if (b>a) {
        cout<<"b is biggest"<<endl;
    }
    if(a==b){
        cout<<"both are equal"<<endl;
    }
}
