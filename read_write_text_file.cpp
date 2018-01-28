#include <iostream>
#include <fstream>

int main(int argc, const char * argv[]) {
    
    std::string fileName = "teste.txt";
    std::ofstream fileOut;
    fileOut.open(fileName);
    if(fileOut.is_open()){
        for(int i = 0; i < 10; i++){
            fileOut << "Nunca mais vou colocar chiclete debaixo da carteira!" << std::endl;
        }
        fileOut.close();
    } else {
        std::cout << "cannot open file: " << fileName << " for writing." << std::endl;
    }
    
    std::ifstream fileIn;
    fileIn.open(fileName);
    if(fileIn.is_open()){
        std::string line;
        while(fileIn.eof() == false){
            std::getline(fileIn, line);
            std::cout << line << std::endl;
        }
    } else {
        std::cout << "cannot open file: " << fileName << " for reading." << std::endl;
    }
    
    fileIn.close();
    
    std::cout << "Hello, World!\n";
    return 0;
}