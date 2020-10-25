class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> num; 
        for(int i=0; i<tokens.size(); ++i) {
            if(tokens[i]=="+" || tokens[i]=="-" || tokens[i]=="*" || tokens[i]=="/") {
                int num2 = num.top();
                num.pop();
                int num1 = num.top();
                num.pop();
                if(tokens[i]=="+") num.push(num1+num2);
                if(tokens[i]=="-") num.push(num1-num2);
                if(tokens[i]=="*") num.push(num1*num2);
                if(tokens[i]=="/") num.push(num1/num2);
            }else {
                num.push(stoi(tokens[i]));
            }
        }
        return num.top();
    }
};