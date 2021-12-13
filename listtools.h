//
// Created by Gabep on 12/13/2021.
//

#ifndef GOOB_HW5_Q1_LISTTOOLS_H
#define GOOB_HW5_Q1_LISTTOOLS_H

class Mylist;

template< class T >
class Node {
public:
    Node(const T& theData, Node<T>* theLink)
            : data(theData), link(theLink){}
    Node<T>* getLink( ) const { return link; }
    const T& getData( ) const { return data; }
    void setData(const T& theData) { data = theData; }
    void setLink(Node<T>* pointer) { link = pointer; }
    friend Mylist;
private:
    T data;
    Node<T> *link;
};

template< class T > void headInsert( Node< T >*& head, const T& theData);
template<class T> void insert(Node<T>* afterMe, const T& theData);
template<class T>  void deleteNode(Node<T>* before);
template<class T> void deleteFirstNode(Node<T>*& head);
template<class T> Node<T>* search(Node<T>* head, const T& target);
template<class T> void display (Node<T>* head);

class Mylist {
public:
    Mylist();
    
private:

};


#endif //GOOB_HW5_Q1_LISTTOOLS_H
