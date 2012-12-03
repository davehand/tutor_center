//  Name: Team Diversity
//  Course: CSC260, Section 1
//  Semester: Fall 2012
//  Instructor: Dr. Pulimood
//  Assignment: Collaborative Project
//  Description: Header file for template linked list
//  Filename: LinkedList.h
//  Last modified on: 11/30/12

#if!defined LINKEDLIST_H
#define LINKEDLIST_H
#include <iostream>
#include <fstream>
#include <string>
#include "User.h"
#include "ProgressReport.h"
using namespace std;

// Structure that stores data of type integer.

template <class T>
struct Node
{
	T data;
	Node* link;
};

template <class T>
class LinkedList
{

private:
    
	Node<T>* headPtr;
	Node<T>* currentPos;
	Node<T>* lastPtr;
    int length; 

public:
	
    LinkedList();
	~LinkedList();
	LinkedList(const LinkedList<T>&);
    LinkedList<T> merge(const LinkedList<T> &rhs);
	
    void addElement(T);
	void removeElement (T);
	bool isEmpty();
	void clearList();
    
    
    void writeToFile(string outFileName);
    bool inputFromFile(string inFileName);
    
    LinkedList<T> operator=(const LinkedList<T>&);
    
    template <class S>
	friend ostream& operator <<(ostream&, LinkedList<S>&);
    
    
    // add other methods needed for safe memory management
};
#endif
