#pragma once
/**************************************************************************
Class:		CSCI 3333.01 Data Structures and Algorithms
			Spring 2025
Project 4:	The Word Ladder Problem
Name:		Isabella Morgan
ID:         20629238
Description: In this header file, we define wordPairType
			and other needed parts.
**************************************************************************/
#ifndef HW4
#define HW4


#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <map>
#include <cstdlib>
#include <vector>

using namespace std;

class wordPairType
{
private:
	string wd;			//word
	string pv;		// parent of word

public:
	void setWordPair(string w, string p);
	wordPairType& operator=(const wordPairType& p);
	wordPairType();
	wordPairType(const wordPairType& p);
	string getWord() { return wd; }
	string getParent() { return pv; }
	void clear() { wd.clear(); pv.clear(); }
};
//define methods in wordPairType
//do the work

#endif

