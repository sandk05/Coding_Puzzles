# A	Very Big Sum

You	are	given	an	array	of	integers	of	size	**_N_** .	You	need	to	print	the	sum	of	the	elements	in	the	array,
keeping	in	mind	that	some	of	those	integers	may	be	quite	large.

**Input	Format**
The	first	line	of	the	input	consists	of	an	integer	**_N_** . The  next line  contains	 **_N_** space-separated	integers
contained	in	the	array.

**Output	Format**
Print	a	single	value	equal	to	the	sum	of	the	elements	in	the	array.

**Constraints**
- **1 <= _N_ <= 10**
- **0 <= _A_[_i_] <= 10<sup>10</sup>**

**Sample	Input**
```
5
1000000001	1000000002	1000000003	1000000004
```

**Output**
```
5000000015
```

**Note:**
The	range	of	the	32-bit	integer	is	**(-2 <sup>31</sup>) _to_  ( 2<sup>31</sup> -1) _or_ [-2147483648, 2147483647]** .
When	we	add	several	integer	values,	the	resulting	sum	might	exceed	the	above	range.	You	might	need	to
use	long	long	int	in	C/C++	or	long	data	type	in	Java	to	store	such	sums.


