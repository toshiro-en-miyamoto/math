# Counting Principles

- T. Sengadir. &sect; 4 Counting Principles, *Discrete Mathematics and Combinatorics*. Pearson India. 2008

## A Fundamental Counting Principle

**Fundamental Counting Principle**:
Consider an activity consisting of $k$ independent subtasks. Assume that

- $task_1$ can be performed in $m_1$ ways
- $task_2$ can be performed in $m_2$ ways
- &vellip;
- $task_k$ can be performed in $m_m$ ways

Then this activity can be completed in $m_1 \times m_2 \times \cdots \times m_k$ different number of ways.

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
- there exists $y \in B$ such that $y \notin \{f(x):x \in A\}$
