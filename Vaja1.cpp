#include <fstream>
#include <vector>
using namespace std;

bool Branje_Stevil(vector<int> &vec, const char s[]) {
	ifstream input(s);
	int st;

	if (!input.is_open()) {
		return false;
	}

	while (!input.eof()) {
		input >> st;
		vec.push_back(st);
		while (isspace(input.peek())) input.get();
	}
	input.close();
	return true;
}

void Izpis_Stevil(int* polje, unsigned int velikost) {
	ofstream output("out.txt");

	for (int i = 0; i<velikost; i++)
		output << polje[i] << ' ';
}
int min(vector<int> vec){
	int min=vec[0];
	for (int i = 1; i < vec.size(); i++) {
		if (min > vec[i])
			min = vec[i];
	}
	return min;
}
int max(vector<int> vec){
	int max=vec[0];
	for (int i = 1; i < vec.size(); i++) {
		if (max < vec[i])
			max = vec[i];
	}
	return max;
}
void prirediPlus(vector<int>& vec, int y){
	for (int i = 0; i < vec.size(); i++) {
		vec[i] = vec[i] - y;
	}
}
int main(int argc, const char* argv[]) {
	vector<int> A;

	if (argc < 3) return 0;
	if (!Branje_Stevil(A, argv[2])) return 0;

	if (argv[1][0] == '0') {
		int minst = min(A);
		if (minst < 0)
			prirediPlus(A, minst);
	}
	else {
		//Roman sort
	}
	Izpis_Stevil(&A[0],A.size());

	return 0;
}
