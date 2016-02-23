#include <iostream>

#include "linkedList.h"

class node;

using namespace std;

linkedList::linkedList(void): mHeadNode(0), mCurrentNode(0), mPrevNode(0){

	cout << "Linked list class created. \n";

}

linkedList::~linkedList(void){

	cout << "Linked list class destroyed. \n";

}

bool linkedList::returnIfCurrentExists(node *current){

	return current != NULL;

}

void linkedList::createNode(int temp){

	if(!mHeadNode){
	
		mHeadNode = new node(temp);

	}else{
	
		mCurrentNode = mHeadNode;

		//loop until the end of the list
		while(mCurrentNode->returnNextNode() != 0){
		
			mCurrentNode = mCurrentNode->returnNextNode();

		}

		mPrevNode = mCurrentNode;
		mCurrentNode->setNextNode(new node(temp));
		mCurrentNode = mCurrentNode->returnNextNode();
		mCurrentNode->setPrevNode(mPrevNode);

	}

}

void linkedList::displayPrev(){

	mCurrentNode = mHeadNode;

	while(returnIfCurrentExists(mCurrentNode)){
	
		cout << "The value of curr is ";
		mCurrentNode->returnData();
		cout << "\n";

		if(mCurrentNode != mHeadNode){

			cout << "The value of prev is ";
			mCurrentNode->returnPrevNode()->returnData();
			cout << "\n";

		}

		mCurrentNode = mCurrentNode->returnNextNode();

	}//while
}