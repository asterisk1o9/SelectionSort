//
//  main.cpp
//  SelectionSort
//
//  Created by Marvin Augustin on 6/4/22.
//

#include <iostream>
#include "SSMethod.hpp"

int main(int argc, const char * argv[]) {
    
    SSMethod testObj;
    
    vector<int> a;
    int nums;
    for(int k = 0; k<15; k++){
        nums = rand()%100;
        a.push_back(nums);
    }
    testObj.print(a);
    
    testObj.selectionSort(a);
    testObj.print(a);
    
    return 0;
}
