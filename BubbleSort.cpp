#include<iostream>
#include<vector>
#include "BubbleSort.h"
using namespace std;

int iterationBS=0;

void bubbleSort(vector<int>&nums){
    int n=nums.size();

    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            iterationBS++;

            if(nums[j]>nums[j+1]){
                swap(nums[j],nums[j+1]);
            }
        }
    }
}