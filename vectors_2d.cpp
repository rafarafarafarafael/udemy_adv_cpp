// Create and manipulate 2D vectors
#include <iostream>
#include <vector>

int main(int argc, const char * argv[]) {
    std::vector<std::vector<int>> multTable12(0, std::vector<int>(3, 12));
    for(int i = 0; i < 10; i++){
        multTable12[i][0] = i+1;
        multTable12[i][2] = (i+1) * 12;
    }
    
    for(int i = 0; i < multTable12.size(); i++){
        std::cout << multTable12[i][0] << " x " << multTable12[i][1] << " = " << multTable12[i][2] << std::endl;
    }
    std::cout << "Hello, World!\n";
    return 0;
}
