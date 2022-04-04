#pragma once
#include "Node.hpp"
template <typename T>
class LinkedList{
    private:
    Node<T> firstNode;
    Node<T> lastNode;
    
    void addFront();
    void addLast();
    void removeFront();
    void removeLast();
    void Remove(short index);
    void showList();
    bool isEmpty(){
        if(LinkedList::firstNode.getData()==-1){
          std::cout<<"LinkedList is Empty"<<std::endl;
          return true;
      }else{
          return false;
      }
    }

    public:
    LinkedList(){
        std::cout<<"LINKED LIST CREATED!"<<std::endl;
    }
};