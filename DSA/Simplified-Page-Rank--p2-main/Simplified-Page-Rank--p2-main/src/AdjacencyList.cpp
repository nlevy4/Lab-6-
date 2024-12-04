#include <iostream>
#include <iomanip>
#include "AdjacencyList.h"

using namespace std;

// simple function to create the graph
void AdjacencyList::addEdge(string from, string to) {
    adjacencyList[from].push_back(to);
    if (adjacencyList.find(to) == adjacencyList.end()) {
        adjacencyList[to] = {};
    }

}

// printing function with correct format
void AdjacencyList::printingFunction() {
    for(auto it = pageRanks.begin(); it!= pageRanks.end();it++){
        cout << it->first << " " << fixed << setprecision(2) << it->second << endl;
    }
}


// prints the PageRank of all pages after p powerIterations in ascending
// alphabetical order of webpages and rounding rank to two decimal places
void AdjacencyList::PageRank(int n){
    // initial start value for each rank
    for(auto it = adjacencyList.begin(); it != adjacencyList.end();it++) {
        pageRanks[it->first] = 1.0 / adjacencyList.size();
    }
    if (n == 0) {
        return;
    }

    for(int i =1; i < n; i++){
        // create temporary map and set all ranks to 0 initially
        map<string, float> tempMap;
        for(auto it = adjacencyList.begin(); it != adjacencyList.end(); it++){
            tempMap[it->first] = 0;
        }

        // calculate the correct rank for each page
        for(auto it = adjacencyList.begin(); it != adjacencyList.end(); it++){
            // current page
            string name = it->first;
            //vector of pages this page points to
            vector<string> outPages = it->second;
            // outdgree of page
            int outdegree = outPages.size();
            if(outdegree > 0){
                // rank calculation for each page
                float calculatedRank = pageRanks[name] / outdegree;
                for(size_t j = 0; j < outPages.size(); j ++){
                    tempMap[outPages[j]] += calculatedRank;
                }
            }

        }

        pageRanks = tempMap;

    }

}