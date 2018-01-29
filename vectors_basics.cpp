#include <iostream>
#include <vector>


int main(int argc, const char * argv[]) {
    // simple vector of integers
    std::vector<int> myInts(5);
    
    // using square brackets to access members of this vector
    for(int i = 0; i < myInts.size(); i++){
        myInts[i] = 2*i;
    }
    std::cout << "myInt's size is: " << myInts.size() << std::endl;
    std::cout << "and the first element is: " << myInts[0] << std::endl;
    
    // using iterators to access vector members
    for(std::vector<int>::iterator it = myInts.begin(); it != myInts.end(); it++){
        std::cout << "myInts :" << *it << std::endl;
    }
    
    std::vector<int> otherInts;
    for(int i = 0; i < 10; i++){
        // push_back method adds element to the end of vector and increases the size
        otherInts.push_back(i*i);
    }
    
    for(int i = 0; i < otherInts.size(); i++){
        std::cout << "element #" << i << " of otherInts is: " << otherInts[i] << std::endl;
    }
    std::cout << "Hello, World!\n";
    return 0;
}