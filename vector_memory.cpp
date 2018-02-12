// This program shows the internal management of vector size.
// As elements get added, the size of the internal array that holds them is grown,
// but not all the time, for efficiency's sake.

#include <iostream>
#include <vector>

int main(int argc, const char * argv[]) {
    std::vector<int> myIntVector;
    int cap = 0;
    
    // vector capacity grows at regular intervals as elements get added
    for(int i = 0; i < 1000; i++){
        // add element to the end of array
        myIntVector.push_back(i);
        
        // check for size change in capacity, store and print new capacity
        if(cap < myIntVector.capacity()){
            cap = static_cast<int>(myIntVector.capacity()); // casting capacity to int
            std::cout << "the capacity of myIntVector = " << cap << std::endl;
        }
    }
    return 0;
}
