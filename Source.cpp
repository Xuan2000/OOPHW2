#include<vector>
#include<iostream>

using namespace std;

int min(vector<vector<int>> list)
{
	list.resize(4);
	for (int i = 0; i < 4; i++) list[i].resize(3);
	int min = list[0][0];
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 3; j++) {
			if (list[i][j] <= min) min = list[i][j];
		}
	}
	return min;
}

int main()
{
	vector<vector<int>> array2(4);
	for (int i = 0; i < 4; i++) array2[i].resize(3);
	for (int i = 0; i < 4; i++){
		for (int j = 0; j < 3; j++) {
			cin >> array2[i][j];
		}
	}

	cout <<"min: "<< min(array2);

	system("pause");
}