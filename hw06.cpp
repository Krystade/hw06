//============================================================================
// Name        : hw06.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void reverse(string& input, int start, int end);

int main() {
	int start;
	int end;
	string alph = "abcdefghijklmnopqrstuvwxyz";
	cout << "alph = " << alph << endl;
	cout << "Start index of swap: ";
	cin >> start;
	cout << "End index of swap: ";
	cin >> end;
	reverse(alph, start, end);

	alph = "abcdefghijklmnopqrstuvwxyz";

	return 0;
}

void reverse(string& input, int start, int end){
	if(start != end){
		char temp = input[end];
		for(int i = end; i >= start + 1; i--){
			input[i] = input[i - 1];
		}
		input[start] = temp;
		reverse(input, start + 1, end);
	}else{
		cout << input;
	}
}
