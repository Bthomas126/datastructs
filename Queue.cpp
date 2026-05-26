#include "Queue.h"

#include <iostream>

template<typename T>
Queue<T>::Queue(unsigned capacity) {

  data = new T[capacity];
  frnt = 0;
  bck = 0;
  queueSize = 0;
  this->capacity = capacity;

  
}

template<typename T>
unsigned Queue<T>::size() const {

  return queueSize;
   
}

template<typename T>
bool Queue<T>::empty() const {

  return(queueSize == 0);
    
}

template<typename T>
bool Queue<T>::full() const {
}

template<typename T>
const T& Queue<T>::front() const {
    if(empty()){
      throw std::string("empty queue");
    }
    return (data[front]);
}

template<typename T>
void Queue<T>::enqueue(const T& val) {
    

    if(full()){
        throw std::string("full queue")
    }
  
  
    if(empty()){

        data[bck] = val;
        return;

    }

    bck = (bck + 1) % capacity;
    data[bck] = val;
    queueSize++;
}

template<typename T>
void Queue<T>::dequeue() {
if(!empty()){
  frnt = (frnt + 1)
}

template<typename T>
void Queue<T>::print() const {
    if (empty()) {

        std::cout << "Empty\n";
        return;
    }
    int i = frnt; 
    while (i != (bck+1) % capacity) {

      std::cout << data[i] << ' ';
        
      i = (i + 1) % capacity;
     
    } 
}

