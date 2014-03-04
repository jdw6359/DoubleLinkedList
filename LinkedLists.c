#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "LinkedLists.h"


void InitLinkedList(LinkedLists *ListPtr){

	printf("Init Linked List Called!\n");

	/* Set NumElements to zero */
	ListPtr-> NumElements=0;

	/* Set FrontPtr to Null */
	ListPtr->FrontPtr=NULL;

	/* Set BackPtr to Null */
	ListPtr->BackPtr=NULL;

	printf("Init Linked List Ended!\n");
}

void AddToFrontOfLinkedList(LinkedLists *ListPtr, MyData *DataPtr){

	printf("Add To Front of LinkedList Called!\n");

	/* Create LinkedList Node */
	LinkedListNodes *node=(LinkedListNodes *)malloc(sizeof(LinkedListNodes));

	/* Set node payload pointer to DataPtr */
	node->Payload=DataPtr;

	/* Check to see if the Linked List is empty */
	if(ListPtr->NumElements==0){

		printf("Adding element to empty list!\n");

		/* Set both front and back pointers to the new element */
		ListPtr->FrontPtr=node;
		ListPtr->BackPtr=node;

		/* Set the new elements next to Null */
		node->Next=NULL;

	}else{

		printf("Adding element to non empty list!\n");

		/* Get a temporary handle on the previous head */
		LinkedListNodes *TempNode=ListPtr->FrontPtr;

		/* Set the Front Pointer of the Linked List to the new element*/
		ListPtr->FrontPtr=node;

		/* Set new node's next to temp node */
		node->Next=TempNode;

		/* Set Temp Node's previous to new node */
		TempNode->Previous=node;

	}

	/* Set the node's previous to null */
	node->Previous=NULL;

	/* Increment the number of elements in the list */
	ListPtr->NumElements++;

	printf("Add to Front Of LinkedList Ended!\n");
}


void AddToBackOfLinkedList(LinkedLists *ListPtr, MyData *DataPtr){

	printf("Add To Back Of LinkedList Called!\n");

	/* Create LinkedList Node */
	LinkedListNodes *node=(LinkedListNodes *)malloc(sizeof(LinkedListNodes));

	/* Set node payload pointer to DataPtr */
	node->Payload=DataPtr;

	if(ListPtr->NumElements==0){

		printf("Adding element to empty list\n");

		/* Set both the front and back list pointers to the new element */
		ListPtr->FrontPtr=node;
		ListPtr->BackPtr=node;

		/* Set the new elements next to null */
		node->Next=NULL;

	}else{

		printf("Adding element to non-empty list\n");

		/* Get a temporary pointer to the old back of list */
		LinkedListNodes *TempNode=ListPtr->BackPtr;

		/* Set back of list to new */
		ListPtr->BackPtr=node;

		/* Set temp's next to new node */
		TempNode->Next=node;

		/* Set new node's previous to temp */
		node->Previous=TempNode;

	}

	/* Set the back node's next to null */
	node->Next=NULL;

	/* Increment the number of elements in the linked list */
	ListPtr->NumElements++;

	printf("Add To Back Of LinkedList Complete!\n");

}



MyData *RemoveFromFrontOfLinkedList(LinkedLists *ListPtr){

	printf("Remove From Front Of List Called!\n");

	/* Declare pointer to linked list node */
	LinkedListNodes *NodePtr;

	/* Declare a pointer to list element to be returned */
	MyData *DataPtr;

	/* Assign pointer to node being removed */
	NodePtr=ListPtr->FrontPtr;

	/* Check to see if the Front of the list is nulll */
	if(NodePtr==NULL){

		/* No elements can be removed, return null */
		return NULL;

	}else{

		/* Assign dataptr to the data being removed and returned */
		DataPtr=NodePtr->Payload;

		/* Set the front pointer to the next element in the list */
		ListPtr->FrontPtr=NodePtr->Next;

		if(ListPtr->FrontPtr==NULL){
			/* Do nothing, cannot set attribute of NULL */

		}else{

			/* Detatch the node from being removed from the front of the list */
			ListPtr->FrontPtr->Previous=NULL;
		}


		free(NodePtr);

		ListPtr->NumElements--;

		return DataPtr;

	}

	printf("Remove From Front Of List Ended!\n");
}

MyData *RemoveFromBackOfLinkedList(LinkedLists *ListPtr){

}


void DestroyLinkedList(LinkedLists *ListPtr){

}

