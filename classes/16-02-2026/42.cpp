#include<iostream>
#include<vector>
using namespace std ;
    int pivotIndex(vector<int>& nums) {
       
        int total = 0;
        for(int x : nums) total += x;
        int left = 0 ;
        for(int i = 0 ; i < nums.size() ; i++ ){
            int right = total-left-nums[i];

            if(left == right){
                return i ;
            left += nums[i]; 
        }
    }  
           return -1 ;
            }
    

int main(){
    int n;
    cin>>n ;

    vector<int> nums(n);
    for(int i= 0 ; i<n ; i++){
        cin>> nums[i];
    }
    cout << "pivot index : " << pivotIndex(nums);
    return 0 ;

}