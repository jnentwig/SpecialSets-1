// Special_Sets.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <cstdlib>
#include <fstream>

using namespace std;

vector<vector<int>> Load_Data(string filename) {
	vector<vector<int>> data;
	data.resize(100, vector<int>(100));
	ifstream input;
	input.open(filename);
	for (int i = 0; i < 100; i++) {
		for (int j = 0; j < 100; j++) {
			input >> data[i][j];
		}
	}
	return data;
};

vector<int> MV_Product(vector<vector<int>> matrix, vector<int> vec) {
	int n = vec.size;
	vector<int> out(n);
	for (int i = 0; i < n; i++) {
		int sum = 0;
		for (int j = 0; j < n; j++) {
			sum += matrix[i][j] * vec[j];
		}
		out[i] = sum;
	}
	return out;
}

int main()
{
	vector<vector<int>> matrix = Load_Data("input.txt");
	for (int i = 0; i < 10; i++) {
		cout << matrix[i][1] << '\t';
	}


	cout << "Press any key to exit" << endl;
	char tmp;
	cin >> tmp;
    return 0;
}

