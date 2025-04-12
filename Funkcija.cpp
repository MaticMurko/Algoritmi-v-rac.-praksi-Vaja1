#include <vector>
using namespace std;



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