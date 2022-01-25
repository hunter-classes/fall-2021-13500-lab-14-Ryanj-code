#include <iostream>
#include "MyVector.h"

template <class T>
MyVector<T>::MyVector(){
  myvector_size = 0;
  myvector_capacity = 10;
  data = new T[10];
} // Constructor

template <class T>
MyVector<T>::~MyVector(){
  delete [] data;
  data = nullptr;
} // Destructor

template <class T>
int MyVector<T>::size() const{
  return myvector_size;
} // Return size.

template <class T>
int MyVector<T>::capacity() const{
  return myvector_capacity;
} // Return capacity

template <class T>
bool MyVector<T>::empty() const{
  return (myvector_size == 0);
} 

template <class T>
void MyVector<T>::push_back(T n){
  // Checks if size equals capacity and increases if they are equal.
  if (myvector_size == myvector_capacity){
    // Doubles capacity
    myvector_capacity *= 2;
    T * new_data = new T[myvector_cap];
    // Copp over the old data into the larger array.
    for (int i = 0; i < myvector_size; i++){
      new_data[i] = data[i];
    }
    
    delete [] data;
    data = new_data;
  }
  
  data[myvector_size] = n;
  myvector_size++;
  // Adds n to the MyVector
}

template <class T>
T& MyVector<T>::operator[](int n){
  return data[n];
}

template <class T>
void MyVector<T>::pop_back(){
  // Sets the newest element to 0 and decrements size;
  if (myvector_size != 0){
    myvector_size--;
    data[myvector_size]=0;
  }
}

template <class T>
void MyVector<T>::pop_back(int n){
  if (n > myvector_size){ 
    return;
  }
  // Stops if nth element cannot be removed.

  int size = myvector_size;
  for (int i = n; i < size-1; i++){
    data[i] = data[i+1];
  }
  myvector_size--;
}

template <class T>
void MyVector<T>::clear(){
  myvector_size = 0;
}
