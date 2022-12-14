/*
C++ Lambda expression allows us to define anonymous function
objects (functors) which can either be used inline or passed as an argument.
Lambda expression was introduced in C++11 for creating 
anonymous functors in a more convenient and concise way.
They are more convenient because we don't need to overload
the () operator in a separate class or struct.


auto greet = []() {
  // lambda function body
};

[] is called the lambda introducer which denotes the start of the lambda expression
() is called the parameter list which is similar to the () operator of a normal function

void greet() {
  // function body
}
greet();

Example:

#include <iostream>
using namespace std;

int main() {

  // create a lambda function that prints "Hello World!"
  auto greet = []() {
    cout << "Hello World!";
  };

  // call lambda function
  greet();

  return 0;
}


Example with Parameters:

#include <iostream>
using namespace std;

int main() {

  // lambda function that takes two integer
  //  parameters and displays their sum
  auto add = [] (int a, int b) {
   cout << "Sum = " << a + b;
  };

  // call the lambda function
  add(100, 78);

  return 0;
}
*/