//
//  SSMethod.cpp
//  SelectionSort
//
//  Created by Marvin Augustin on 6/4/22.
//

#include "SSMethod.hpp"

void SSMethod::print(vector<int>&a){
    for(auto e : a){
        cout << e << " ";
    }
    cout << "\n";
}

void SSMethod::selectionSort(vector<int>&a){
    int low;
    int temp;
    
    for(int i = 0;  i< a.size(); i++){
        low = i;
        for(int j = i+1; j <a.size(); j++)
        {
            if(a[j]<a[low])
            {
                low = j;
            }
        }
        temp = a[low];
        a[low] = a[i];
        a[i] = temp;
        //print(a);
    }
}




