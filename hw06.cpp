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
void reverseLoop(string& input, int start, int end);

int main() {
	int start;
	int end;
	string alph = "abcdefghijklmnopqrstuvwxyz";
	//Print the unaltered string
	cout << "alph = " << alph << endl;
	//Get input for what part of the string should be reversed
	cout << "Start index of swap: ";
	cin >> start;
	cout << "End index of swap: ";
	cin >> end;
	//Reverse the alphabet using the recursive function
	reverse(alph, start, end);
	//Reset the string
	alph = "abcdefghijklmnopqrstuvwxyz";
	cout << "String reset to abcdefghijklmnopqrstuvwxyz" << endl;


	//Get input for what part of the string should be reversed
	cout << "\nStart index of swap: ";
	cin >> start;
	cout << "End index of swap: ";
	cin >> end;
	//Using the iterative function
	reverseLoop(alph, start, end);
	cout << alph;

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

void reverseLoop(string& input, int start, int end){
	char temp = 0;
	for(int i = 0; i < (end-start)/2; i++){
		temp = input[start+i];
		input[start+i] = input[end-i];
		input[end-i] = temp;
	}
}
