#include <iostream>
using namespace std;

//Function Overloading
class Maths{
  public:
    int sum(int a, int b) {
      cout << "Ist process executed. " << endl;
      return a+b;
    }
    int sum(int a, int b, int c) {
      cout << "IIst process executed. " << endl;

      return a+b+c;
    }
   int sum(int a, float b) {
     cout << "IIIst process executed. " << endl;
      return a+b;
    }
};

int main() {
  //Doing Function Overloading

  //Making object
  Maths obj;

  //Doing Function Overloading
  cout << obj.sum(2,5) << endl;
  cout << obj.sum(2,5,6) << endl;
  cout << obj.sum(2,5.6f) << endl;
}