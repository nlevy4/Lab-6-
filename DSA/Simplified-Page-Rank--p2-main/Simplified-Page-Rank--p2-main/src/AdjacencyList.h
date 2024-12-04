#pragma once

#include <string>
#include <map>
#include <iostream>
#include <vector>


using namespace std;

class AdjacencyList {
    private:
    map<string, vector<string>> adjacencyList;
    map<string, float> pageRanks;


    public:
    //Think about what helper functions you will need in the algorithm
    void PageRank(int n);
    void addEdge(string from, string to);
    void printingFunction();

};


