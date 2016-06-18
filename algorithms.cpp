/* 
 * File:   algorithms.h
 * Author: Dhruv Chawla
 *
 * Created on June 18, 2016, 3:20 PM
 */

#include "algorithms.h"
int maxNumber;

void CP_start() {
    maxNumber = 0;
    CP(Node_ids, 0);
}


void CP(std::set<int> U, int size) {
    if (U.size() == 0) {
        if (size > maxNumber) {
            maxNumber = size;
        }
        return;
    }
    while (U.size() > 0) {
        if (U.size() + size <= maxNumber){
            return;
        }
        
        int i = *(U.begin());
        U.erase(i);
        max_clique.insert(i);
        
        std::set<int> U_new;
        
        for (unsigned int j = 0; j < NodeMap[i].neighbours.size(); j++) {
            int neighbour_id = NodeMap[i].neighbours[j].first;
            if (U.find(neighbour_id) != U.end()) U_new.insert(neighbour_id);
        }
        
        size++;
        CP(U_new, size);
        
    }
    return;
}

