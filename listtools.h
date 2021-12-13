//
// Created by Gabep on 12/13/2021.
//

#ifndef GOOB_HW5_Q1_LISTTOOLS_H
#define GOOB_HW5_Q1_LISTTOOLS_H
#include <iostream>
using namespace std;

template < class T>
class Mylist; // forward declaration to let template class "Node" know this class "Mylist" is defined later on
              // so we can declare it("Mylist") as a friend of "Node" class

template< class T >
class Node {
public:
    Node(const T& theData, Node<T>* theLink) // initializing the data element "data" and the pointer "link"
            : data(theData), link(theLink){}
    Node<T>* getLink( ) const { return link; } // accessor function for link
    const T& getData( ) const { return data; } // accessor function for data
    void setData(const T& theData) { data = theData; } // mutator function for data
    void setLink(Node<T>* pointer) { link = pointer; } // mutator function for link

    template<class G> friend class Mylist; // Declaring "Mylist" class as a friend

private:
    T data; // setting private member "data" as T to be any desired data type
    Node<T> *link; // creating a pointer of type Node<T> called link
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
    void headinsert(T theData); // Takes data of any type to insert to the head of a list
    T deleteHead(); // Deletes the node at the beginnning and returns the data element stored inside the node.
    // (JUST THE ELEMENT INSIDE, NOT THE NODE! This is okay because we are only asked to return the elements not the node.)
    bool search(T target); //takes in an input and returns true or false depending on its existence among the elements in list
    void display(); // displays all the data elements
private:
    Node<T> *head; //Only data member for "Mylist" class is a pointer of type Node<t> called head
};
#endif //GOOB_HW5_Q1_LISTTOOLS_H
