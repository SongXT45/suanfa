#ifndef __SKIP_H__
#define __SKIP_H__

typedef struct SkipListNode
{
	double score;
	void* obj;
	struct SkipListNode* backward;
	struct SkipListLevel
	{
		int span;
		struct SkipListNode* fordward;
	}level[];
}SkipListNode;

typedef struct SkipList
{
	struct SkipListNode* head, *tail;
	int level;
	int length;
}SkipList;

#endif
