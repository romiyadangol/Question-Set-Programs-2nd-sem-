//accessing protected data members in a derived class 
#include <iostream>
using namespace std;
class Base {
   protected :
   int num = 7;
};
class Derived : public Base {
   public :
   void func() {
      cout << "The value of num is: " << num;
   }
};
int main() {
   Derived obj;
   obj.func();
   return 0;
}
