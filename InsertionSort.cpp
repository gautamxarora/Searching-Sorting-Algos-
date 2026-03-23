#include<iostream>
#include<vector>
#include "InsertionSort.h"
using namespace std;

int iterationIS=0;

void insertionSort(vector<int>&nums){
    int n=nums.size();
    int key;

    for(int i=1;i<n;i++){
        key=nums[i];
        int j=i-1;

        while(j>=0 && key<nums[j]){
            iterationIS++;
            nums[j+1]=nums[j];
            j--;
        }
        nums[j+1]=key;
    }
}
