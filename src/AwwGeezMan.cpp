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
#include <iostream.h>

// Include the Morty header file
#include "Morty.hpp"
#include "Morty.cpp"


int main (int ac, char** av) {
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
		start = argv[1];
		stop = argv[2];
		strcpy(dimension, argv[3]);
		
		if (dimension == "C137") {
		using namespace c137;
			Morty(start, stop);
		}
		else if (dimension == "Z286") {
		using namespace z286;
			Morty(start, stop);
		}
		else {
		std::cout<<"Dimension not Recognized"<<std::endl;
		std::cout<<"Dimensions are C137 or Z286"<<std::endl;
		}
	}
	else if (ac == 5) {
		start = argv[1];
		stop = argv[2];
		step = argv[3]
		strcpy(dimension, argv[4]);
		
		if (dimension == "C137") {
		using namespace c137;
			Morty(start, stop, step);
		}
		else if (dimension == "Z286") {
		using namespace z286;
			Morty(start, stop, step);
		}
		else {
		std::cout<<"Dimension not Recognized"<<std::endl;
		std::cout<<"Dimensions are C137 or Z286"<<std::endl;
		}
	}
	
	// Parse the command line arguments
	
		
	// Depending on the dimension of the arguments, call the appropriate Morty
	// function
	
	
	return 0;
}
