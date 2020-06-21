# Pangrams

Roy wanted to increase his typing speed for programming contests. His friend suggested that he type the sentence "The quick brown fox jumps over the lazy dog" repeatedly. This sentence is known as a *pangram* because it contains every letter of the alphabet.
After typing the sentence several times, Roy became bored with it so he started to look for other pangrams.
Given a sentence, determine whether it is a pangram.

**Input Format**
Input consists of a string ***s***.

**Constraints**
Length of ***s*** can be at most **10<sup>3</sup> ( 1 <= |*s*| <= 10<sup>3</sup>)**  and it may contain spaces, lower case and upper case letters. Lower-case and upper-case instances of a letter are considered the same.

**Output Format**
Output a line containing *pangram* if  ***s*** is a pangram, otherwise output *not pangram*.

**Sample Input
Input #1**

```
We promptly judged antique ivory buckles for the next prize
```
**Input #2**

```
We promptly judged antique ivory buckles for the prize
```
**Sample Output
Output #1**

```
pangram
```
**Output #**2

```
not pangram
```
**Explanation**
In the first test case, the answer is *pangram* because the sentence contains all the letters of the English alphabet. The second sentence does not.