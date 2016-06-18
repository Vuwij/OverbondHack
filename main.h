/* 
 * File:   main.h
 * Author: Jason Wang
 *
 * Created on June 18, 2016, 2:00 PM
 */

#ifndef MAIN_H
#define	MAIN_H

#define LOAD_FROM_FOLDER true

#include <iostream>
#include <iomanip> 
#include <chrono>
#include <fstream>

using namespace std;

string nodeFile;
string edgeFile;

// Loads the nodes from the file into the NodeList class
void loadNodesFromFile(string s);

// Loads the edges from the edge file onto the Nodes class
void loadEdgesFromFile(string s);

// Displays the nodes and edges onto the map, nodes can be issuers, investors, and dealors
void visualizeNodesAndEdges();

// The formula that is used to solve the maximum clique problem
void findMaximumClique();


#endif	/* MAIN_H */

