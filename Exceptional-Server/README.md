# Exceptional    Server

Your    friend    set    up    a    small    computational    server    that    performs complex    calculations.    
It    has    a    function    that    takes **2** large    numbers    as    its    input    and    returns    a    numeric    result.    Unfortunately,    there are    various    exceptions    that    may    occur    during    execution.
Complete    the    code    in    your    editor    so    that    it    prints    appropriate    error    messages,    should    anything    go    wrong.
The    expected    behavior    is    defined    as    follows:
- If    the    compute    function    runs    fine    with    the    given    arguments,    then    print    the    result    of    the    function    call.
- If    it    fails    to    allocate    the    memory    that    it    needs,    print    Not    enough    memory.
- If    any    other    standard    C++    exception    occurs,    print    Exception:    S    where         is    the    exception's    error message.
-If    any    non-standard    exception    occurs,    print    Other    Exception.

**Input    Format**

The    first    line    contains    an    integer,***T*** ,    the    number    of    test    cases.    
Each    of    the ***T***  subsequent    lines    describes    a    test    case    as **2**         space-separated    integers, ***A*** and ***B***,    respectively.

**Constraints**

- **1 <= *T* <= 10<sup>3</sup>**
- **0 <= *A,B* <= 2<sup>60</sup>**

**Output    Format**

For    each    test    case,    print    a    single    line    containing    whichever    message    described    in    the    Problem    Statement above    is    appropriate.    After    all    messages    have    been    printed,    the    locked    stub    code    in    your    editor    prints    the
server    load.

**Sample    Input**

```
2
-8    
1435434255433    
```
**Sample    Output**

```
Exception:    A    is    negative
Not    enough    memory
2
```
**Explanation**

See    the    implementation    of    the    _compute_    function.    
2 is    the    server    load.