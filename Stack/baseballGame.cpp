class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> st;
        for(int i=0;i<operations.size();i++){
            if(operations[i]=="C"){
                st.pop();
            }
            else if(operations[i]=="D"){
                int last=st.top();
                st.push(2*last);
            }
            else if(operations[i]=="+"){
                int last=st.top();
                st.pop();
                int slast=st.top();
                st.push(last);
                st.push(last+slast);
            }
            else{
                int val=stoi(operations[i]);
                st.push(val);
            }
        }
        int ans=0;
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        return ans;

    }
};