/*
 ============================================================================
 Name        : shell-lab.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

// Includes
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#include "utility.h"
#include "myshell.h"



//functions
void inputLoop(void){

	char buffer[BUFFER_LEN] = { 0 };

	// read input into buffer
	while(fgets(buffer, BUFFER_LEN, stdin) != NULL){

		// print buffer
		printf("%s",buffer);

	}

}


// main
//
int main(void) {

	printf("Welcome to Our-Shell!\n");

	inputLoop();
//	char temp 256;
//	fgets("%s", temp);


	return EXIT_SUCCESS;

}
