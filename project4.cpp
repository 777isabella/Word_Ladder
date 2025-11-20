/**************************************************************************
Class:		CSCI 3333.01 Data Structures and Algorithms
		Spring 2025
Project 4:	The Word Ladder Problem
Name:		Isabella Morgan
ID:         20629238
Description: Use a certain combination of graph, hash, list, stack,
	and queue data structures to solve the word ladder problem.
Input files: words_alpha.txt, wordpairs.txt
	Note: The dictionary is large, and it has 370,105 words.
	the wordpairs.txt contains five pairs of words for testing your program.
Output file: wordladders.txt
	First, output the loading time of the dictionary into this file.
	To save time, output the word ladder for each pair of two words in this file.
	You must print the ladder from the start word to the end word,
	and time used to find the ladder.
Example format of output file:
	Loading time in seconds of the dictionary
	...
	first pair of two words: startWord endWord
	Shortest word ladder (if any) and its length: ...
	Time to find the ladder: ...
	......
**************************************************************************/

#include <fstream>
#include <iomanip>
#include <string>
#include <map>
#include <queue>
#include <stack>
#include <cstdlib>
#include <vector>
#include <iostream>
#include <sstream>
#include <ctype.h> 
#include <utility>
#include <time.h>

//define the parts needed in this header file
#include "project4_head.h"

using namespace std;

int main()
{
	ifstream myfile; // Set up to read Huckleberry
	istringstream ss; //string stream input
	ofstream outfile;

	string letters = "abcdefghijklmnopqrstuvwxyz";

	map<string, string> words[100];	//hash maps to store 
	//all words grouped by length
	map<string, string>::iterator it;
	queue<wordPairType> wqueue;		//word list as a queue
	stack<string> wstack;
	unsigned int i, j, len, cnt, num;
	string startWord, endWord, str, nw, pv;
	wordPairType p, tmp, np;
	bool flag = false;

	//for recording time
	time_t start_time, end_time;

	//record start time for loading
	start_time = time(NULL);

	for (i = 0; i < 100; i++)
		words[i].clear();
	//load words and group them with respect to their lengths
	cout << "loading words ...... " << endl;
	myfile.open("words_alpha.txt"); // open the dictionary
	outfile.open("wordladders.txt"); //the open the output file
	cnt = 0;
	while (!myfile.eof())
	{
		//do the loading
	}
	myfile.close();
	//record the end time of loading
	end_time = time(NULL);
	outfile << endl << "+++++++++++++++++++++" << endl;
	outfile << "loading time used: " << difftime(end_time, start_time)
		<< " seconds" << endl;

	//find word ladders for word pairs
	infile.open("wordpairs.txt");
		while (!infile.eof())
		{
			//record the start time
			start_time = time(NULL);

			//read a pair of the start and end words 
			//find the shortest word ladder for them
			//......

			//print the word ladder into the outfile
			//...

			//record the end time 
			end_time = time(NULL);
			//print the finding time of the word ladder
			outfile << "time used to to find word ladder: "
				<< difftime(end_time, start_time) << " seconds" << endl << endl;
		}
	infile.close();


	//find a pair of two words with the longest length 
	//such that there is no word ladder between them
	//record the start time
	start_time = time(NULL);
	//record the end time 
	//do the work
	//....
	//output the two words with without a ladder to the output file
	end_time = time(NULL);
	//print the finding time of the word ladder
	outfile << "time used to to find two longest words without a word ladder: "
		<< difftime(end_time, start_time) << " seconds" << endl << endl;

	outfile.close();

	//All are done
	return 1;
}

