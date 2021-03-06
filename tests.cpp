/*
Author: Ryan Jiang
Course: CSCI-135/235
Instructor: Mike Zamansky
Assignment: Lab 14
This file contains the tests for the functions in MyVector.cxx
*/

#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include <iostream>
#include "MyVector.h"

TEST_CASE("Testing constructor"){
  MyVector<int>integers;
  CHECK(integers.size() == 0);
  CHECK(integers.capacity() == 10);
  MyVector<std::string> strings;
  CHECK(integers.size() == 0);
  CHECK(integers.capacity() == 10);
}


TEST_CASE("Testing push_back and operator[]"){
  //Testing MyVector of ints
  MyVector<int> integers;
  for (int i = 0 ; i < 10; i++){
    integers.push_back(i);
    CHECK(integers[i] == i);
    CHECK(integers.size() == i+1);
    CHECK(integers.capacity() == 10);
  }
  
  CHECK(integers.capacity() == 10);
  integers.push_back(11);
  CHECK(integers.size() == 11);
  CHECK(integers[10] == 11);
  CHECK(integers.capacity() == 20);

  //Testing MyVector of strings
  MyVector <std::string> strings;
  for (int i = 0; i < 10; i++){
    strings.push_back(std::to_string(i));
    CHECK(strings[i] == std::to_string(i));
    CHECK(strings.size() == i+1);
    CHECK(strings.capacity() == 10);
  }
  
  CHECK(strings.capacity() == 10);
  strings.push_back("11");
  CHECK(strings.size() == 11);
  CHECK(strings[10] == "11");
  CHECK(strings.capacity() == 20);
}

TEST_CASE("Testing pop_back()"){
  MyVector<int> integers;
  for (int i = 0; i < 10; i++){
    integers.push_back(i);
  }
  
  for (int i = 0 ; i < 10; i++){
    integers.pop_back();
    CHECK(integers.size()==10-i-1);
  }
  
  MyVector<double> doubles;
  for (int i = 0; i < 10; i++){
    doubles.push_back(i);
  }
  
  for (int i = 0 ; i < 10; i++){
    doubles.pop_back();
    CHECK(doubles.size()==10-i-1);
  }
}

TEST_CASE("Testing pop_back(int n)"){
  MyVector<int> integers;
  for (int i = 0; i < 10; i++){
    integers.push_back(i);
  }
  
  integers.pop_back(0);
  for (int i = 0; i < 9; i++){
    CHECK(integers[i] == i+1);
  }
  
  integers.pop_back(1);
  CHECK(integers[0] == 1);
  
  for (int i = 1 ; i < 8;i++){
    CHECK(integers[i]==i+2);
  }
}

TEST_CASE("Testing clear()"){
  MyVector<int> integers;
  for (int i = 0; i < 9; i++){
    integers.push_back(i);
  }
  
  CHECK(integers.size() == 9);
  integers.clear();
  CHECK(integers.size() == 0);

  MyVector<std::string> strings;
  for (int i = 0; i < 9; i++){
    strings.push_back(std::to_string(i));
  }
  
  CHECK(strings.size() == 9);
  strings.clear();
  CHECK(strings.size()==0);
}
