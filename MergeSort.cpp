#include<iostream>
#include<vector>
#include "MergeSort.h"
using namespace std;

int iterationMS=0;

void merge(vector<int>&nums,int left,int mid,int right){
    int n1=mid-left+1;
    int n2=right-mid;
    vector<int>num1(n1),num2(n2);

    for(int i=0;i<n1;i++){
        num1[i]=nums[left+i];
    }
    for(int j=0;j<n2;j++){
        num2[j]=nums[mid+j+1];
    }

    int i=0,j=0,k=left;
    while(i<n1 && j<n2){
        if(num1[i]<=num2[j]){
            nums[k]=num1[i];
            i++;
        }
        else{
            nums[k]=num2[j];
            j++;
        }
        k++;
    }

    while(i<n1){
        nums[k]=num1[i];
        k++;
        i++;
    }
    while(j<n2){
        nums[k]=num2[j];
        k++;
        j++;
    }
    iterationMS++;
}

void mergeSort(vector<int>&nums, int left, int right){
    
    if (left >= right) return;

    int mid = left + (right - left) / 2;
    mergeSort(nums, left, mid);
    mergeSort(nums, mid + 1, right);
    merge(nums, left, mid, right);
}