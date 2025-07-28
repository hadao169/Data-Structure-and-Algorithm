#include <vector>
#include <iostream>

using namespace std;

int majorityElement(vector<int>& nums) {
        int count = 0;
        int curEle;
        for(int i = 0; i < nums.size(); i++){
            if(count == 0){
                curEle = nums[i];
            }

            if(nums[i] == curEle){
                count++;
            }else{
                count--;
            }
        }

        return curEle;
    }

int main() {
    vector<int> nums = {3, 2, 3,2,3,1,3,5,7,3,3};
    cout << "Majority Element: " << majorityElement(nums) << endl;
    return 0;
}