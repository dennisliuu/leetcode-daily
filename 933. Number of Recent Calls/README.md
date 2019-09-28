```
Environment: gcc version 7.4.0
Date: 2019/9/28
Time complexity: O(n)
```
### 想法：

一開始怎麼看都看不懂的題目，google 了好幾個人的解法，慢慢才看懂

題目要的是最近這 3000ms 中所發生 ping 的次數

假設總共有這麼多的 ping

`ping -> ping -> ping -> ping -> ping`

時間為：

`null, 1, 101, 3001, 3002`

所以一開始先回傳 null

再回傳 1 次 ping（1 秒）

再回傳 2 次 ping（100 秒）

再回傳 3 次 ping（3001 秒）

此時當發生第四次的 ping 時，與第一次的時間已經差到 3001 秒了

因此第一次的就不用在加入計算了，因此回傳 3 次 ping

而這題可以看到一堆使用 queue 的解法，當 3000ms 內，將資料加入 queue

當超過 3000ms，就將最久之前的紀錄刪除

### 技術筆記
