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
	vector<vector<int>> A;
	HundredbyHundred(A, in_stream);

	return 0;
}
