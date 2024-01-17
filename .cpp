/*
Complexity
Time complexity:
O(n)

Space complexity:
O(n)

*/
class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        
        unordered_map<int,int>mpp;
        for (int i=0;i<arr.size();i++){
            mpp[arr[i]]++;
        }
        unordered_set<int>st;
        for (auto &it:mpp){
            st.insert(it.second);
        }

        return (st.size()==mpp.size());
    }
};
/*
Approach 1:
Complexity
Time complexity:
O(nlogn)

Space complexity:
O(n)

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        
        vector<int>v;
        sort(arr.begin(),arr.end());

        for (int i=0;i<arr.size();i++){

            int cnt=1;
            while (i+1<arr.size() && arr[i]==arr[i+1]){
                cnt++;
                i++;
            }

            v.push_back(cnt);
        }
        sort (v.begin(), v.end());

        for (int i=0;i<v.size()-1;i++){
            if (v[i]==v[i+1]){
                return false;
            }
        }
        return true;
    }
};
*/
