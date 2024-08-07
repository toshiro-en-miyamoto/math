<style>
  .indent, .definition, .proposition {
    padding: 1rem 1rem 0.2rem 1rem;
  }
  .definition, .proposition {
    border-style: solid;
    border-color: lightgrey;
    margin: 2rem 0 2rem 0;
  }
</style>

# Counting Principles

- T. Sengadir. &sect;4 Counting Principles, *Discrete Mathematics and Combinatorics*. Pearson India. 2008

## 4.1. A Fundamental Counting Principle

<section class="proposition">

**Fundamental Counting Principle**:
Consider an activity consisting of $k$ independent subtasks. Assume that

- $task_1$ can be performed in $m_1$ ways
- $task_2$ can be performed in $m_2$ ways
- &vellip;
- $task_k$ can be performed in $m_m$ ways

Then this activity can be completed in $m_1 \times m_2 \times \cdots \times m_k$ different number of ways.

</section>

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

<section class="proposition">

**Proposition 4.1**:
Let $A$ and $B$ be finite sets with $|A|=n$ and $|B|=m$. Then the number of all function $f:A \to B$ is $m^n$.

Proof:
Let $A=\{x_1, x_2, \cdots, x_n\}$. Then

- $f(x_1)$ can be defined in $m$ possible ways
- $f(x_2)$ can be defined in $m$ possible ways
- &vellip;
- $f(x_n)$ can be defined in $m$ possible ways

Thus, the number of all possible functions is $m^n$. &blk14;

**Definition (function)**:
A function, $f:A \to B$, is a rule that associates each element $x$ in $A$ with an element in $B$, denoted $f(x)$. It demands that

- $x_1 = x_2$ implies $f(x_1) = f(x_2)$
- for all $x \in A$ there exists $f(x)$ such that $f(x) \in B$

Note that

- even if $f(x_1) = f(x_2)$, it is not necessarily that $x_1 = x_2$
- there exists $y \in B$ such that $y \notin \{f(x):x \in A\} = \mathcal{Range}(f)$

</section>

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

<section class="proposition">

**Proposition 4.2**:
$r$ objects can be arranged in $r!$ ways.

Proof: Imagine an array of $r$ boxes. Consider filling each of the $r$ boxes as a subtask.

- We can place any of the $r$ objects in the first box. Thus, the number of ways of completing this first task is $r$.
- Now we are left with $r-1$ objects. So the second box can be filled in  $r-1$ ways.

Thus, by using the counting principle of the previous section, the number of different arrangements of $r$ things is $r \times (r-1) \times \cdots \times 2 \times 1 = r!$. &blk14;

</section>

We consider problems involving special boxes into which only certain special objects can be placed. Consider a row of $r$ boxes. Assume that

- only $m_1$ of the objects can be placed in the first box, after which
- only $m_2$ of the remaining objects can be placed in the second box, and lastly
- only $m_r$ of the remaining objects can be placed in the $r$ th box.

The number of arrangements is $m_1 \times m_2 \times \cdots \times m_r$.

## 4.2. Permutations and Combinations

<section class="definition">

**Definition (permutation)**:
Let there be $n$ objects. The number of ways of *choosing and arranging* objects out of the $n$ objects is called the permutation of $r$ objects out of $n$, denoted $^{n}P_r$.

**Proposition 4.3**:

$$^{n}P_r = n(n-1)(n-2) \cdots (n-r+1) = \frac{n!}{(n-r)!}$$

Proof: Consider an array of $r$ boxes. We can place

- any of the $n$ objects in the first box
- any of the remaining $n-1$ objects in the second box
- &vellip;
- any of the remaining $n-r+1$ objects in the $r$ th box

Hence, the number of ways this can achieved is $\displaystyle \frac{n!}{(n-r)!}$. &blk14;

</section>

**Example 4.18**:
Consider five-letter words that can be formed using nine letters A, B, &hellip;, I without repetition? How many of them contain A and I?

- First, we shall allot two places out of five to A and I. This can be done in $^{5}P_2$ ways.
- Next, we shall fill the remaining three places with seven letters B, C, &hellip;, H without repetition. This can be done in $^{7}P_3$.

Hence, the required answer is $^{5}P_2 \times ^{7}P_3$.

**Example 4.19**:

- In how many ways can five letters be chosen from nine letters A, B, &hellip;, I?
- How many of them contain A and I?

In Example 4.18, the order in which the letters appear is important. But in Example 4.19, letters are just selected without any consideration for the order. We need the idea of *combination*.

<section class="definition">

**Definition (combination)**:
Let there be $n$ objects. The number of ways of choosing $r$ objects out of $n$ objects is called the combination of $r$ objects out of $n$ objects, denoted $^{n}C_r$.

**Proposition 4.4**:

$$
^{n}C_r = \frac{^{n}P_r}{r!}
$$

Proof: Choosing and arranging $r$ objects out of $n$ objects consists of two subtasks:

- choosing $r$ objects out of $n$ objects &mdash; in $^{n}C_r$ ways
- arranging $r$ objects &mdash; in $r!$ ways

Thus, $^{n}P_r = ^{n}C_r \times r!$.
Therefore $^{n}C_r = ^{n}P_r  \div r!$. &blk14;

</section>

**Example 4.19**:

- In how many ways can five letters be chosen from nine letters A, B, &hellip;, I? It is the number of ways of choosing five out of nine &mdash; $^{9}C_5$.
- How many of them contain A and I? If our choice must include both A and I, then we need to choose only three out of seven &mdash; $^{7}C_3$.

## 4.2.2. Permutation of Identical Objects

Consider nine-digit numbers that are formed by two 4's, three 6's and four 8's, such as 446668888. How many distinct numbers can we have?

Method 1:

- Choose two places from two 4's out of the nine place &mdash; $^{9}C_2$.
- Choose three places for three 6's out of the remaining seven places &mdash; $^{7}C_3$.
- Choose four places for four 8's out of the remaining seven places &mdash; $^{4}C_4 = 1$.
- Hence, the answer is $\displaystyle \left(\frac{9 \times 8}{2 \times 1}\right) \left(\frac{7 \times 6 \times 5}{3 \times 2 \times 1}\right) = 1,260$ distinct numbers.

Method 2:

- Think of 4's, 6's and 8's as nine distinct objects: $4_1, 4_2, 6_1, 6_2, 6_3, 8_1, 8_2, 8_3, 8_4$. Then, the objects can be arranged in $^{9}P_9 = 9!$ ways.
- We must not distinguish two 4's, three 6's and four 8's. But among the arrangements, we counted the identical nine-digit numbers
  - $^{2}P_2 = 2!$ times for two 4's
  - $^{3}P_3 = 3!$ times for three 6's
  - $^{4}P_4 = 4!$ times for four 8's
- Hence, the answer is $\displaystyle \frac{9!}{2! \times 3! \times 4!} = 1,260$ distinct numbers.

As you can see the two methods yield the correct answer. The method 2 is based on the idea of *permutation of identical objects*.

<section class="proposition">

**Proposition 4.6**:
In a collection there are $m_1$ identical objects of type 1, $m_2$ objects of type 2 and so on, up to $m_k$ objects of type $k$. The number of permutations of this collection is

$$
\frac{(m_1 + m_2 + \cdots + m_k)!}{m_1! \times m_2! \times \cdots \times m_k!}
$$

</section>

**Example 4.33**:
A hotel has six single rooms, six double rooms, and four three-bed rooms (30 beds in total). In how many ways can 30 persons be accommodated in this hotel?

Using the method 1:

- For single rooms,
  - six persons out of 30 persons can be chosen and arranged in $^{30}P_6$ ways.
- For double rooms,
  - for the room #`1`, two persons out of `24` can be chosen in $^{24}C_2$ ways;
  - for the room #`2`, two out of `22` &mdash; in $^{22}C_2$ ways;
  - for the room #`3`, two out of `20` &mdash; in $^{20}C_2$ ways;
  - for the room #`4`, two out of `18` &mdash; in $^{18}C_2$ ways;
  - for the room #`5`, two out of `16` &mdash; in $^{16}C_2$ ways;
  - for the room #`6`, two out of `14` &mdash; in $^{14}C_2$ ways.
- For three-bed room,
  - for the room #`1`, three person out of `12` can be chosen in $^{12}C_3$ ways;
  - for the room #`2`, three out of `9` &mdash; in $^{9}C_3$ ways;
  - for the room #`3`, three out of `6` &mdash; in $^{6}C_3$ ways;
  - for the room #`4`, three out of `3` &mdash; in $^{3}C_3$ way.
- Thus, the required answer is

$$
\begin{aligned}
\text{answer } & =
\left(30 \cdot 29 \cdot 28 \cdot 27 \cdot 26 \cdot 25\right) \\
& \times
\left(\frac{24 \cdot 23}{2!}\right)
\left(\frac{22 \cdot 21}{2!}\right)
\left(\frac{20 \cdot 19}{2!}\right)
\left(\frac{18 \cdot 17}{2!}\right)
\left(\frac{16 \cdot 15}{2!}\right)
\left(\frac{14 \cdot 13}{2!}\right) \\
& \times
\left(\frac{12 \cdot 11 \cdot 10}{3!}\right)
\left(\frac{9 \cdot 8 \cdot 7}{3!}\right)
\left(\frac{6 \cdot 5 \cdot 4}{3!}\right)
\left(\frac{3 \cdot 2 \cdot 1}{3!}\right) \\
& =
\frac{30!}{2! \cdot 2! \cdot 2! \cdot 2! \cdot 2! \cdot 2! \cdot 3! \cdot 3! \cdot 3! \cdot 3!}
\end{aligned}
$$

Using the method 2:

- We shall denote rooms:
  - six single rooms $S_a, S_b, S_c, S_d, S_e, S_f$,
  - six double rooms $D_a, D_b, D_c, D_d, D_e, D_f$,
  - four three-bed rooms $T_a, T_b, T_c, T_d$.
- We shall denote beds:
  - $S_{a1}, S_{b1}, S_{c1}, S_{d1}, S_{e1}, S_{f1}$,
  - $D_{a1},D_{a2}, D_{b1},D_{b2}, D_{c1},D_{c2}, D_{d1},D_{d2}, D_{e1},D_{e2}, D_{f1},D_{f2}$,
  - $T_{a1},T_{a2},T_{a3}, T_{b1},T_{b2},T_{b3}, T_{c1},T_{c2},T_{c3}, T_{d1},T_{d2}, T_{d3},$
- The 30 beds can be arranged for 30 persons in 30! ways.
- For double rooms, the arrangements must exclude duplicated counts:
  - the beds $D_{a1}$ and $D_{a2}$ are in the room $D_a$, and these must not be distinguished;
  - for $D_a$, we counted the beds $^{2}P_2 = 2!$ times;
  - the same goes with $D_b, D_c, D_d, D_e, D_f$.;
  - thus, for double rooms, we counted $2! \cdot 2! \cdot 2! \cdot 2! \cdot 2! \cdot 2!$ times.
- For three-bed room:
  - the beds $T_{a1}, T_{a2}$ and $T_{a3}$ are in the room $T_a$, and these must not be distinguished;
  - for $T_a$, we counted the beds $^{3}P_3 = 3!$ times;
  - the same goes with $T_b, T_c, T_d$;
  - thus, for three-bed rooms we counted $3! \cdot 3! \cdot 3! \cdot 3!$ times.

Thus, the required answer is

$$
\frac{30!}{2! \cdot 2! \cdot 2! \cdot 2! \cdot 2! \cdot 2! \cdot 3! \cdot 3! \cdot 3! \cdot 3!}
$$

This is what you get by applying Proposition 4.6

$$
\frac{(m_1 + m_2 + \cdots + m_k)!}{m_1! \times m_2! \times \cdots \times m_k!}
$$

where

- six single rooms have distinct beds, hence
  - $m_1 = m_2 = m_3 = m_4 = m_5 = m_6 = 1$;
- a double room has two identical beds, hence
  - let $m_7$ be the number of beds in $D_a$, which leads to $m_7=2$, and
  - the same goes for $D_b, D_c, D_d, D_e, D_f$, thus
  - $m_7 = m_8 = m_9 = m_{10} = m_{11} = m_{12} =2$;
- a three-bed room has three identical beds, hence
  - let $m_{13} be the number of beds in $T_a$, which leads to $m_{13}=3$, and
  - the same goes for $T_b, T_c, T_d$, thus
  - $m_{13} = m_{14} = m{15} = m_{16} = 3$;

Thus, the required answer is

$$
\frac{(6 \cdot 1 + 6 \cdot 2 + 4 \cdot 3)!}{(6 \cdot 1!) \cdot (6 \cdot 2!) \cdot (4 \cdot 3!)} = \frac{30!}{2! \cdot 2! \cdot 2! \cdot 2! \cdot 2! \cdot 2! \cdot 3! \cdot 3! \cdot 3! \cdot 3!}
$$

## 4.3. Applications of Permutations and Combinations

<section class="proposition">

**Proposition 4.7**:
Let $A$ and $B$ be finite sets with $|A|=n$ and $|B|=m$, and $n \leq m$. The number of all one-to-one functions from $A$ to $B$ is $m(m-1)(m-2)\cdots(m-n+1)=^{m}P_n$.

Proof: Let $A=\{x_1, x_2,\cdots,x_n\}$.

- $f(x_1)$ can be defined in $m$ possible ways.
- $f(x_2)$ can be defined in $m-1$ possible ways because $f(x_2) \neq f(x_1)$ for a one-to-one function.
- &vellip;
- $f(x_n)$ can be defined in $m-n+1$ possible ways because $f(x_n)\neq \cdots \neq f(x_2)  \neq f(x_1)$ for a one-to-one function.

Thus, the number of all possible functions is $^{m}P_n$. &blk14;

</section>

**Proposition 4.8**:
The number of binary sequence with $p$ 1's and $q$ 0's is

$$
\frac{(p+q)!}{p! \cdot q!}
$$

Proof: Apply Proposition 4.6. &blk14;

**Proposition 4.9**:
The number of binary sequence with $p$ 1's and $q$ 0's such that no two 0's are together is

$$
^{p+1}C_q
$$

Proof:
First, arrange the $p$ 1's. The 0's can be placed in the $p-1$ gaps, or at the beginning or at the end. Thus total number of places is $p+1$. Then, we shall choose $q$ places out of the $p+1$ places. Hence, the required number is $^{p+1}C_q$. &blk14;

<section class="proposition">

**Proposition 4.11**:
The number of ways of distributing $n$ identical objects in $k$ distinct boxes is $^{n+k-1}C_{k-1}$.

</section>

Preliminary thought:
Suppose there are four identical objects to be distributed among three distinct boxes. Let the boxes to be denoted $A$, $B$ and $C$, then the distribution can be done in 15 ways as follows:

|       | A | B | C | : | A | B | C | : | A | B | C |
|:-----:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|
| 4:0:0 | 4 | 0 | 0 |   | 0 | 4 | 0 |   | 0 | 0 | 4 |
| 3:1:0 | 0 | 3 | 1 |   | 3 | 0 | 1 |   | 3 | 1 | 0 |
|       | 0 | 1 | 3 |   | 1 | 0 | 3 |   | 1 | 3 | 0 |
| 2:2:0 | 0 | 2 | 2 |   | 2 | 0 | 2 |   | 2 | 2 | 0 |
| 2:1:1 | 2 | 1 | 1 |   | 1 | 2 | 1 |   | 1 | 1 | 2 |

<section class="proposition">

**Stars and Bars Approach** for Proposition 4.11:
Imagine the four objects in a line, shown here as stars. The objects can be divided into boxes by placing a bar either between the stars or at the ends.

|   |   |   |   |   |   |   |   |   |   |   |
|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|
|   |   | ★ |   | ★ |   | ★ |   | ★ |   |   |   

Placing one bar creates two distinct groups. Placing the bar at one of the ends will create a group with zero stars.

|   |   |   |   |   |   |   |   |   |   |   |
|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|
|   |   | ★ |   | ★ |   | ★ | ¦ | ★ |   |   |
|   |   | ★ |   | ★ |   | ★ |   | ★ | ¦ | ∅ |

Placing two bars will create three distinct groups, and placing bars next to each other creates a group with zero stars.

|   |   |   |   |   |   |   |   |   |   |   |
|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|
|   |   | ★ |   | ★ | ¦ | ★ | ¦ | ★ |   |   |
|   |   | ★ |   | ★ |   | ★ |¦ ¦| ★ |   |   |

Back to the problem of distributing four identical objects three distinct groups. Modeled as stars and bars, there will be four stars and two bars. Three are $4+2=6$ things that need to be placed, and two of those placements are chosen for the bars. Thus, there are $^6C_2=15$ possible distributions of four identical objects among three three distinct groups.

Proof:
In general, there are $n$ stars and $k-1$ bars that divide them into $k$ distinct groups. There are a total of $n+k-1$ things that will be placed, and $k-1$ of those placements are chosen for the bars. The stars will be put in the remaining placements. Thus, there are $^{n+k-1}C_{k-1}$ possible placements of the bars. &blk14;

</section>

**Example 4.35**:
There is an unlimited supply of apples, oranges and bananas. You are free to take any number of any of the three kinds but the total must be exactly 10. The number of choices is $^{10+3-1}C_{3-1}$.

<section class="proposition">

**Proposition 4.13**:
The number of ways of distributing $n$ identical objects in $k$ distinct non-empty boxes, with $n \geq k$, is $^{n-1}C_{k-1}$.

Proof:
Modeled as stars and bars, $k-1$ bars divide stars into $k$ groups. In contrast to Proposition 4.11, however, each group must not be empty. Therefore, the locations where bars can be placed are limited such that:

- bars cannot be placed at the ends
- two or more bars cannot be placed at the same location

It follows that

- the number of potential locations for bars is $n-1$
- $k-1$ locations shall be chosen out of $n-1$

Hence, the required answer is $^{n-1}C_{k-1}$. &blk14;

</section>

**Example 4.38**:
Find the number of staircase paths from (2, 5) to (8, 9).

Let steps *R* and *U* such that:

- *R*: from $(x, y)$ to $(x+1, y)$
- *U*: from $(x, y)$ to $(x, y+1)$

Now to reach (8, 9) from (2, 5), we have to move six unites horizontally and four units vertically. Thus, with every staircase path, we can associate a sequence of *R*'s and *U*'s consisting of six *R*'s and four *U*'s, for example *R*-*R*-*R*-*U*-*U*-*R*-*R*-*R*-*U*-*U*. Hence, the required answer is the number of permutations of six *R*'s and four *U*U's, which is given by
$\displaystyle\frac{10!}{6! \cdot 4!}$ (refer to Proposition 4.6).
