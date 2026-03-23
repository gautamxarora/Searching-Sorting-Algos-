#include<iostream>
#include<vector>
#include<chrono>
using namespace std::chrono;
using namespace std;
#include "BinarySearch.h"
#include "LinearSearch.h"
#include "BubbleSort.h"
#include "InsertionSort.h"
#include "QuickSort.h"
#include "MergeSort.h"
#include "SelectionSort.h"

int main(){

vector<int>arrBS={4,1,9,13};
vector<int>arrIS={9,27,1,12};
vector<int>arrMS={20,12,5,69,11};
vector<int>arrQS={29,13,12,77,37,22};
vector<int>arrSS={99,14,55,39,11,58};
vector<int>arrLS={49,23,44,73,10,23,99,67};

// Bubble Sort

auto startBS = high_resolution_clock::now();
bubbleSort(arrBS);
auto stopBS = high_resolution_clock::now();
auto durationBS = duration_cast<nanoseconds>(stopBS - startBS);

cout << "\nBubble Sort: " << endl;
for(int i=0;i<arrBS.size();i++){
    cout << arrBS[i] << " ";
}

cout << "\nNo. Of Iterations: " << iterationBS << endl;
cout << "Time Taken: " << durationBS.count() << endl;

// Insertion Sort

auto startIS = high_resolution_clock::now();
insertionSort(arrIS);
auto stopIS = high_resolution_clock::now();
auto durationIS = duration_cast<nanoseconds>(stopIS - startIS);

cout << "\nInsertion Sort: " << endl;
for(int i=0;i<arrIS.size();i++){
    cout << arrIS[i] << " ";
}

cout << "\nNo. Of Iterations: " << iterationIS << endl;
cout << "Time Taken: " << durationIS.count() << endl;

// Quick Sort

auto startQS = high_resolution_clock::now();
quickSort(arrQS,0,5);
auto stopQS = high_resolution_clock::now();
auto durationQS = duration_cast<nanoseconds>(stopQS - startQS);

cout << "\nQuick Sort: " << endl;
for(int i=0;i<arrQS.size();i++){
    cout << arrQS[i] << " ";
}

cout << "\nNo. Of Iterations: " << iterationQS << endl;
cout << "Time Taken: " << durationQS.count() << endl;

// Merge Sort

auto startMS = high_resolution_clock::now();
mergeSort(arrMS,0,4);
auto stopMS = high_resolution_clock::now();
auto durationMS = duration_cast<nanoseconds>(stopMS - startMS);

cout << "\nMerge Sort: " << endl;
for(int i=0;i<arrMS.size();i++){
    cout << arrMS[i] << " ";
}

cout << "\nNo. Of Iterations: " << iterationMS << endl;
cout << "Time Taken: " << durationMS.count() << endl;

// Selection Sort

auto startSS = high_resolution_clock::now();
selectionSort(arrSS);
auto stopSS = high_resolution_clock::now();
auto durationSS = duration_cast<nanoseconds>(stopSS - startSS);

cout << "\nSelection Sort: " << endl;
for(int i=0;i<arrSS.size();i++){
    cout << arrSS[i] << " ";
}

cout << "\nNo. Of Iterations: " << iterationSS << endl;
cout << "Time Taken: " << durationSS.count() << endl;

// Linear Search

auto startLL = high_resolution_clock::now();
int targetIndex=linearSearch(arrLS,67);
auto stopLL = high_resolution_clock::now();
auto durationLL = duration_cast<nanoseconds>(stopLL - startLL);

cout << "\nLinear Search: " << endl;
cout << "Target is at index: " << targetIndex << endl;

cout << "No. Of Iterations: " << targetIndex+1 << endl;
cout << "Time Taken: " << durationLL.count() << endl;

// Binary Search

auto startBB = high_resolution_clock::now();
int bsIndex=binarySearch(arrLS,23);
auto stopBB = high_resolution_clock::now();
auto durationBB = duration_cast<nanoseconds>(stopBB - startBB);

cout << "\nBinary Search: " << endl;
cout << "Target is at index: " << bsIndex << endl;

cout << "No. Of Iterations: " << binaryIteration << endl;
cout << "Time Taken: " << durationBB.count() << endl;

return 0;
}