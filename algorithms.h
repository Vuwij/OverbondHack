/* 
 * File:   algorithms.h
 * Author: Dhruv Chawla
 *
 * Created on June 18, 2016, 3:20 PM
 */

#ifndef ALGORITHMS_H
#define	ALGORITHMS_H

#include "Node.h"

#include <set>
#include <unordered_set>
#include <unordered_map>

using namespace std;

extern int maxNumber;
extern std::unordered_map<int, Node> NodeMap;
extern std::set<int> Node_ids;
extern std::set<int> max_clique;

void CP(std::set<int> C, std::set<int> P);
void CP_start();

#endif	/* ALGORITHMS_H */

