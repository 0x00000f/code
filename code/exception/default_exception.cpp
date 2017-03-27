// exceptions
#include <iostream>
using namespace std;

int main () {

  try
  {
    //throw 20;
	throw "h";
  }
  catch (int param) { cout << "int exception";} 
  catch (char param) { cout << "char exception";} 
  catch (...) { cout << "default exception";} 



}
