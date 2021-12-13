//
// Created by Gabep on 12/13/2021.
//
#include <iostream>
#include "listtools.h"
template<class T>
Mylist<T>::Mylist() {} // default constructor for "Mylist" class

template<class T>
void Mylist<T>::display() // function to display all data elelments in instance of "Mylist" object
{
    Node<T>*temp=head; // creating a "temporary" Node and setting it equal to head
    while(temp!=NULL) // while loop that stops when temp=NULL
    {
        cout<<temp->data<<endl; // prints data stored in the object of "Mylist" of the data element pointer temp is pointing to.
        temp = temp->link; // while temp!=head temp now points to the next "link"(address) of the next data element in "Mylist" object
    }
}

template<class T>
void Mylist<T>::headinsert(T theData) //function inserting a new Node at the beginning of the list
{
    head = new Node<T>(theData, head); // creates a new node and assigns it the beginning of the list
}

template<class T>
T Mylist<T>::deleteHead() // function deleting the first Node in the list
{
    Node<T> *discard; // creating a "discard" pointer of type Node<T>
    discard = head; // giving address keys to house of head
    head = head->link; // setting head to the next node in the list
    delete discard; // deleting what is in discard node
}

template<class T>
bool Mylist<T>::search(T target) // function that can tell whether a node exists or note based of the data inputted as parameter
{
    Node<T>* here = head; // creating a pointer "here" of type Node<T> and setting it equal to head Node

    if (here == NULL)  // if Node here points to nothing
    {
        return NULL; // return NULL
    }
    else
    {
        while (here->data != target && here->link != NULL) // while data doesn't equal target and link is not null
            here = here->link; // set "here's" link equal to the next in the list

        if (here->data == target) // if the data "here" points to matches "target"
            return here; // target exists return node "here"
        else
            return NULL; // return null
    }
}