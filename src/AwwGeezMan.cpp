#define _CRT_SECURE_NO_WARNINGS
/*
 _____ ____ _____   ____ _____ ____
| ____/ ___| ____| |___ \___  | ___|
|  _|| |   |  _|     __) | / /|___ \
| |__| |___| |___   / __/ / /  ___) |
|_____\____|_____| |_____/_/  |____/

 _   _                                         _      _
| | | | ___  _ __ ___   _____      _____  _ __| | __ / |
| |_| |/ _ \| '_ ` _ \ / _ \ \ /\ / / _ \| '__| |/ / | |
|  _  | (_) | | | | | |  __/\ V  V / (_) | |  |   <  | |
|_| |_|\___/|_| |_| |_|\___| \_/\_/ \___/|_|  |_|\_\ |_|


Aww Geez Man: Interdimensional Mortys.
One of Morty C137's favorite phrases is "Aww Geez Man". But, in dimension Z286, there
exists a Morty who says everything backwards.
*/
#include <stdlib.h>
#include <string.h>
#include <iostream>

// Include the Morty header file
#include "Morty.hpp"
#include "Morty.cpp"


int main(int ac, char** av) {
	char dimension[4];
	int start = 0;
	int stop = 0;
	int step = 0;
	// Parse the command line arguments. The program is executed as
	// ./AwwGeezMan {start} {stop} {dimension}
	// or 
	// ./AwwGeezMan {start} {stop} {step} {dimension}
	if (ac != 4 and ac != 5) {
		std::cout << "Error: Command line arguments are incorrect. Call program as (1) or (2)"
			<< std::endl;
		std::cout << "(1)\t./AwwGeezMan {start} {stop} {dimension}" << std::endl;
		std::cout << "(2)\t./AwwGeezMan {start} {stop} {step} {dimension}" << std::endl;

		return -1;
	}
	else if (ac == 4) {
		start = atoi(*(av + 1));
		stop = atoi(*(av + 2));
		strcpy(dimension, av[3]);

		if (!strcmp(dimension, "C137")) {
			using namespace c137;
			printf("Morty C137 says:\n");
			Morty(start, stop);
		}
		else if (!strcmp(dimension, "Z286")) {
			printf("Morty Z286 says:\n");
			using namespace z286;
			Morty(start, stop);
		}
		else {
			std::cout << "ERROR: Unknown dimension!!" << std::endl;
		}
	}
	else if (ac == 5) {
		start = atoi(*(av + 1));
		stop = atoi(*(av + 2));
		step = atoi(*(av + 3));
		strcpy(dimension, av[4]);

		if (!strcmp(dimension, "C137")) {
			printf("Morty C137 says:\n");
			using namespace c137;
			Morty(start, stop, step);
		}
		else if (!strcmp(dimension, "Z286")) {
			printf("Morty Z286 says:\n");
			using namespace z286;
			Morty(start, stop, step);
		}
		else {
			std::cout << "ERROR: Unknown dimension!!" << std::endl;
		}
	}

	// Parse the command line arguments


	// Depending on the dimension of the arguments, call the appropriate Morty
	// function


	return 0;
}
