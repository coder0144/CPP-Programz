#include<iostream>
using namespace std;

int main(){

    

    int n = 20;

    int a = 0;
    int b = 1;
    cout<<a<<" "<<b<<" ";

    for(int i = 1;i<=n;i++){
      
        int nextNUMBER=a+b;
        cout<<nextNUMBER<<" ";
        
        a=b;
        b=nextNUMBER;

    }
}