/**
 The One Programming Language

 File: lexer/main.c
  _        _
 / \ |\ | |_    Max Base
 \_/ | \| |_    Copyright 2021; One Language Contributors

 **/

#include <stdio.h>
#include <stdlib.h>

#include "../tokenizer/tokenizer.h"

#include "lexer.h"

int main(int argc, char** argv)
{
	char* input_file;
	char* output_file;
	Token** tokens;

	if (argc == 2) {
		// printf("Error: pass the arguments correcly!\n");
		// printf("./lexer input.one output.tokens");
		// return 1;

		tokens = tokenizer_string(argv[1]);
	}
	else if(argc == 3) {
		input_file = argv[1];
		output_file = argv[2];

		printf("Input file is: %s\n", input_file);
		printf("Output file is: %s\n", output_file);

		tokens = tokenizer_file(input_file);
	}
	else {
		printf("Error: arguments are not correct!\n");
		printf("./lexer input.one output.tokens\n");
		printf("./lexer \"your input here as string\"\n");
		return 1;
	}

	return 0;
}