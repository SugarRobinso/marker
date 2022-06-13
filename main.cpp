#include <iostream>
#include <fstream>
#include <string.h>

using namespace std;

// IDs
// #1 => header
// #2 => 
// #3 => 
// #4 => 
// #5 => 
// #6 => 
// #7 => 
// #8 => 
// #9 => 
// #10 => 


string type = "";

void caseSelection(const string& wrd, int& sel) {
	if (wrd[0] == '#') {
		sel = 2;
	}
}

void printer(string& handle) {

}

int main(int argc, char** argv) {
	// oggetti per lettura e scrittura
	ifstream input;	
	ofstream output;	

	// buffer di lettura
	string s;

	// buffer di scrittura
	string outer;

	// variabile di itentificazione
	int id;

	// apertura e controllo di input
	input.open("readme.txt", ios::in);

	if (input.fail()) {
		return 1;
	}

	// apertura e controllo di output
	output.open("readme.html", ios::trunc);

	if (output.fail()) {
		return 1;
	}

	while(input >> s) {		
		caseSelection(s, id);

		if (id != 0) {
			printer(outer);
			output << outer;
		}
		
		cout << id << endl;
	}

	return 0;
}