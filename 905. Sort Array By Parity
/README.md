```
Environment: gcc version 7.4.0
Date: 2019/08/28
Time complexity: O(n)
```

### 想法：

建立兩個 vector 分別存取奇、偶數，並最後在一起連接即可

但更好應該是由頭跟尾一同判斷，並使用 swap 對調位置

如下：

```C++
class Solution {
    public:
        vector sortArrayByParity(vector& A) {

        int n = A.size();
        int j = 0;
        for(int i = 0; i < n; i++){
            // j keeps track of first odd value index, initially 0
            if(A[i] % 2 == 0 && A[j] % 2 != 0){
                swap(A[i], A[j]);
                //  increment j by 1 index after swapping
                j = j+1;
                }
            else if(A[i] % 2 == 0 && A[j] % 2 == 0){
                // keep incrementing j until element at j is not an odd
                j = i+1;
            }
            
        }
        return A;
        }
};
```