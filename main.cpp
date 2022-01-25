/*
Author: Ryan Jiang
Course: CSCI-135/235
Instructor: Mike Zamansky
Assignment: Lab 14
This file contains some tests for the functions in MyVector.cxx
*/

#include <iostream>
#include "MyVector.h"

int main(){
  MyVector<int> int_MyVector;

  std::cout << "Creates MyVector int_MyVector:" << '\n';
  for (int i = 0 ; i < int_MyVector.size(); i++){
    std::cout << int_MyVector[i] << ' ';
  }
  std::cout << '\n';
  std::cout << "size(): " << int_MyVector.size() << '\n';
  std::cout << "capacity(): " << int_MyVector.capacity() << '\n';
  std::cout << "empty(): " << std::boolalpha << int_MyVector.empty() << '\n';

  for (int i = 0 ; i < 10; i++){
    int_MyVector.push_back(i);
  }

  std::cout << '\n';
  std::cout << "After adding 10 ints:" << '\n';
  for (int i = 0 ; i < int_MyVector.size(); i++){
    std::cout << int_MyVector[i] << ' ';
  }
  std::cout << '\n';
  std::cout << "size(): " << int_MyVector.size() << '\n';
  std::cout << "capacity(): " << int_MyVector.capacity() << '\n';
  std::cout << "empty(): " << std::boolalpha << int_MyVector.empty() << '\n';

  std::cout  << '\n';
  for (int i = 0 ; i < 5; i++){
    int_MyVector.push_back(10+i);
  }
  std::cout << "After adding 5 more ints:" << '\n';
  for (int i = 0 ; i < int_MyVector.size(); i++){
    std::cout << int_MyVector[i] << ' ';
  }
  std::cout << '\n';
  std::cout << "size(): " << int_MyVector.size() << '\n';
  std::cout << "capacity(): " << int_MyVector.capacity() << '\n';
  std::cout << "empty(): " << std::boolalpha << int_MyVector.empty() << '\n';

  int_MyVector.pop_back();
  std::cout << '\n';
  std::cout << "After calling pop_back()" << '\n';
  for (int i = 0 ; i < int_MyVector.size(); i++){
    std::cout << int_MyVector[i] << ' ';
  }
  std::cout << '\n';
  std::cout << "size(): " << int_MyVector.size() << '\n';
  std::cout << "capacity(): " << int_MyVector.capacity() << '\n';
  std::cout << "empty(): " << std::boolalpha << int_MyVector.empty() << '\n';

  int_MyVector.pop_back(3);
  std::cout << '\n';
  std::cout << "After calling pop_back(3)" << '\n';
  for (int i = 0 ; i < int_MyVector.size(); i++){
    std::cout << int_MyVector[i] << ' ';
  }
  std::cout << '\n';
  std::cout << "size(): " << int_MyVector.size() << '\n';
  std::cout << "capacity(): " << int_MyVector.capacity() << '\n';
  std::cout << "empty(): " << std::boolalpha << int_MyVector.empty() << '\n';

  int_MyVector.clear();
  std::cout << '\n';
  std::cout << "After calling clear()" << '\n';
  for (int i = 0 ; i < int_MyVector.size(); i++){
    std::cout << int_MyVector[i] << ' ';
  }
  std::cout << '\n';
  std::cout << "size(): " << int_MyVector.size() << '\n';
  std::cout << "capacity(): " << int_MyVector.capacity() << '\n';
  std::cout << "empty(): " << std::boolalpha << int_MyVector.empty() << '\n';
  
  return 0;
}
