#include<iostream>
#include<vector>
#include "QuickSort.h"
using namespace std;

int iterationQS=0;

int partition(vector<int>&nums,int low, int high){
    int pivot=nums[high];
    int i=low-1;

    for(int j=low;j<=high-1;j++){
        iterationQS++;
        if(nums[j]<pivot){
            i++;
            swap(nums[i],nums[j]);
        }
    }
    swap(nums[i+1],nums[high]);
    return i+1;
}

void quickSort(vector<int>&nums,int low, int high) {
  
    if (low < high) {
        int pindex = partition(nums, low, high);

        quickSort(nums, low, pindex - 1);
        quickSort(nums, pindex + 1, high);
    }
}