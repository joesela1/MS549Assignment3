#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <algorithm>
#include <chrono>

using namespace std;
using namespace std::chrono;

void bubbleSort(vector<int>& arr) {
	int s = arr.size();

	for (int i = 0; i < s - 1; i++) {
		for (int j = 0; j < s - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				swap(arr[j], arr[j + 1]);
			}
		}
	}
}

int partition(vector<int>& arr, int low, int high) {
	int pivot = arr[high];
	int i = low - 1;
	for (int j = low; j <= high - 1; j++) {
		if (arr[j] < pivot) {
			i++;
			swap(arr[i], arr[j]);
		}
	}
	swap(arr[i + 1], arr[high]);
	return i + 1;
}
void quickSort(vector<int>& arr, int low, int high) {
	if (low < high) {
		int pi = partition(arr, low, high);
		quickSort(arr, low, pi - 1);
		quickSort(arr, pi + 1, high);
	}
}

int main() {

	vector<int> arr1(100);
	vector<int> arr2(1000);
	vector<int> arr3(10000);
	generate(arr1.begin(), arr1.end(), rand);
	generate(arr2.begin(), arr2.end(), rand);
	generate(arr3.begin(), arr3.end(), rand);
	for (int i = 0; i < arr1.size(); i++){
		cout << arr1[i] << " ";
	}

	/*
	//Bubble Sort
	cout << "--------------------------------------------------------------------->" << endl;

	cout << "Executing Bubble Sort for 100" << endl;
	//cout << " Checking the time: " << time(0) << endl;
	auto stTime = high_resolution_clock::now();
	//long startTime = time(0);
	bubbleSort(arr1);
	//cout << " Checking the time: " << time(0) << endl;
	auto edTime = high_resolution_clock::now();
	//long endTime = time(0);
	auto duration = duration_cast<microseconds>(edTime - stTime);
	
	for (int i = 0; i < arr1.size(); i++) {
		cout << arr1[i] << " ";
	}
	
	//long executionTime = endTime - startTime;
	cout << "Bubble sort execution time for size 100: " << duration.count() << endl;
	//cout << "Quick sort execution time for size 100: " << executionTime << endl;
	
	cout << "--------------------------------------------------------------------->" << endl;
	
	cout << "Executing Bubble Sort for 1000" << endl;
	//cout << " Checking the time: " << time(0) << endl;
	stTime = high_resolution_clock::now();
	//long startTime = time(0);
	bubbleSort(arr2);
	//cout << " Checking the time: " << time(0) << endl;
	edTime = high_resolution_clock::now();
	//long endTime = time(0);
	duration = duration_cast<microseconds>(edTime - stTime);
	
	for (int i = 0; i < arr2.size(); i++) {
		cout << arr2[i] << " ";
	}
	
	//long executionTime = endTime - startTime;
	cout << "Bubble sort execution time for size 1000: " << duration.count() << endl;
	//cout << "Quick sort execution time for size 100: " << executionTime << endl;

	cout << "--------------------------------------------------------------------->" << endl;

	cout << "Executing Bubble Sort for 10000" << endl;
	//cout << " Checking the time: " << time(0) << endl;
	stTime = high_resolution_clock::now();
	//long startTime = time(0);
	bubbleSort(arr3);
	//cout << " Checking the time: " << time(0) << endl;
	edTime = high_resolution_clock::now();
	//long endTime = time(0);
	duration = duration_cast<microseconds>(edTime - stTime);
	
	for (int i = 0; i < arr3.size(); i++) {
		cout << arr3[i] << " ";
	}
	
	//long executionTime = endTime - startTime;
	cout << "Bubble sort execution time for size 10000: " << duration.count() << endl;
	//cout << "Quick sort execution time for size 100: " << executionTime << endl;
	*/
	
	//Quick Sort
	cout << "--------------------------------------------------------------------->" << endl;

	cout << "Executing Quick Sort for 100" << endl;
	//cout << " Checking the time: " << time(0) << endl;
	auto stTime = high_resolution_clock::now();
	//long startTime = time(0);
	quickSort(arr1, 0, 99);
	//cout << " Checking the time: " << time(0) << endl;
	auto edTime = high_resolution_clock::now();
	//long endTime = time(0);
	auto duration = duration_cast<microseconds>(edTime - stTime);
	//long executionTime = endTime - startTime;
	cout << "Quick sort execution time for size 100: " << duration.count() << endl;
	//cout << "Quick sort execution time for size 100: " << executionTime << endl;

	cout << "--------------------------------------------------------------------->" << endl;

	cout << "Executing Quick Sort for 1000" << endl;
	//cout << " Checking the time: " << time(0) << endl;
	stTime = high_resolution_clock::now();
	//long startTime = time(0);
	quickSort(arr2, 0, 999);
	//cout << " Checking the time: " << time(0) << endl;
	edTime = high_resolution_clock::now();
	//long endTime = time(0);
	duration = duration_cast<microseconds>(edTime - stTime);
	//long executionTime = endTime - startTime;
	cout << "Quick sort execution time for size 1000: " << duration.count() << endl;
	//cout << "Quick sort execution time for size 100: " << executionTime << endl;

	cout << "--------------------------------------------------------------------->" << endl;

	cout << "Executing Quick Sort for 10000" << endl;
	//cout << " Checking the time: " << time(0) << endl;
	stTime = high_resolution_clock::now();
	//long startTime = time(0);
	quickSort(arr3, 0, 9999);
	//cout << " Checking the time: " << time(0) << endl;
	edTime = high_resolution_clock::now();
	//long endTime = time(0);
	duration = duration_cast<microseconds>(edTime - stTime);
	//long executionTime = endTime - startTime;
	cout << "Quick sort execution time for size 10000: " << duration.count() << endl;
	//cout << "Quick sort execution time for size 100: " << executionTime << endl;
	

	return 0;
}