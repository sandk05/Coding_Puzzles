# Birthday Cake
# Candles

You are in-charge of the cake for your niece's birthday and have decided the cake will have one candle for
each year of her total age. When she blows out the candles, she’ll only be able to blow out the tallest
ones.

For example, if your niece is turning **4** years old, and the cake will have **4** candles of height **3, 2, 1, 3,** she
will be able to blow out **2** candles successfully, since the tallest candle is of height and there are **2**such
candles.

Complete the function Given the height of each individual candle, find and print the number of candles
she can successfully blow out.

**Input Format**

The first line contains a single integer, ***n***, denoting the number of candles on the cake.
The second line contains ***n*** space-separated integers, where each integer ***1***describes the height of candle
***1***.

**Constraints**
-  **1 <= *n* <= 10<sup>5</sup>**
- **1 <= *height<sub>i</sub>* <= 10<sup>7</sup>**
 
**Output Format**

Print the number of candles the can be blown out on a new line.

**Sample Input 0**

```
4
3 2 1 3
```
**Sample Output 0**

```
2
```
**Explanation 0**

We have one candle of height **1**, one candle of height **2**, and two candles of height **3**. Your niece only
blows out the tallest candles, meaning the candles where ***height* = 3**. Because there are  **2** such candles,
we print **2** on a new line.


