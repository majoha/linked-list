#include <iostream>
#include "node.h"

using namespace std;

node::node(int data): mNext(0), mPrev(0), mData(0){

	node::mData = data;
	cout << "Node created. \n";

}


node::~node(void){

	cout << "Node Destroyed. \n";

}

void node::setNextNode(node *nextNode){

	node::mNext = nextNode;

}

void node::setPrevNode(node *prevNode){

	node::mPrev = prevNode;

}

//look at this and re-do
node *node::returnNextNode(){

	return node::mNext;

}

//look at this and re-do
node *node::returnPrevNode(){

	return node::mPrev;

}

void node::returnData(){

	cout << node::mData;

}
