/*
Author: Ryan Jiang
Course: CSCI-135/235
Instructor: Mike Zamansky
Assignment: Lab 14
This is the header file for the template class MyVector.
*/

#pragma once

template <class T>
class MyVector{
public:
  MyVector();
  ~MyVector();
  int size() const;
  int capacity() const;
  bool empty() const;
  void push_back(T n);
  void pop_back(int n);
  void pop_back();
  void clear();
  T &operator[](int n);
private:
  int myvector_size;
  int myvector_capacity;
  T * data;
};

#include "MyVector.cxx"  

