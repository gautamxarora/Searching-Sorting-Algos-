#include<iostream>
#include<vector>
#include "BinarySearch.h"
using namespace std;

int binaryIteration=0;

int binarySearch(vector<int>&nums,int target){
    int n=nums.size();
    int low=0;
    int high=n-1;
    while(low<=high){
        binaryIteration++;
        int mid=low+(high-low)/2;
        if(nums[mid]==target) return mid;
        else if(nums[mid]<target){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return -1;
}