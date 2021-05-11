class Solution {
public:
    int maxScore(vector<int>& card, int k) {
        
        int n = card.size(), len = n - k, cur_sum = 0, sum = 0, i;
        for(i=0; i<len; i++)
            cur_sum += card[i];
        for(int i: card)
            sum += i;
        int ans = sum - cur_sum;
        for(i=len; i<n; i++)
        {
            cur_sum -= card[i-len];
            cur_sum += card[i];
            ans = max(ans, sum - cur_sum);
            
        }
        return ans;
    }
};
