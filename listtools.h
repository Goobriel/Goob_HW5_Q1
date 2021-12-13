//
// Created by Gabep on 12/13/2021.
//

#ifndef GOOB_HW5_Q1_LISTTOOLS_H
#define GOOB_HW5_Q1_LISTTOOLS_H

template < class T>
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
    friend Mylist <T>;
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

template < class T>
class Mylist {
public:
    Mylist();
    void insertHead(T theData); // Takes data of any type to insert to the head of a list
    T deleteHead(); // Deletes the node at the beginnning and returns the data element stored inside the node.
    // (JUST THE ELEMENT INSIDE, NOT THE NODE! This is okay because we are only asked to return the elements not the node.)
    bool search(T target); //takes in an input and returns true or false depending on its existence among the elements in list
    void display(); // displays all the data elements
private:
    Node<T> *head;
};


#endif //GOOB_HW5_Q1_LISTTOOLS_H
