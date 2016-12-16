#include<iostream>
#include<string>
using namespace std;

main(){
  string input;
  
  cout << "Say somthing: ";
  cin >> input;
  if(input.size()>0)
    cout << "hello world\n";
  else
    return 0;
 }
