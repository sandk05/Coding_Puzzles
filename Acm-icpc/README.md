# ACM ICPC Team

There are a number of people who will be attending ACM-ICPC World Finals. Each of them may be well
versed in a number of topics. Given a list of topics known by each attendee, you must determine the
maximum number of topics a 2-person team can know. Also find out how many ways a team can be
formed to know that many topics. Lists will be in the form of bit strings, where each string represents an attendee and each position in that string represents a field of knowledge, _1_ if its a known field or _0_ if not.

For example, given three attendees' data as follows:
```
10101
11110
00010
```

These are all possible teams that can be formed:
```
Members Subjects
(1,2) [1,2,3,4,5]
(1,3) [1,3,4,5]
(2,3) [1,2,3,4]
```

In this case, the first team will know all 5 subjects. They are the only team that can be created knowing
that many subjects.

**Input Format**

The first line contains two space-separated integers **_n_** and **_m_**, where **_n_** represents the number of attendees and **_m_** represents the number of topics.

Each of the next **_n_** lines contains a binary string of length **_m_**. If the **_i_**<sup>th</sup> line's **_j_**<sup>th</sup> character is 1, then the person knows the **_j_**<sup>th</sup>topic.

**Constraints**
- **2<=_n_<=500**
- **1<=_m_<=500**

**Output Format**

On the first line, print the maximum number of topics a 2-person team can know.
On the second line, print the number of ways to form a 2-person team that knows the maximum number
of topics.

**Sample Input**

```
4 5
10101
11100
11010
00101
```

**Sample Output**

```
5
2
```
**Explanation**

Calculating topics known for all permutations of 2 attendees we get:

**(1,2) -> 4**
**(1,3) -> 5**
**(1,4) -> 3**
**(2,3) -> 4**
**(2,4) -> 4**
**(3,4) -> 5**

The 2 teams (1, 3) and (3, 4) know all 5 topics which is maximal.


