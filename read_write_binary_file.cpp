// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <fstream>

// use this pragma to remove padding from the struct representation
#pragma pack(push, 1)
struct Person {
	char Name[50];
	int Age;
	double Height;
};
// and this pragma to restore the padding
#pragma pack(pop)

int main()
{
	// initialize Person with content
	Person Me = {"Rafael Santos", 41, 1.865};
	//std::cout << sizeof(Person) << std::endl;
	//std::cout << Me.Name << std::endl;

	std::string fileName = "test.bin";
	std::ofstream fileOut;

	fileOut.open(fileName, std::ios::binary);

	if (fileOut.is_open()) {
		// writing a binary expects the pointer to be of type char
		// that's what the reinterpret_cast is doing
		// we also have to pass in the size fo the struct
		fileOut.write(reinterpret_cast<char *>(&Me), sizeof(Person));
		fileOut.close();
	}
	else {
		// for some reason in visualstudio I can't return the string directly, hence the .data method
		std::cout << "cannot open " << fileName.data() << " for writing." << std::endl;
	}

	///////// read data back in //////////

	// declaring and initializing an empty struct to receive the data
	Person otherMe = {};
	std::ifstream fileIn;

	fileIn.open(fileName, std::ios::binary);

	if (fileIn.is_open()) {
		// same procedure with char pointer
		fileIn.read(reinterpret_cast<char *>(&otherMe), sizeof(Person));
		fileIn.close();
	}
	else {
		std::cout << "cannot open file " << fileName.data() << " for reading." << std::endl;
	}

	std::cout << "here's what we found in the file: "<< otherMe.Name << std::endl;

    return 0;
}

