#ifndef SOLVER_H
#define SOLVER_H
class Solver{
    std::string input_path = "";

    std::bitset<100> visited;
    std::bitset<100> edges[100];
    int distances[100][100];
    std::tuple<int,int> nodes[100];


};

#endif