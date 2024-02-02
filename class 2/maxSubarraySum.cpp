#include<bits/stdc++.h>
using namespace std;

struct Result
{
   int value;
   int leftIndex;
   int rightIndex;
};

typedef struct Result Result;

Result max_sub_array_sum(int arr[],int left,int right)
{
    if(right<left)
    return ;
    int mid =(left+right)/2;

    Result leftSubarray = max_sub_array_sum(arr,left,mid);
    Result RightSubArray=max_sub_array_sum(arr,mid+1,right);
    Result crossingSubArray=crossing_sum(arr,left,mid,right);

    return{leftSubarray,RightSubArray,crossingSubArray};


}