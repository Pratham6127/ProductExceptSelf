#include<bits/stdc++.h>
using namespace std;

vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int>result(n,1);


        int prefix=1;
        for(int i=0;i<n;i++){
            result[i]=prefix;
            prefix*=nums[i];
        }

        int suffix=1;
        for(int i=n-1; i>=0;i--){
            result[i]*=suffix;
            suffix*=nums[i];
        }

        return result;
        
}

int main(){

    int n;
    cout<<"Enter the size of the array";
    cin>>n;

    vector<int>nums(n);

    cout<<"Enter the elements of the array";
    for(int i=0; i<nums.size();i++){
        cin>>nums[i];
    }

    vector<int>ans=productExceptSelf(nums);

    for(int i=0; i<ans.size();i++){
        cout<<ans[i]<<endl;
    }

}