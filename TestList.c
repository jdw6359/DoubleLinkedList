#include <stdio.h>
#include <stdlib.h>
#include "LinkedLists.h"


int main(int argc, char *argv[]){

	printf("Running Test on LinkedList!\n");

	/* Declare variable to represent LinkedList module */
	LinkedLists LinkedList;

	/* Initialize Linked List with function call. Sets
	NumElements to zero, and the Front and Back Ptr's to null */
	InitLinkedList(&LinkedList);


	MyData *data1=(MyData *)malloc(sizeof(MyData));
	data1->position=0;
	data1->word="Josh";
	AddToFrontOfLinkedList(&LinkedList, data1);

	MyData *data2=(MyData *)malloc(sizeof(MyData));
	data2->position=1;
	data2->word="Courtney";
	AddToFrontOfLinkedList(&LinkedList, data2);

	MyData *data3=(MyData *)malloc(sizeof(MyData));
	data3->position=2;
	data3->word="Danny";
	AddToFrontOfLinkedList(&LinkedList, data3);

	printf("Contents at front of list\n");
	LinkedListNodes	*testnode=LinkedList.FrontPtr;
	printf("Position %d\n",testnode->Payload->position);
	printf("Word: %s\n", testnode->Payload->word);
	printf("Number of elements %d\n\n", LinkedList.NumElements);

	RemoveFromFrontOfLinkedList(&LinkedList);

	printf("Contents at front of list\n");
	testnode=LinkedList.FrontPtr;
	printf("Position %d\n", testnode->Payload->position);
	printf("Word: %s\n", testnode->Payload->word);
	printf("Number of elements %d\n\n", LinkedList.NumElements);

	RemoveFromFrontOfLinkedList(&LinkedList);

	printf("Contents at front of list\n");
	testnode=LinkedList.FrontPtr;
	printf("Position %d\n", testnode->Payload->position);
	printf("Word: %s\n", testnode->Payload->word);
	printf("Number of elements %d\n\n", LinkedList.NumElements);

	RemoveFromFrontOfLinkedList(&LinkedList);

	testnode=LinkedList.FrontPtr;
	if(testnode==NULL){
		printf("List is empty!\n");
		printf("Number of elements %d\n\n", LinkedList.NumElements);
	}
	/* Add Data Point to the front of the List */

}
