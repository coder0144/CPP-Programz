#include<iostream>
using namespace std;
 
 int main(){
     int n1,n2;
     char op;
     cout<<"enter 2 numbers:";
     cin>>n1>>n2;
     cout<<"enter an operand:";
     cin>>op;

     switch (op)
     {
         case '+':
         cout<<n1+n2<<endl;
         break;
         case '-':
         cout<<n1-n2<<endl;
         break;
         case '*':
         cout<<n1*n2<<endl;
         break;
         case '/':
         cout<<n1/n2<<endl;
         break;

     default:
     cout<<"not an operand"<<endl;
     break;

     }
     return 0;
     
 }
