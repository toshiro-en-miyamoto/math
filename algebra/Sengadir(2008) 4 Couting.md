<style>
  .definition, .proposition {
    padding: 1rem 1rem 0.2rem 1rem;
    border-style: solid;
    border-color: lightgrey;
    margin-bottom: 2rem;
  }
</style>

# Counting Principles

- T. Sengadir. &sect;4 Counting Principles, *Discrete Mathematics and Combinatorics*. Pearson India. 2008

## 4.1. A Fundamental Counting Principle

<article class="proposition">

**Fundamental Counting Principle**:
Consider an activity consisting of $k$ independent subtasks. Assume that

- $task_1$ can be performed in $m_1$ ways
- $task_2$ can be performed in $m_2$ ways
- &vellip;
- $task_k$ can be performed in $m_m$ ways

Then this activity can be completed in $m_1 \times m_2 \times \cdots \times m_k$ different number of ways.

</article>

**Example 4.2**:
Find the number of all possible six-digit numbers that can be formed by using 2, 6, 8 and 9.

- the unit place can be filled by any of the four given digits
- the tenth place can be filled by any of the four given digits
- &hellip; and so on &hellip;
- up to the hundred-thousandth place

Hence, the required answer is $4^6$.

**Example 4.7**:
Show that the number of ways of placing $n$ distinct objects into $m$ box is $m^n$.

- The first object goes into any one to the $m$ boxes. Clearly, there are $m$ ways of doing this.
- Similarly, the second object can also be placed in any of the $m$ boxes and so on.

Hence, the required answer is $m^n$.

**Note**:
If we think of the place as boxes and the digits as objects, the answer is $6^4$. What's wrong?

<article class="proposition">

**Proposition 4.1**:
Let $A$ and $B$ be finite sets with $|A|=n$ and $|B|=m$. Then the number of all function $f:A \to B$ is $m^n$.

Proof:
Let $A=\{x_1, x_2, \cdots, x_n\}$. Then

- $f(x_1)$ can be defined in $m$ possible ways
- $f(x_2)$ can be defined in $m$ possible ways
- &vellip;
- $f(x_n)$ can be defined in $m$ possible ways

Thus, the number of all possible functions is $m^n$.

**Definition (function)**:
A function, $f:A \to B$, is a rule that associates each element $x$ in $A$ with an element in $B$, denoted $f(x)$. It demands that

- $x_1 = x_2$ implies $f(x_1) = f(x_2)$
- for all $x \in A$ there exists $f(x)$ such that $f(x) \in B$

Note that

- even if $f(x_1) = f(x_2)$, it is not necessarily that $x_1 = x_2$
- there exists $y \in B$ such that $y \notin \{f(x):x \in A\} = \mathcal{Range}(f)$

</article>

**Functional solution to example 4.7**:
Consider one specific distribution of the $n$ objects into $m$ distinct boxes.

- Think of a relation from objects to boxes. Because each object is placed in one of boxes, a function $f:objects \to boxes$ can be defined.
- Think of a relation from boxes to objects. Some boxes can be empty, meaning that some boxes are not related to objects. Hence, the relation cannot be a function.

Thus, the required answer is the number of all possible $f:objects \to boxes = m^n$.

**Functional solution to example 4.2**:
Consider a six-digit number that can be formed by using 2, 6, 8 and 9.

- Think of a relation from digits to places. Some digits may not appear in some number (e.g., 226688), meaning that some digits are not related to places. Hence, the relation cannot be a function.
- Think of a relation from places to digits. Because each place is filled with one of the digits, a function $f:places \to digit$ can be define.

Thus, the required answer is the number of all possible $f:places \to digits = 4^6$.

## 4.1.1. Arrangements

In how many ways can three objects be arranged in some order? Let use call there objects as $\{a, b, c\}$. We can arrange them as $\{abc, acb, bac, bca, cab, cba\}$. These are all the possible ways and hence three objects can be arranged in six different ways.

<article class="proposition">

**Proposition 4.2**:
$r$ objects can be arranged in $r!$ ways.

Imagine an array of $r$ boxes. Consider filling each of the $r$ boxes as a subtask.

- We can place any of the $r$ objects in the first box. Thus, the number of ways of completing this first task is $r$.
- Now we are left with $r-1$ objects. So the second box can be filled in  $r-1$ ways.

Thus, by using the counting principle of the previous section, the number of different arrangements of $r$ things is $r \times (r-1) \times \cdots \times 2 \times 1 = r!$.

</article>

We consider problems involving special boxes into which only certain special objects can be placed. Consider a row of $r$ boxes. Assume that

- only $m_1$ of the objects can be placed in the first box, after which
- only $m_2$ of the remaining objects can be placed in the second box, and lastly
- only $m_r$ of the remaining objects can be placed in the $r$ th box.

The number of arrangements is $m_1 \times m_2 \times \cdots \times m_r$.

## 4.2. Permutations and Combinations

<article class="definition">

**Definition (permutation)**:
Let there be $n$ objects. The number of ways of *choosing and arranging* objects out of the $n$ objects is called the permutation of $r$ objects out of $n$, denoted $^{n}P_r$.

**Proposition 4.3**:
$$
^{n}P_r = n(n-1)(n-2) \cdots (n-r+1) = \frac{n!}{(n-r)!}
$$

Consider an array of $r$ boxes. We can place

- any of the $n$ objects in the first box
- any of the remaining $n-1$ objects in the second box
- &vellip;
- any of the remaining $n-r+1$ objects in the $r$ th box

Hence, the number of ways this can achieved is $\displaystyle \frac{n!}{(n-r)!}$.

</article>

**Example 4.18**:
Consider five-letter words that can be formed using nine letters A, B, &hellip;, I without repetition? How many of them contain A and I?

- First, we shall allot two places out of five to A and I. This can be done in $^{5}P_2$ ways.
- Next, we shall fill the remaining three places with seven letters B, C, &hellip;, H without repetition. This can be done in $^{7}P_3$.

Hence, the required answer is $^{5}P_2 \times ^{7}P_3$.

**Example 4.19**:

- In how many ways can five letters be chosen from nine letters A, B, &hellip;, I?
- How many of them contain A and I?

In Example 4.18, the order in which the letters appear is important. But in Example 4.19, letters are just selected without any consideration for the order. We need the idea of *combination*.

<article class="definition">

**Definition (combination)**:
Let there be $n$ objects. The number of ways of choosing $r$ objects out of $n$ objects is called the combination of $r$ objects out of $n$ objects, denoted $^{n}C_r$.

**Proposition 4.4**:

Choosing and arranging $r$ objects out of $n$ objects consists of two subtasks:

- choosing $r$ objects out of $n$ objects &mdash; in $^{n}C_r$ ways
- arranging $r$ objects &mdash; in $r!$ ways

Thus,
$^{n}P_r = ^{n}C_r \times r!$, therefore

$$
^{n}C_r = \frac{^{n}P_r }{r!}
$$

</article>

**Example 4.19**:

- In how many ways can five letters be chosen from nine letters A, B, &hellip;, I? It is the number of ways of choosing five out of nine &mdash; $^{9}C_5$.
- How many of them contain A and I? If our choice must include both A and I, then we need to choose only three out of seven &mdash; $^{7}C_3$.
