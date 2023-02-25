class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> st;
        int n=asteroids.size();
        
        for(int i=0;i<n;i++){
        if(asteroids[i]>0 || st.empty()){
            st.push(asteroids[i]);
       }
            
            else{
              while(true){
                 if(st.top()<0){
                     st.push(asteroids[i]);
                     break;
                 }else if(st.top()== (-asteroids[i])){
                     st.pop();
                     break;
                 }else if(st.top()> (-asteroids[i])){    
                     break;
                 }
                  else{
                      st.pop();
                      if(st.empty()==true){
                      st.push(asteroids[i]);   
                      break;     
                      }
                 }
            }
            
        }
      
        }
        vector<int> res;
        while(!st.empty())
        {
            res.push_back(st.top());
            st.pop();
        }
        reverse(res.begin(),res.end());
        return res;
    }
};
