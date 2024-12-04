#include <iostream>

#include "AdjacencyList.h"

using namespace std;

int main() {
    int no_of_lines, power_iterations;
    AdjacencyList graph;
    string from, to;
    cin >> no_of_lines;
    cin >> power_iterations;
    for (int i = 0; i < no_of_lines; i++) {
        cin >> from;
        cin >> to;
        graph.addEdge(from, to);
    }
    graph.PageRank(power_iterations);
    graph.printingFunction();
}