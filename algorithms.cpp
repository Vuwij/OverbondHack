/* 
 * File:   algorithms.h
 * Author: Dhruv Chawla
 *
 * Created on June 18, 2016, 3:20 PM
 */

#include "algorithms.h"
#include "Node.h"
#include <unordered_map>

using namespace std;

std::set<int> max_clique;
int max;
extern std::unordered_map<int, Node> NodeMap;
extern std::set<int> Node_ids;

void CP(std::set<int> U, int size) {
    if (U.size() == 0) {
        if (size > max) {
            max = size;
        }
        return;
    }
    while (U.size() > 0) {
        if (U.size() + size <= max){
            return;
        }
        
        int i = U.begin();
        U.erase(i);
        max_clique.insert(i);
        
        Node* Node_i = NodeMap[i];
        std::set<int> U_new;
        
        for (unsigned int j = 0; j < Node_i->neighbours.size(); j++) {
            int neighbour_id = Node_i->neighbours[j].first;
            if (U.find(neighbour_id) != U.end()) U_new.insert(neighbour_id);
        }
        
        size++;
        CP(U_new, size);
        
    }
    return;
}

std::set<int> CP_start() {
    max = 0;
    CP(Node_ids, 0);
    return max_clique;
}
