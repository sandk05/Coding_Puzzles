# Sock Merchant

John works at a clothing store. He has a large pile of socks that he must pair them by color for sale. 

You will be given an array of integers representing the color of each sock. Determine how many pairs of socks with matching colors there are.

John works at a clothing store and he's going through a pile of socks to find the number of matching pairs. More specifically, he has a pile of ***n*** loose socks where each sock ***i*** is labeled with an integer, ***c<sub>i</sub>***, denoting its color. He wants to sell as many socks as possible, but his customers will only buy them in matching pairs. Two socks, ***i*** and ***j***, are a single matching pair if they have the same color (***c<sub>i</sub> = c<sub>j</sub>*** ).

Given ***n*** and the color of each sock, how many pairs of socks can John sell?

**Input Format**

The first line contains an integer ***n***, the number of socks.
The second line contains ***n*** space-separated integers describing the colors ***c<sub>i</sub>*** of the socks in the pile.

**Constraints**

- **1 <= *n* <= 100**
- **1 <= *c<sub>i</sub>  <= 100** where **0 <= *i* < *n***

**Output Format**

Print the total number of *matching pairs* of socks that John can sell.

**Sample Input**

```
9
10 20 20 10 10 30 50 10 20
```
**Sample Output**

```
3
```
**Explanation**

#####                                                       ![](images\image.png)

John can match three pairs of socks.