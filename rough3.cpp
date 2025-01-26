#include<bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
        int s = 0;
        int mid;
        int e = nums.size() - 1;
        while (s <= e) {
            mid = (s + e) / 2;
            if (nums[mid] < target) {
                s = mid + 1;
            } else {
                e = mid - 1;
            }
        }
        int x = nums[mid];
        cout << x<<endl;
        int r1 = mid;
        cout << r1 <<endl;
        int y = target - x;
        // cout << y <<endl;
        int r2;
        s = 0;
        e = nums.size() -1;
        while (s <= e) {
            mid = (s + e) / 2;

            if (nums[mid] == y) {
                r2 = mid;
                break;
            }

            if (nums[mid] < y) {
                s = mid + 1;
            } else {
                e = mid - 1;
            }
        }

       
        
        
        return {r1, r2};
    }

int main(){
    // vector <int> nums = {3, 2, 4};
    vector <int> nums = {2, 7, 11, 15};
    twoSum(nums, 6);
    return 0;
}