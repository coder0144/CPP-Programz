#include<iostream>
using namespace std;

int main(){

    int arr[] = {2,7,1,-4,11};
    int size = 5 ;

    int sum = 0;

    for(int i = 0; i<size ;i++ ){
        sum = sum + arr[i];
    } cout<<"the sum of all the element in an array is :"<<" "<<sum<<endl;
}
  