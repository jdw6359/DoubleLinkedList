#include <stdio.h>
#include <stdlib.h>
#include "LinkedLists.h"


int main(int argc, char *argv[]){

	/* Check to make sure there are no additional cmdline args */
	if(argc==2){

		/* Declare FILE variable */
		FILE* inputFile;

		/* Attempt to open file provided in commange line arg */
		inputFile=fopen(argv[1],"r");

		/* Check to make sure file was opened properly */
		if(inputFile==NULL){

			/* Send message to stderr, and return 2 to OS */
			fprintf(stderr,"File cannot be opened\n");
			return 2;

		}else{
			/* File was opened properly, perform calculations */

			/* Initialize int to keep track of location in file */
			int location;

			/* Initialize char array pointer to hold text */
			char *word;



		}/* End check for successful opening of file */


	}else{

		/* Send message to stderr, and return 1 to OS */
		fprintf(stderr,"\nUsage: %s <TextFile>.txt\n\n", argv[0]);
		return 1;

	}
	/* End check for correct # of cmdline args */

	/* Program completed successfully, return 0 to OS */
	return 0;

}
/*
	InitLinkedList(&LinkedList);


	MyData *data1=(MyData *)malloc(sizeof(MyData));
	data1->position=0;
	data1->word="Josh";
	AddToBackOfLinkedList(&LinkedList, data1);

	MyData *data2=(MyData *)malloc(sizeof(MyData));
	data2->position=1;
	data2->word="Courtney";
	AddToBackOfLinkedList(&LinkedList, data2);

	MyData *data3=(MyData *)malloc(sizeof(MyData));
	data3->position=2;
	data3->word="Danny";
	AddToBackOfLinkedList(&LinkedList, data3);

	printf("Contents at back of list\n");
	LinkedListNodes	*testnode=LinkedList.BackPtr;
	printf("Position %d\n",testnode->Payload->position);
	printf("Word: %s\n", testnode->Payload->word);
	printf("Number of elements %d\n\n", LinkedList.NumElements);

	RemoveFromBackOfLinkedList(&LinkedList);

	printf("Contents at back of list\n");
	testnode=LinkedList.BackPtr;
	printf("Position %d\n", testnode->Payload->position);
	printf("Word: %s\n", testnode->Payload->word);
	printf("Number of elements %d\n\n", LinkedList.NumElements);

	RemoveFromBackOfLinkedList(&LinkedList);

	printf("Contents at back of list\n");
	testnode=LinkedList.BackPtr;
	printf("Position %d\n", testnode->Payload->position);
	printf("Word: %s\n", testnode->Payload->word);
	printf("Number of elements %d\n\n", LinkedList.NumElements);

	RemoveFromBackOfLinkedList(&LinkedList);

	testnode=LinkedList.FrontPtr;
	if(testnode==NULL){
		printf("List is empty!\n");
		printf("Number of elements %d\n\n", LinkedList.NumElements);
	}*/
	/* Add Data Point to the front of the List */

