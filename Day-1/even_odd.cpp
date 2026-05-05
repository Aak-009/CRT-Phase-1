/* Write a cpp program that checks whether the number is even or odd . */

#include<iostream>
using namespace std;

int main() {

  int num_check;
  cout<<"enter the number: " <<endl;
  cin>>num_check;
  /*using if else statement */
  if(num_check%2==0) {
    cout<<"no. is even" <<endl;
  }
  else {
    cout<<"no. is not even" <<endl;
  }
    return 0;
}
