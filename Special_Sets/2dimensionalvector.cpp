#include <iostream>
#include <fstream>
#include <vector>

int **HundredbyHundred(std::vector<std::vector<int>> &A, std::ifstream& stream) {
	int tmp;
	for (int i = 0; i < 100; i++) {
		for (int j = 0; j < 100; j++) {
			stream >> tmp;
			A[i][j] = tmp;
		}
	}
}
int main() {
	using namespace std;
	ifstream in_stream;
	in_stream.open("input.txt");
	vector <int> line(100,0);
	vector<vector<int>> A(100,line);
	HundredbyHundred(A, in_stream);

	return 0;
}