#pragma once
#include <iostream>
template <typename T>
class Node{
    private:
    short index;
    Node* nextNode;
    T data=-1;
    
    public:
    
    Node(T data,Node* nextNode){
        this->data=data;
        this->nextNode=nextNode;
    }
    Node(){
        //std::cout<<"New Node created!"<<std::endl;
    }
    short getIndex(){
        return this->index;
    }
    Node* getNextNode(){
        return this->nextNode;
    }
    T getData(){
        return this->data;
    }

};