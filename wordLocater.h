
// this program finds the location of word grapes in a sentence. 
//(Note: This algorithm will work for any word for example: apple, orange, persons name, city name etc)

// example of input
//***************
// grapes are yummy when they are ripe, grapes are not yummy when they are not ripe.

// example of output. 
//******************
// the word grapes appeared in location 1, 10, 15 (Note: This is just an example) 

// include necessary header file. 
#include <iostream>
#include <string>

using namespace std; 

int main()
{
	string inputSentence; // variable to get the input from the user.
	int location; // variable to keep track of the location of the word grapes. 

	// output instruction to the user to input a sentence. 
	cout << "Please enter a sentence:" << endl; 
	getline(cin, inputSentence); 

	// find the first location of the word grapes. 
	location = inputSentence.find("grapes"); 

	// console output. 
	cout << "The word grapes appeared in location: ";

	// run the while loop until the end of the sentence 
	while (location != string::npos)
	{
		cout << location+1; // add one to location else if the first word is grapes it will output 0 as a location
		// not very human friendly!!!
		location = inputSentence.find("grapes", location + 1); // find the word grapes and updated it's location. 

		// if it's not end of the sentence!
		if (location != string::npos)
		{
			cout << ", ";// output comma in between the numbers. 
		}

	}
	// create extra space 
	cout << endl; 

	return 0;
}
