
//===- Teaching-Software-Verification Assignment 1-------------------------------------//
//
//     SVF: Static Value-Flow Analysis Framework for Source Code
//
// Copyright (C) <2013->
//

// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.

// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.
//
//===-----------------------------------------------------------------------===//

/*
 // Teaching-Software-Verification Assignment 1 : Graph Traversal
 //
 // 
 */


#include "Assignment-1.h"
#include <unordered_set>
#include <stack>
using namespace std;

/// TODO: print each path once this method is called, and
/// add each path as a string into std::set<std::string> paths
/// Print the path in the format "START: 1->2->4->5->END", where -> indicate an edge connecting two node IDs
void GraphTraversal::printPath(std::vector<const Edge *> &path)
{
    std::string pathString = "START: ";
    for (auto e : path) {
        pathString += std::to_string(e->getDst()->getNodeID());
        pathString += "->";
    }
    pathString += "END";
    paths.insert(pathString);
    std::cout << pathString << std::endl;
};

/// TODO: Implement your depth first search here to traverse each program path (once for any loop) from src to dst
void GraphTraversal::DFS(const Edge *src_edge, const Node *dst)
{
    visited.insert(src_edge->getSrc());
    path.push_back(src_edge);
    if (path.back()->getDst() == dst) {
        printPath(path);
    }
    for (auto e : path.back()->getDst()->getOutEdges()) {
        const bool is_in = visited.find(e->getSrc()) != visited.end();
        if (!is_in)
            DFS(e, dst);
    }
    visited.erase(src_edge->getSrc());
    path.pop_back();
}
