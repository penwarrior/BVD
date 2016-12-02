#include "tree.h"
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
    cout << "but will it run?" << endl;
    vector<int> gimme = { 4, 5, 1, 7, 12 };
    Tree Maple(gimme);

    Maple.print();
    cin.get();

    //system("pause");
    return 0;
};
