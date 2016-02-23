#pragma once

#ifndef node_H
#define node_H

class node{

private:

	int mData;
	node *mNext;
	node *mPrev;

public:

	node(int);
	~node(void);
	node *returnNextNode(void);
	node *returnPrevNode(void);
	void setNextNode(node *nextNode);
	void setPrevNode(node *nextNode);
	void returnData();

};

#endif node_H