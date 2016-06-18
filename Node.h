/* 
 * File:   Node.h
 * Author: Dhruv Chawla
 *
 * Created on June 18, 2016, 2:41 PM
 */

using namespace std;

#ifndef NODE_H
#define	NODE_H

class Node {
public:
    unsigned int id;
    string type;
    
    std::vector<std::pair<int, string>> neighbours;
};

#endif	/* NODE_H */

