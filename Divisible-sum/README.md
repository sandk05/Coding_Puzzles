# Divisible Sum Pairs

You are given an array of ***n*** integers,***a<sub>0</sub>,a<sub>1</sub>,...,a<sub>n-1</sub>***, and a positive integer,***k***. Find and print the
number of **(*i,j*)** pairs where ***i < j*** and ***a<sub>i</sub> + a<sub>j</sub>*** is divisible by ***k***.

**Input Format**

The first line contains **2** space-separated integers, ***n*** and ***k***, respectively.
The second line contains ***n*** space-separated integers describing the respective values of ***a<sub>0</sub>,a<sub>1</sub>,...,a<sub>n-1</sub>***.

**Constraints**

- **2 <= *n* <= 100**

- **1 <= *k* <= 100**

- **1 <= *a<sub>i</sub>* <= 100**

  

**Output Format**

Print the number of (***i, j***)pairs where ***i < j*** and ***a<sub>i</sub>*** + ***a<sub>j</sub>*** is evenly divisible by ***k***.
**Sample Input**

```
6 3
1 3 2 6 1 2
```
**Sample Output**

```
5
```
**Explanation**
Here are the valid pairs:

- **(0,2) &rarr; *a<sub>0</sub> + a<sub>2</sub>* = 1 + 2 = 3** 
- **(0,5) &rarr; *a<sub>0</sub> + a<sub>5</sub>* = 1 + 2 = 3**
- **(1,3) &rarr; *a<sub>1</sub> + a<sub>3</sub>* = 3 + 6 = 9**
- **(2,4) &rarr; *a<sub>1</sub> + a<sub>3</sub>* = 2 + 1 = 3** 
- **(4,5) &rarr; *a<sub>4</sub> + a<sub>5</sub>* = 1 + 2 = 3**   