/* 
 * File:   Node.cpp
 * Author: Dhruv Chawla
 *
 * Created on June 18, 2016, 3:04 PM
 */

#include "Node.h"

Node::Node(int id_, string type_) {
    id = id_;
    type = type_;
}

void Node::addNeighbours(int Node_id, string connection) {
    neighbours.push_back(std::make_pair(Node_id, connection));
}