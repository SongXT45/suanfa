#include <iostream>
#include <string>
#include <string.h>
#include "skipList.h"


using namespace std;

//typedef struct Node
//{
//	int a;
//	float c;
//	struct Node* next;
//	struct nNode
//	{
//		struct Node* back;
//		int b;
//	}level[];
//}Node;


int main()
{
	SkipListNode* node = (SkipListNode*)malloc(sizeof(*node) + 5 * sizeof(struct SkipListNode::SkipListLevel));
	cout << sizeof(*node) + 5 * sizeof(struct SkipListNode::SkipListLevel) << endl;
	
	cout<<sizeof(node);

}


