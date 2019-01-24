// Lab4.cpp : Defines the entry point for the console application.
//
//https://www.codementor.io/codementorteam/a-comprehensive-guide-to-implementation-of-singly-linked-list-using-c_plus_plus-ondlm5azr

#include "stdafx.h"
#include <iostream>

using namespace std;

class Node {
public:
	double data; //data
	Node* next; //pointer to next
};

class List {
public:
	List(void) { head, tail = NULL; } //constructor

	//~List(void); //decontructor

	void DisplayList();
	void NewNode(int value);
	//bool isEmpty() { return head == NULL;  }
	//Node* InstertNode(int index, doublle x;)

private:
	Node* head; //first node
	Node* tail; //last node

};


void List::NewNode(int value)
{
	Node* temp = new Node; //creates new node
	temp->data = value; //assigns value to data within new node
	temp->next = NULL; //nothing after the node, when the List hits NULL, knows its the end
	if (head == NULL) //if list empty make node first and last node
	{
		head = temp;
		tail = temp;
		temp = NULL;
	}
	else
	{
		tail->next = temp; //else make new node next node
		tail = temp;
	}
}

void List::DisplayList()
{
	int num = 0;
	Node* currNode = head; //starts list at the start
	while (currNode != NULL) { //while current node isnt the tail, therefore != NULL
		cout << currNode->data << endl; //print the data of the current node
		currNode = currNode->next; //moves to next node
		num++;
	}
	cout << "Number of nodes in the lsit: " << num << endl;
}

int main()
{
	List newList; //creates new list object
	newList.NewNode(5);
	newList.NewNode(10);
	newList.DisplayList();


    return 0;
}

