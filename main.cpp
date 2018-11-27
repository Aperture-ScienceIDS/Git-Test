/* Author: Landon Thomas
   Date: 11/27/2018
   File: main.cpp
   Description: Test file for repo on git
*/

#include <iostream>

using namespace std;

int sum(int n){
  int total = 0;
  for(int i = 0; i <= n; i++)
    {
      total += i;
    }
  return total;
}

int product(int n){
  int total = 1;
  for(int i = 1; i <= n; i++){
    total *= i;
  }
  return total;
}
int main(){

  cout << "Provide an integer: " << endl;
  int n;
  cin >> n;
  //cout << "Hello World!"<< endl;

  int total = sum(n);
  int total2 = product(n);
  cout << "The sum of 1 to " << n << " is: " << total << endl;
  cout << "The product of 1 to " << n << " is: " << total2 << endl;

  return 0;

}
