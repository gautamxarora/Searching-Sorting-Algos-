#include <iostream>
#include<vector>
#include "SelectionSort.h"
using namespace std;

int iterationSS=0;

void selectionSort(vector<int>&nums){
    int n=nums.size();

    for(int i=0;i<n;i++){
        int minIndex=i;
        for(int j=i+1;j<n;j++){
            iterationSS++;

            if(nums[j]<nums[minIndex]){
                minIndex=j;
            }
        }
        swap(nums[minIndex],nums[i]);
    }
}