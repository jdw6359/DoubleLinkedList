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

	printf("Remove Fron Front Of List Called!\n");

	/* Get Pointer to front node */

	/* Return NULL if front node is empty */



	/* Get temp pointer to front's next */

	/* Set List's front to temp node */

	/* Set temp's previous to null */


}

MyData *RemoveFromBackOfLinkedList(LinkedLists *ListPtr){

}


void DestroyLinkedList(LinkedLists *ListPtr){

}

