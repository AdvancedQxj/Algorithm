//耗时耗内存
// class Solution {
// public:
//     string countAndSay(int n) {
//         if (n==1){
//             return "1";
//         }
//         else{
//             char a;
//             string b = "";
//             string ans = "1";
//             int count = 0;
//             for (int i=1; i<n; i++){
//                 a = ans[0];
//                 for (int j=0; j<ans.size(); j++){
//                     if (a==ans[j]){
//                         count++;
//                     }
//                     else{
//                         b = b + to_string(count) + a;
//                         a = ans[j];
//                         count = 1;
//                     }
//                 }
//                 ans = b + to_string(count) + a;
//                 count = 0;
//                 b = "";
//             }
//             return ans;
//         }
//     }
// };

//与第一种差别在 else 下第一行
//为什么 += 和 = +效率差别这么大
// 上述问题中，str =str+ "a"加的运算产生的是一个新的对象，再把结果返回，而str += "a" 涉及到的应该是对象的引用，
// 操作之后直接返回引用，避免了产生新的对象。因此，两者的性能有一定的差距。问题2中也是这个问题，一个会产生新的对象，
// 一个运用引用，效率不言而喻了。
// 另外还有两个问题，一个是字符串直接初始化和赋值初始化的区别，还有一个是a++和++a的区别（a不一定为基本类型）。
// 其实道理都一样，引用书上的话“1.在内建数据类型时（即自增表示式的结果没有被使用，只是简单的用于递增操作），
// 这时这两个表达式的效率是相同的。 2.在自定义数据类型时（主要指有类的情况），由于++a可以返回对象的引用，
// 而a++一定要是返回对象的值。可想而知引用的开销当然比直接对对象进行操作要效率高很多，节省很多开销。”
class Solution {
public:
    string countAndSay(int n) {
        if (n==1){
            return "1";
        }
        else{
            char a;
            string b = "";
            string ans = "1";
            int count = 0;
            for (int i=1; i<n; i++){
                a = ans[0];
                for (int j=0; j<ans.size(); j++){
                    if (a==ans[j]){
                        count++;
                    }
                    else{
                        b += to_string(count) + a;
                        a = ans[j];
                        count = 1;
                    }
                }
                ans = b + to_string(count) + a;
                count = 0;
                b = "";
            }
            return ans;
        }
    }
};