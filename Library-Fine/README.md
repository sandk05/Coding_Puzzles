# Library Fine

Your local library needs your help! Given the expected and actual return dates for a library book, create a program that calculates the fine (if any). The fee structure is as follows:
1. If the book is returned on or before the expected return date, no fine will be charged (i.e.: ***fine* = 0**).
2. If the book is returned after the expected return _day_ but still within the same calendar month and year as the expected return date, ***fine* = 15 Hackos x (the number of days late)**.
3. If the book is returned after the expected return _month_ but still within the same calendar year as the expected return date, the ***fine* = 500 Hackos x (the number of months late)**.
4. If the book is returned after the calendar _year_ in which it was expected, there is a fixed fine of **10000 Hackos**.

Charges are based only on the least precise measure of lateness. For example, whether a book is due January 1, 2017 or December 31, 2017, if it is returned January 1, 2018, that is a year late and the fine would be **10,000 Hackos**.

**Function Description**

Complete the _libraryFine_ function in the editor below. It must return an integer representing the fine due.

libraryFine has the following parameter(s):
- _d1, m1, y1_ : returned date day, month and year
- _d2, m2, y2_ : due date day, month and year

**Input Format**

The first line contains **3** space-separated integers ***d1, m1, y1*** denoting the respective ***day , month***, and ***year*** on which the book was returned.
The second line contains space-separated integers ***d2, m2, y2*** denoting the respective ***day , month***, and ***year*** on which the book was due to be returned.

**Constraints**

- **1 <= *d1, d2* <=31**
- **1 <= *m1,m2* <=12**
- **1 <= *y1, y2* <= 3000**
- ***it is guaranteed that the dates will be valid Gregorian calendar dates***

**Output Format**

Print a single integer denoting the library fine for the book received as input.

**Sample Input**

```
9 6 2015
6 6 2015
```

**Sample Output**

```
45
```

**Explanation**

Given the following dates:

Returned: ***d*1 = 9, *m*1 = 6, *y*1 = 2015**
Due: ***d*2 = 6, *m*1 = 6, *y*1 = 2015**
Because ***y2 = y1*** , we know it is less than a year late.
Because **m2 = m1**, we know it's less than a month late.
Because **d2 < d1**, we know that it was returned late (but still within the same month and year).
Per the library's fee structure, we know that our fine will be **15 Hackos x (# days late)**. We then print the result of **15 x (*d*1 - *d*2) = 15 x (9 - 6) = 45** as our output.

