#include<iostream>
#include<vector>
using namespace std;

int partitionAt(vector<int> &elements, int left, int right) {
	int pivotElement = elements[right];
	int i = left - 1;

	for (int j = left; j <= right - 1; j++) {
		if (elements[j] < pivotElement) {
			i++;
			swap(elements[i], elements[j]);
		}
	}

	swap(elements[i + 1], elements[right]);
	return i + 1;
}

void quickSort(vector<int> &elements, int left, int right) {
	if(left < right) {
		int pivotIndex = partitionAt(elements, left, right);
		quickSort(elements, left, pivotIndex-1);
		quickSort(elements, pivotIndex+1, right);
	}
}

int main() {
	vector<int> elements;
	int numOfElements;

	cout << "Enter the number of elements you want to add in array: ";
	cin >> numOfElements;

	for (int i = 0; i < numOfElements; i++) {
		int num;
		cout << "Enter number to insert at index " << i << ": ";
		cin >> num;
		elements.push_back(num);
	}

	int left = 0;
	int right = numOfElements - 1;

	quickSort(elements, left, right);

	for (int i = 0; i <numOfElements; i++) {
		cout << elements[i] << " ";
	}

}