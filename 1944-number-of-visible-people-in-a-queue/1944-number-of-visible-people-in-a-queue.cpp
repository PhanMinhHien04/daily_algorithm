class Solution {
public:
    vector<int> canSeePersonsCount(vector<int>& heights) {
        stack<int>st;

        vector<int>ans;

        for(int i=heights.size()-1;i>=0;i--){
            int ele = heights[i];
            int cnt = 0;
            while(!st.empty()){
                int tp = st.top();
                if(ele > tp){
                    st.pop();
                    cnt++;
                }
                else{
                    break;
                }
            }
            if(!st.empty()){
                ans.push_back(cnt+1);
            }
            else{
                ans.push_back(cnt);
            }
            st.push(ele);
        }

        reverse(ans.begin(),ans.end());
        return ans;
    }
};