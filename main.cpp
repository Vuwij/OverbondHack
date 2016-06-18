/* 
 * File:   main.cpp
 * Author: Jason Wang
 *
 * Created on June 18, 2016, 12:27 PM
 */

#include "main.h"
#include "Node.h"

using namespace std::chrono;

std::unordered_map<int, Node> NodeMap;
std::set<int> Node_ids;

int main(int argc, char** argv) {
    
    // Loading the textual files as command line argument
    cout << "Loading World" << endl;
    
    if(argc != 2) {
        cout << "The number or arguments is incorrect" << endl;
        return 0;
    }
    
    nodeFile = argv[0];
    edgeFile = argv[1];
    
    loadNodesFromFile("World 1" + nodeFile);
    loadEdgesFromFile("World 1" + edgeFile);
    
    // Start searching for the maximum clique problem
    cout << "Starting search for maximum clique" << endl;
    
    // Time how long it takes to do the search
    auto t1 = chrono::high_resolution_clock::now();
    findMaximumClique();
    auto t2 = chrono::high_resolution_clock::now();
    
    duration<double> time_span = duration_cast<duration<double>>(t2 - t1);
    cout << "Maximum clique search time: " << std::setprecision(5) << time_span.count() << " seconds" << endl;
    
    return 0;
}

void loadNodesFromFile(string file) {
    using namespace std::ifstream;
    std::ifstream file;
    file.exceptions ( std::ifstream::failbit | std::ifstream::badbit );
    
    // The type of nodes and edges to parse
    int nodeID = 0;
    string nodeType = "";
    
    try {
        file.open (file);
        
        
        while (infile >> nodeID >> nodeType) {
            // Process the file
            //Nodes.Add(nodeID, nodeType);
        }
        
        file.close();
        
    } catch (failure e) {
        std::cout << "Error while reading file: " << file << endl;
        exit (EXIT_FAILURE);
    }
}

void loadEdgesFromFile(string file) {
    using namespace std::ifstream;
    std::ifstream file;
    file.exceptions ( std::ifstream::failbit | std::ifstream::badbit );
    
    try {
        file.open (file);
        while (!file.eof()) file.get();
        file.close();
        
    } catch (failure e) {
        std::cout << "Error while reading file: " << file << endl;
        exit (EXIT_FAILURE);
    }
}

void findMaximumClique() {
    
}