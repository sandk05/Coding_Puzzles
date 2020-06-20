# Cats and a Mouse

Two cats and a mouse are at various positions on a line. You will be given their starting positions. Your
task is to determine which cat will reach the mouse first, assuming the mouse doesn't move and the cats
travel at equal speed. If the cats arrive at the same time, the mouse will be allowed to move and it will
escape while they fight.

You are given ***q*** queries in the form of ***x***,***y***, and ***z ***representing the respective positions for cats ***A*** and ***B***, and for mouse ***C***. Complete the function to return the appropriate answer to each query, which will be printed on a new line.

- If cat ***A*** catches the mouse first, print Cat A.

- If cat ***B*** catches the mouse first, print Cat B.

- If both cats reach the mouse at the same time, print Mouse C as the two cats fight and mouse escapes.

**Input Format**

The first line contains a single integer,___q___ , denoting the number of queries.
Each of the ***q***  subsequent lines contains three space-separated integers describing the respective values of ***x*** (cat ***A***'s location),***y*** (cat ***B***'s location), and ***Z***(mouse ***C***'s location).

**Constraints**

- **1<= *q* <=100**
- **1 <= *x,y,z* <= 100**

**Output Format**

For each query, return Cat A if cat **A** catches the mouse first, Cat B if cat **B** catches the mouse first, or Mouse C if the mouse escapes.

**Sample Input 0**

```
2
1 2 3
1 3 2
```
**Sample Output 0**

```
Cat B
Mouse C
```
**Explanation 0**

Query 0: The positions of the cats and mouse are shown below:

![](images/Image1.png)

Cat ***B*** will catch the mouse first, so we print Cat B on a new line.

Query 1: In this query, cats ***A*** and ***B*** reach mouse ***C*** at the exact same time:

![](images/Image2.png)


Because the mouse escapes, we print Mouse C on a new line.

