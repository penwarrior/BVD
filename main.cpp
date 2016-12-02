#include "tree.h"
#include <ctime>
#include <iostream>

/*
Name: Talon Birns
Date: 11/29/16
Assignment: Breadth search vs Depth search
Class: 281-03


I, Talon Birns, hereby state that all work in this project is my own, unless properly documented and sourced.
*/


int main()
{
    srand(time(0));
    vector<int> gimme;
    vector<int> search;
    gimme.reserve(100);
    int depthTotal = 0;
    int breadthTotal = 0;

    for (int i = 0; i < 100; ++i) {
        gimme.push_back(rand() % 100);
    }
    for (int j = 0; j < 10; ++j) {
        search.push_back(rand() % 100);
    }

    Tree Maple(gimme);

    for (unsigned int k = 0; k < search.size(); ++k) {
        Maple.depth(search[k]);
        depthTotal += g_DepthCompCount;
        Maple.breadth(search[k]);
        breadthTotal += g_BreadthCompCount;
    }

    cout << "\n*tree size is 100 nodes*\n";
    cout << "Depth comparison average: " << (depthTotal / 10) << "\n";
    cout << "Breadth comparison average: " << (breadthTotal / 10) << "\n";

    cin.get();

    return 0;
};
