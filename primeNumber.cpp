#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter A Number:";
    cin>>n;
    
    for(int i = 2; i<n; i++){
        if(n%i == 0);
        cout<<"Not A Prime Number"<<endl;
        break;
    }
}