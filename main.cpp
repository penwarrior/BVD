#include "tree.h"
#include <iostream>
#include <ctime>

/*
Name: Talon Birns
Date: 11/29/16
Assignment: Breadth search vs Depth search
Class: 281-03


I, Talon Birns, hereby state that all work in this project is my own, unless properly documented and sourced.
*/

/*

		4
	  1   5
	        7
			  12

*/

int main()
{
	srand(time(0));

    cout << "but will it run?" << endl;
    vector<int> gimme;
	gimme.reserve(100);

	for (int i = 0; i < 100; ++i) {
		gimme.push_back(rand() % 100);
	}

    Tree Maple(gimme);
	int chop;

	cout << "What number would you like to search?: ";
	cin >> chop;

	cout << "Depth:\n";
	if (Maple.depth(chop)) {
		cout << "Found it\n";
	}
	else{
		cout << "nada\n";
	}

	cout << "Breadth:\n";
	if (Maple.breadth(chop)) {
		cout << "Found it\n";
	}
	else{
		cout << "nada\n";
	}
    cin.get();

    //system("pause");
    return 0;
};
