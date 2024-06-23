# Writing mathematical expressions

## About writing mathematical expressions on GitHub

Use Markdown to display mathematical expressions [on GitHub](https://docs.github.com/en/get-started/writing-on-github/working-with-advanced-formatting/writing-mathematical-expressions).

To enable clear communication of mathematical expressions, GitHub supports LaTeX formatted math within Markdown. For more information, see [LaTeX/Mathematics](http://en.wikibooks.org/wiki/LaTeX/Mathematics) in Wikibooks.

GitHub's math rendering capability uses MathJax; an open source, JavaScript-based display engine. MathJax supports a wide range of LaTeX macros, and several useful accessibility extensions. For more information, see [the MathJax documentation](http://docs.mathjax.org/en/latest/input/tex/index.html#tex-and-latex-support) and [the MathJax Accessibility Extensions Documentation](https://mathjax.github.io/MathJax-a11y/docs/#reader-guide).

Mathematical expressions rendering is available in GitHub Issues, GitHub Discussions, pull requests, wikis, and Markdown files.

## Math formula rendering with VS Code

VS Code's built-in [Markdown preview](https://code.visualstudio.com/docs/languages/markdown#_math-formula-rendering) renders math equations using [KaTeX](https://katex.org/).

## LaTeX mathematic

Refer to
- [Wikibooks LaTeX Mathematics](https://en.wikibooks.org/wiki/LaTeX/Mathematics). Retrieved 2024 June.
- American Mathematical Society, LaTeX Project. *User's Guide for the `amsmath` Package*, Version 2.1 [PDF](http://www.ams.org/arc/tex/amsmath/amsldoc.pdf). 2020 February. Retrieved 2024 June 23.
- Math Vault. *Complete List of Mathematical Symbols* [PDF](https://mathvault.ca/wp-content/uploads/Comprehensive-List-of-Mathematical-Symbols.pdf). Retrieve 2024 June.

### Symbols

The following is a set of symbols that can be accessed directly from the keyboard:

$$
\begin{matrix}
+ & - & = & ! & / & ( & ) & [ & ] & < & > & | & ' & : & *
\end{matrix}
$$

### Greek letters

| Symbol | Script | : | Symbol | Script |
|:------:|--------|:-:|:------:|--------|
| $A, \alpha$ | `A`, `\alpha` |:| $N, \nu$ | `N`, `\nu` |
| $B, \beta$ | `B`, `\beta` |:| $\Xi, \xi$ | `\Xi`, `\xi` |
| $\Gamma, \gamma$ | `\Gamma`, `\gamma` |:| $O, o$ | `O`, `o` |
| $\Delta, \delta$ | `\Delta`, `\delta` |:| $\Pi, \pi, \varpi$ | `\Pi`, `\pi`, `\varpi` |
| $E, \epsilon, \varepsilon$ | `E`, `\epsilon`, `\varepsilon` |:| $P, \rho, \varrho$ | `P`, `\rho`, `\varrho` |
| $Z, \zeta$ | `Z`, `\zeta` |:| $\Sigma, \sigma, \varsigma$ | `\Sigma`, `\sigma`, `\varsigma` |
| $H, \eta$ | `H`, `\eta` |:| $T, \tau$ | `T`, `\tau` |
| $\Theta, \theta, \vartheta$ | `\Theta`, `\theta`, `\vartheta` |:| $Y, \Upsilon, \upsilon$ | `Y`, `\Upsilon`, `\upsilon` |
| $I, \iota$ | `I`, `\iota` |:| $\Phi, \phi, \varphi$ | `\Phi`, `\phi`, `\varphi` |
| $K, \kappa, \varkappa$ | `K`, `\kappa`, `\varkappa` |:| $X, \chi$ | `X`, `\chi` |
| $\Lambda, \lambda$ | `\Lambda`, `\lambda` |:| $\Psi, \psi$ | `\Psi`, `\psi` |
| $M, \mu$ | `M`, `\mu` |:| $\Omega, \omega$ | `\Omega`, `\omega` |

### Operators

An operator is a function that is written as a word: e.g. trigonometric functions (`sin`, `cos`, `tan`), logarithms and exponential (`log`, `exp`), limits (`lim`), as well as trace and determinant (`tr`, `det`).

| Symbol | Script | : | Symbol | Script | : | Symbol | Script |
|:------:|--------|:-:|:------:|--------|:-:|:------:|--------|
| $sin$ | `\sin` |:| $arcsin$ | `\arcsin` |:| $sinh$ | `\sinh` |
| $cos$ | `\cos` |:| $arccos$ | `\arccos` |:| $cosh$ | `\cosh` |
| $tan$ | `\tan` |:| $arctan$ | `\arctan` |:| $tanh$ | `\tanh` |
| $cot$ | `\cot` |:| $arccot$ | `\arccot` |:| $coth$ | `\coth` |

For certain operators such as `limits`, the subscript is placed underneath the operator:

- $\lim_{x \to \infty} \exp(-x) = 0$
  ```
  $\lim_{x \to \infty} \exp(-x) = 0$
  ```
- $\lim\limits_{x \to \infty} \exp(-x) = 0$
  ```
  $\lim\limits_{x \to \infty} \exp(-x) = 0$
  ```

For the modular operator there are two commands:

- $a \mod b$
  ```
  $a \mod b$
  ```
- $x \equiv a \pmod{b}$
  ```
  $x \equiv a \pmod{b}$
  ```

## KaTeX and MathJax comparison

KaTeX and MathJax 3 handle all the expressions on [this page](https://www.intmath.com/cg5/katex-mathjax-comparison.php).

### Repeating fractions

$$
\frac{1}{\Bigl(\sqrt{\phi \sqrt{5}}-\phi\Bigr) e^{\frac25 \pi}} \equiv 1+\frac{e^{-2\pi}} {1+\frac{e^{-4\pi}} {1+\frac{e^{-6\pi}} {1+\frac{e^{-8\pi}} {1+\cdots} } } }
$$

### Summation notation

$$
\left( \sum_{k=1}^n a_k b_k \right)^2 \leq \left( \sum_{k=1}^n a_k^2 \right) \left( \sum_{k=1}^n b_k^2 \right)
$$

### Sum of a series

$$
\begin{aligned}
\sum_{i=1}^{k+1}i
& = \left(\sum_{i=1}^{k}i\right) +(k+1) \\
& = \frac{k(k+1)}{2}+k+1 \\
& = \frac{k(k+1)+2(k+1)}{2} \\
& = \frac{(k+1)(k+2)}{2}
\end{aligned}
$$

### Product notation

$$
1 + \frac{q^2}{(1-q)}+\frac{q^6}{(1-q)(1-q^2)}+\cdots
= \prod_{j=0}^{\infty}\frac{1}{(1-q^{5j+2})(1-q^{5j+3})},
\quad \text{ for }\lvert q\rvert < 1.
$$

### Inline math

And here is some in-line math:
$k_{n+1} = n^2 + k_n^2 - k_{n-1}$,
followed by some text.

### Greek letters

$$
\begin{gather*}
\Gamma\ \Delta\ \Theta\ \Lambda\ \Xi\ \Pi\ \Sigma\ \Upsilon\ \Phi\ \Psi\ \Omega\ \\
\alpha\ \beta\ \gamma\ \delta\ \epsilon\ \zeta\ \eta\ \theta\ \iota\ \kappa\ \lambda\ \mu\ \nu\ \xi\ \omicron\ \pi\ \rho\ \sigma\ \tau\ \upsilon\ \phi\ \chi\ \psi\ \omega\ \varepsilon\ \vartheta\ \varpi\ \varrho\ \varsigma\ \varphi\
\end{gather*}
$$

### Arrows

$$
\gets\ \to\ \leftarrow\ \rightarrow\ \uparrow\ \Uparrow\ \downarrow\ \Downarrow\ \updownarrow\ \Updownarrow \\
\Leftarrow\ \Rightarrow\ \leftrightarrow\ \Leftrightarrow\
\mapsto\ \hookleftarrow \\
\leftharpoonup\ \leftharpoondown\ \rightleftharpoons\ \longleftarrow\ \Longleftarrow\ \longrightarrow \\
\Longrightarrow\ \longleftrightarrow\ \Longleftrightarrow\ \longmapsto\ \hookrightarrow\ \rightharpoonup \\
\rightharpoondown\ \leadsto\ \nearrow\ \searrow\ \swarrow\ \nwarrow
$$

### Symbols

$$
\surd\ \barwedge\ \veebar\ \odot\ \oplus\ \otimes\ \oslash\ \circledcirc\ \boxdot\ \bigtriangleup \\
\bigtriangledown\ \dagger\ \diamond\ \star\ \triangleleft\ \triangleright\ \angle\ \infty\ \prime\ \triangle
$$

### Calculus

$$
\int u \frac{dv}{dx}\,dx=uv-\int \frac{du}{dx}v\,dx \\
f(x) = \int_{-\infty}^\infty \hat f(\xi)\,e^{2 \pi i \xi x} \\
\oint \vec{F} \cdot d\vec{s}=0
$$

### Lorenz equations

$$
\begin{aligned}
\dot{x} & = \sigma(y-x) \\
\dot{y} & = \rho x - y - xz \\
\dot{z} & = -\beta z + xy
\end{aligned}
$$

### Cross product

$$
\mathbf{V}_1 \times \mathbf{V}_2 = \begin{vmatrix}
\mathbf{i} & \mathbf{j} & \mathbf{k} \\
\frac{\partial X}{\partial u} & \frac{\partial Y}{\partial u} & 0 \\
\frac{\partial X}{\partial v} & \frac{\partial Y}{\partial v} & 0
\end{vmatrix}
$$

### Accents

$$
\hat{x}\ \vec{x}\ \ddot{x}
$$

### Stretchy brackets

$$
(\frac{x^2}{y^3}),
\left(\frac{x^2}{y^3}\right)
$$

### Evaluation at limits

$$
\left.\frac{x^3}{3}\right|_0^1
$$

### Case definitions

$$
f(n) = \begin{cases}
\frac{n}{2}, & \text{if } n\text{ is even} \\
3n+1, & \text{if } n\text{ is odd}
\end{cases}
$$

### Maxwell's equations

$$
\begin{aligned}
\nabla \times \vec{\mathbf{B}} -\, \frac1c\, \frac{\partial\vec{\mathbf{E}}}{\partial t} & = \frac{4\pi}{c}\vec{\mathbf{j}} \\
\nabla \cdot \vec{\mathbf{E}} & = 4 \pi \rho \\
\nabla \times \vec{\mathbf{E}}\, +\, \frac1c\, \frac{\partial\vec{\mathbf{B}}}{\partial t} & = \vec{\mathbf{0}} \\
\nabla \cdot \vec{\mathbf{B}} & = 0
\end{aligned}
$$

> Note:
> KaTeX supports `\\[1em]`, but MathJax does not.

### Statistics

$$
{^n}C_k
= \binom{n}{k}
= \frac{n!}{k!(n-k)!}
$$

### Fractions on fractions

$$
\frac{\frac{1}{x}+\frac{1}{y}}{y-z}
$$

### *n*-th root

$$
\sqrt[n]{1+x+x^2+x^3+\cdots}
$$

### Matrices

$$
\begin{pmatrix}
a_{11} & a_{12} & \cdots & a_{1m} \\
a_{21} & a_{22} & \cdots & a_{2m} \\
\vdots & \vdots & \ddots & \vdots \\
a_{n1} & a_{n2} & \cdots & a_{nm}
\end{pmatrix}
$$

### Punctuation

$$
f(x) = \sqrt{1+x}, \quad x \ge -1 \\
f(x) \sim x^2, \quad x\to\infty
$$

$$
\mathcal L_{\mathcal T}(\vec{\lambda})
= \sum_{(\mathbf{x},\mathbf{s})\in \mathcal T}
\log P(\mathbf{s}\mid\mathbf{x}) - \sum_{i=1}^m
\frac{\lambda_i^2}{2\sigma^2}
$$

$$
S (\omega)=\frac{\alpha g^2}{\omega^5} \,
e ^{\left[-0.74\Bigl\{\frac{\omega U_\omega 19.5}{g}\Bigr\}^{-4}\right]}
$$

> Note:
> KaTeX supports `\bigl`, but MathJax does not.
