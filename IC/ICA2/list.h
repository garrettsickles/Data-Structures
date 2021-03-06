//
//  list.h
//  ICA2
//
//  Created by Garrett Frank Sickles on 8/26/13.
//  Copyright (c) 2013 Garrett Frank Sickles. All rights reserved.
//

#ifndef __ICA2__menu__
#define __ICA2__menu__

#include <iostream>
#include <vector>
#include <string>

using namespace std;

static const size_t CAPACITY = 1024;

class list {
public:
	// default constructor: initialize size of list to zero
	list();

	// return current size of list
	int size();

	// return character at position; should return NUL ('\0')
	// if position is greater than or equal to size.
	char get(int position);

	// append a character to the end of the list.  If the list
	// size is already 1024, this method should do nothing.
	void add(char c);

	// insert a character before the character at position; e.g.,
	// if the list is
	//    a b c d
	// then insert('z', 2) should result in
	//    a b z c d
	// The method should do nothing if position is greater than
	// the size of the list, or if the list size is 1024.
	void insert(char c, int position);

	// remove the character at position; e.g., if the list is
	//    a b c d
	// then erase(2) should result in
	//    a b d
	// The method should do nothing if position is greater than 
	// or equal to the size of the list.
	void erase(int position);
    
    // Prints the list in its current state
    void print();
    
    // Activates the user interface menu
    int menu();

private:
	int             _size;              // stores the current size of the list
	char            _data[CAPACITY];	// stores the list
    vector<string>  menuItems;          // stores the strings of the menu items

};
#endif /* defined(__ICA2__list__) */
