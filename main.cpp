/* 
 * File:   main.cpp
 * Author: Jason Wang
 *
 * Created on June 18, 2016, 12:27 PM
 */

#include "main.h"

using namespace std::chrono;

int main(int argc, char** argv) {
    
    cout << "Starting search for maximum clique" << endl;
            
    auto t1 = chrono::high_resolution_clock::now();
    findMaximumClique("","");
    auto t2 = chrono::high_resolution_clock::now();
    
    duration<double> time_span = duration_cast<duration<double>>(t2 - t1);
    cout << "Maximum clique search time: " << std::setprecision(5) << time_span.count() << " seconds" << endl;
    
    return 0;
}

void findMaximumClique(string nodeFile, string edgeFile) {
    // Get the files and parse them into the data structures
    
}
