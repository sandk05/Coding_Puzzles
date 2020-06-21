# Birthday Chocolate

Lily has a chocolate bar with numbered squares. She wants to share it with Ron for his birthday. She decides to share a contiguous segment of the bar selected such that the sum of the integers on the squares is equal to a given value. The length of the segment will match Ron's birth month. The sum of the segments will match his birth day. You must determine how many ways she can divide the chocolate.
Consider the chocolate bar as an array of squares, ***s* = [ 1, 2, 1, 3, 2]**. She wants to find segments summing to Ron's birth day,***d* = 3** with a length equaling his birth month, ***m* = 2**. In this case, there are two segments meeting her criteria.

​								<img src="images\Image1.PNG" style="zoom:80%;" />

**Input Format**
The first line contains an integer ***n***, the number of squares in the chocolate bar.
The second line contains ***n*** space-separated integers ***s*[*i*]**, the numbers on the chocolate squares where ***0 <= i < n***.
The third line contains two space-separated integers, ***d*** and ***m***, Ron's birth day and his birth month.
**Constraints**

- **1 <= *n* <= 100**
- **1 <= *s*[*i*] <= 5**, where (**0 <= *i* < *n***)
- **1 <= *d* < 31**
- **1 <= *m* <= 12**

**Output Format**
Print an integer denoting the total number of ways that Lily can portion her chocolate bar to share with Ron.
**Sample Input 0**

```
5
1 2 1 3 2
3 2
```

**Sample Output 0**

```
2
```

**Explanation 0**
Lily wants to give Ron ***m* = 2** squares summing to ***d* = 3**. The following two segments meet the criteria:

​                                         <img src="images\Image1.PNG" style="zoom:80%;" />

**Sample Input 1**
```
6 
1 1 1 1 1 1
3 2
```
**Sample Output 1**
```
0
```
**Explanation 1**
Lily only wants to give Ron ***m* = 2** consecutive squares of chocolate whose integers sum to ***d* = 3** . There are no possible pieces satisfying these constraints:

<img src="images\Image2.PNG" style="zoom:80%;" />

Thus, we print **0** as our answer.
**Sample Input 2**

```
1 
4
4 1
```
**Sample Output 2**

```
1
```
**Explanation 2**
Lily only wants to give Ron ***m* = 1**  square of chocolate with an integer value of ***d* = 4**. Because the only square of chocolate in the bar satisfies this constraint, we print **1** as our answer.