# Breaking the Records

Maria plays ***n*** games of college basketball in a season. Because she wants to go pro, she tracks her points
scored per game sequentially in an array defined as **_score_ = [_s<sub>0</sub>,s<sub>1</sub>,...,s<sub>n-1</sub>_]**. After each game ***i***, she
checks to see if score ***s<sub>i</sub>*** breaks her record for most or least points scored so far during that season.

Given Maria's array of ***scores*** for a season of ***n*** games, find and print the number of times she breaks her
record for most and least points scored during the season.

**Note:** Assume her records for most and least points at the start of the season are the number of points
scored during the first game of the season.

**Input Format**

The first line contains an integer denoting ***n*** (the number of games).
The second line contains ***n*** space-separated integers describing the respective values of ***s<sub>0</sub>,s<sub>1</sub>,...,s<sub>n-1</sub>***.

**Constraints**
- **1 <= *n* <= 1000**
- **0 <= *s<sub>i</sub>* <= 10<sup>8</sup>**

**Output Format**

Print two space-seperated integers describing the respective numbers of times her best (highest) score
increased and her worst (lowest) score decreased.

**Sample Input 0**

```
9
10 5 20 20 4 5 2 25 1
```
**Sample Output 0**

```
2 4
```
**Explanation 0**

The diagram below depicts the number of times Maria broke her best and worst records throughout the
season:
![](images/Image1.png)
She broke her best record twice (after games **2** and **7** ) and her worst record four times (after games **1, 4, 6** and **8** ), so we print **2 4** as our answer. Note that she *did not* break her record for best score during game **3** , as her score during that game was _not_ strictly greater than her best record at the time.

**Sample Input 1**

```
10
3 4 21 36 10 28 35 5 24 42
```

**Sample Output 1**

```
4 0
```
**Explanation 1**

The diagram below depicts the number of times Maria broke her best and worst records throughout the
season:
![](images/Image2.png)

She broke her best record four times (after games **1**, **2**, **3**, and **9**) and her worst record zero times (no
score during the season was lower than the one she earned during her first game), so we print **4 0** as our
answer.


