/* 
 * File:   algorithms.h
 * Author: Dhruv Chawla
 *
 * Created on June 18, 2016, 3:20 PM
 */

#include "algorithms.h"

int maxNumber;

void dummy() {}

void CP_start() {
    maxNumber = 0;
    std::set<int> empty_set;
    CP(empty_set, Node_ids);
}


//std::set<int> CP(std::set<int> U, int size, std::set<int> max_clique) {
//    if (U.size() == 0) {
//        if (size > maxNumber) {
//            maxNumber = size;
//        }
//        return max_clique;
//    }
//    while (U.size() > 0) {
//        if (U.size() + size <= maxNumber){
//            std::set<int> emptySet;
//            cout << "One" << endl;
//            return emptySet;
//        }
//        
//        int i = *(U.begin());
//        U.erase(i);
//        max_clique.insert(i);
//        
//        std::set<int> U_new;
//        
//        for (unsigned int j = 0; j < NodeMap[i].neighbours.size(); j++) {
//            int neighbour_id = NodeMap[i].neighbours[j].first;
//            if (U.find(neighbour_id) != U.end()) U_new.insert(neighbour_id);
//        }
//        
//        size++;
//        CP(U_new, size, max_clique);
//        
//    }
//    std::set<int> emptySet;
//    cout << "Two" << endl;
//    return emptySet;
//}

void CP(std::set<int> C, std::set<int> P) {
    std::set<int>::iterator it1;
    for (it1 = max_clique.begin(); it1 != max_clique.end(); it1++) {
        cout << *it1 << " ";
    }
    cout << endl;
    if (C.size() > max_clique.size()) max_clique = C;
    
    if (C.size() + P.size() > max_clique.size()) {
        std::set<int>::iterator it;
        for (it = P.begin(); it != P.end(); it++) {
            C.insert(*it);
            
            std::set<int> P_new;
            
            for (unsigned i = 0; i < NodeMap[*it].neighbours.size(); i++) {
                int neighbour_id = NodeMap[*it].neighbours[i].first;
                if (P.find(neighbour_id) != P.end()) P_new.insert(neighbour_id);
            }
            CP(C, P_new);
        }
    }
}
