# Counting	Valleys

Gary	is	an	avid	hiker.	He	tracks	his	hikes	meticulously,	paying	close	attention	to	small	details	like topography.	During	his	last	hike,	he	took	exactly	***n*** 	steps.	For	every	step	he	took,	he	noted	if	it	was	an	*uphill*
or	a	*downhill*	step.	Gary's	hikes	start	and	end	at	sea	level.	We	define	the	following	terms:

- A	_mountain_	is	a	non-empty	sequence	of	consecutive	steps	above	sea	level,	starting	with	a	step	up	from sea	level	and	ending	with	a	step	down	to	sea	level.
 
- A	_valley_	is	a	non-empty	sequence	of	consecutive	steps	below	sea	level,	starting	with	a	step	down	from sea	level	and	ending	with	a	step	up	to	sea	level.
 

Given	Gary's	sequence	of	up	and	down	steps	during	his	last hike,	find	and	print	the	number	of	*valleys*	he  walked	through.

**Input	Format**
The	first	line	contains	an	integer, ***n***,	denoting	the	number	of	steps	in	Gary's	hike.	
The	second	line	contains	a	single	string	of	***n*** 	characters.	Each	character	is *element of* **{*U*,*D*}** (where	_U_	indicates	a  step	up	and	_D_	indicates	a	step	down), and	the	***i<sup>th</sup>*** 	character	in	the	string	describes	Gary's	***i<sup>th</sup>*** 	step	during	the hike.

**Constraints**
- **2 <= *N* <= 10<sup>6</sup>**

**Output	Format**
Print	a	single	integer	denoting	the	number	of	valleys	Gary	walked	through	during	his	hike.
**Sample	Input**

```
8
UDDDUDUU
```

**Sample	Output**
```
1
```
**Explanation**
If	we	represent	_	as	sea	level,	a	step	up	as	/,	and	a	step	down	as	\,	Gary's	hike	can	be	drawn	as:
```
_/\		 _			
  \	/
	\/\/
```
It's	clear	that	there	is	only	one	valley	there,	so	we	print	 **1**	on	a	new	line.
