#pragma once

#ifndef linkedList_H_INCLUDED
#define linkedList_H_INCLUDED

#include "node.h"

class linkedList{

private:

	node *mHeadNode;
	node *mCurrentNode;
	node *mPrevNode;

public:

	linkedList(void);
	~linkedList(void);
	void createNode(int);
	bool returnIfCurrentExists(node*);

	void displayPrev();

};

#endif
