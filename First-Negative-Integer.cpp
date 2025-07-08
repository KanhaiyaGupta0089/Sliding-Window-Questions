
#include <bits/stdc++.h>
using namespace std;




class Solution {
  public:
    vector<int> firstNegInt(vector<int>& arr, int k) {
        // write code here
        int s=0,e=0;
        vector<int>ans;
        queue<int>q;
        int n=arr.size();
        while(e<n){
            if(arr[e]<0)
            q.push(arr[e]);
            if(e-s+1==k){
                if(!q.empty())
                ans.push_back(q.front());
                else
                ans.push_back(0);
                if(arr[s]<0)
                q.pop();
                s++;
                
            }
            e++;
        }
        return ans;
    }
};



int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {

        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        string ks;
        getline(cin, ks);
        int k = stoi(ks);
        Solution ob;
        vector<int> ans = ob.firstNegInt(arr, k);
        for (auto it : ans) {
            cout << it << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}
