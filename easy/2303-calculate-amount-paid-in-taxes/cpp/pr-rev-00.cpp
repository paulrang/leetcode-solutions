class Solution {public:double calculateTax(vector<vector<int>>& brackets, int income) {double t=0;int c=0,p=0;for(const auto& b:brackets){c=b[0];t+=(min(c,income)-p)*b[1]/100.0;p=c;if(income<p){break;}}return t;}};