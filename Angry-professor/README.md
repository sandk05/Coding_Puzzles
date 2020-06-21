# Angry	Professor

A	Discrete	Mathematics	professor	has	a	class	of	**_N_** students.	Frustrated	with	their	lack	of	discipline,	he
decides	to	cancel	class	if	fewer	than	**_K_** 	students	are	present	when	class	starts.

Given	the	arrival	time	of	each	student,	determine	if	the	class	is	cancelled.

**Input	Format**
The	first	line	of	input	contains	 **_T_**,	the	number	of	test	cases.

Each	test	case	consists	of	two	lines.	The	first	line	has	two	space-separated	integers,	 **_N_**(students in	the	class)
and	**_K_** 	(the	cancellation	threshold).	The	second	line	contains	 **_N_** space-separated	integers	( **a<sub>_1_</sub>, a<sub>_2_</sub>,...,a<sub>_N_</sub>**) describing	the	arrival	times	for	each	student.

**Note:** 	Non-positive	arrival	times	( **a<sub>_i_</sub> <=0**)	indicate	the	student	arrived	early	or	on	time;	positive	arrival
times	( **a<sub>_i_</sub> >0**)	indicate	the	student	arrived	 **a<sub>_i_</sub>**	minutes	late.

**Constraints**
- **1 <= _T_ <= 10**
- **1 <= _N_ <= 10**
- **1 <= _K_ <= _N_**
- **-100 <= a<sub>_i_</sub> <= 100, _where_ _i_ element of [1,N]**

**Output	Format**
For	each	test	case,	print	the	word	**YES**	if	the	class	is	cancelled	or	**NO**	if	it	is	not.

**Note**
If	a	student	arrives	exactly	on	time	 **a<sub>_i_</sub> =0**,	the	student	is	considered	to	have	entered	before	the	class
started.

**Sample	Input**
```
2
4 3	
-1 -3 4 2
4 2	
0 -1 2 1
```
	
**Sample	Output**
```
YES
NO
```
**Explanation**

For	the	first	test	case, **_K_=3**.	The	professor	wants	at	least **3** students	in	attendance,	but	only **2** have
arrived	on	time	( **-3**	and	**-1** ).	Thus,	the	class	is	cancelled.
For	the	second	test	case, **_K_=2** .	The	professor	wants	at	least **2** students	in	attendance,	and	there	are	**2**
who	have	arrived	on	time	( **0**	and	**-1** ).	Thus,	the	class	is	_not_ cancelled.



