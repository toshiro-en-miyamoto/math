# Writing Math in Markdown

Keep in mind that your mathematics is part of a Markdown document, so you need to be aware of the special characters used by Markdown as part of its markup.

**GitHub** is [moving toward](https://github.blog/2017-03-14-a-formal-spec-for-github-markdown/) the CommonMark specification.

- In order to fully specify the version of Markdown we use at GitHub (known as GFM), we had to [formally define](https://github.github.com/gfm/) the syntax and semantics of these features &hellip;
- To ensure that the rendered Markdown in our website is fully compliant with the [CommonMark spec](https://spec.commonmark.org/), the new backend implementation for GitHub Flavored Markdown or GFM parsing on GitHub is based on `cmark` &hellip;
- From [2022-05-19](https://github.blog/2022-05-19-math-support-in-markdown/), you can use the `$` and `$$` delimiters natively in Markdown on GitHub to insert math expressions in TeX and LaTeX style syntax. This content is then rendered using the `MathJax` library.

**VS Code**

- [targets](https://code.visualstudio.com/docs/languages/markdown) the CommonMark Markdown specification using the `markdown-it` library, according to its document [site]()
- its built-in [Markdown preview](https://code.visualstudio.com/docs/languages/markdown#_math-formula-rendering) renders math equations using [KaTeX](https://katex.org/)


**Jupyter Notebook** interfaces use

- [Jupyter Notebook Markdown](https://jupyterbook.org/en/stable/file-types/markdown.html) is an extension of a flavour of Markdown called CommonMark Markdown.
- Jupyter Book also supports a more fully-featured version of Markdown called [MyST Markdown](https://mystmd.org/).
- [MathJax](http://docs.mathjax.org/) for [typesetting math](https://jupyterbook.org/en/stable/content/math.html) in your HTML book build.

Thus, mathematical expression renderers include:

- **MathJax**: A JavaScript display engine for mathematics.
  - [the MathJax documentation](http://docs.mathjax.org/en/latest/input/tex/index.html#tex-and-latex-support)
  - [the MathJax Accessibility Extensions Documentation](https://mathjax.github.io/MathJax-a11y/docs/#reader-guide)
- **KaTeX**: The fastest math typesetting library for the web.
  - [Supported Functions](https://katex.org/docs/supported)
  - [Common Issues](https://katex.org/docs/issues)

Refer to
- [CommonMark Spec 0.31.2](https://spec.commonmark.org/0.31.2/)
- [Wikibooks LaTeX Mathematics](https://en.wikibooks.org/wiki/LaTeX/Mathematics). Retrieved 2024 June.
- American Mathematical Society, LaTeX Project. *User's Guide for the `amsmath` Package*, Version 2.1 [PDF](http://www.ams.org/arc/tex/amsmath/amsldoc.pdf). 2020 February. Retrieved 2024 June 23.
- Getting to Grip with LaTex &mdash; [Part 1](https://www.andy-roberts.net/latex/mathematics_1/) and [Part 2](https://www.andy-roberts.net/latex/mathematics_2/)
- Warbrick and Rivera. *Essential LaTeX* [PDF](https://us.mirrors.cicku.me/ctan/info/latex-essential/ess2e.pdf). 2014. Retrieved 2024 June.
- David Carlisle. *Summary of mathematical symbols available in LaTeX* [PDF](http://mirrors.ctan.org/info/symbols/math/maths-symbols.pdf), version 3.4. Retrieved 2024 June.

Relevant Unicode ranges include:
- 2100–214F: Unicode Letter-like Symbols
- 2190–21FF: Unicode Arrows
- 2200–22FF: Unicode Mathematical Operators
- 27C0–27EF: Unicode Miscellaneous Mathematical Symbols–A
- 2980–29FF: Unicode Miscellaneous Mathematical Symbols–B
- 2A00–2AFF: Unicode Supplementary Mathematical Operators

## Letters and Notations

### Symbols on Keyboards

- The 15 characters **can be** accessed directly from the keyboard [Wikibooks LaTeX Mathematics]:
  ```
  + - = ! / ( ) [ ] < > | ' : *
  ```
  GitHub turns out to be unable to render `$a<b$` properly. Use `\lt` instead `<`.
- The 10 characters **should not** appear as part of your text, because if they do LaTeX will confused. [3.1. Running Text, Warbrick and Rivera, 2014]
  ```
  # $ % & ~ _ ^ \ { }
  ```
- The 15 characters **appear** without escaping according to [Carlisle v 3.4]:
  ```
  + - = < > : , ; . | ( ) [ ] /
  ```

| Symbol | ASCII | Symbol name | Markdown | Math in LaTeX | Note |
|:--:|:-:|---|---|---|:-:|
| !  | 0x21 | exclamation mark     | embedded image   | | can be |
| "  | 0x22 | quotation mark       | link title       | ams font size |
| #  | 0x23 | number sign          | heading          | command param | should not |
| $  | 0x24 | dollar sign          |                  | begin math    | should not |
| %  | 0x25 | percent sign         |                  | comment       | should not |
| &  | 0x26 | ampersand            |                  | table column  | should not |
| '  | 0x27 | apostrophe           | link title       | | can be |
| (  | 0x28 | left parenthesis     | link title       | | can be |
| )  | 0x29 | right parenthesis    |                  | | can be |
| *  | 0x2A | asterisk             | emphasis, list   | | can be |
| +  | 0x2B | plus sign            | list             | | can be |
| ,  | 0x2C | comma                |                  | | appear |
| -  | 0x2D | hyphen               | list             | | can be |
| .  | 0x2E | full stop            |                  | | appear |
| /  | 0x2F | solidus              |                  | | can be |
| :  | 0x3A | colon                | link destination | | can be |
| ;  | 0x3B | semicolon            |                  | | appear |
| <  | 0x3C | less-than sign       | link destination | | can be |
| =  | 0x3D | equal sign           |                  | | can be |
| >  | 0x3E | greater-than sign    | block quotes     | | can be |
| ?  | 0x3F | question mark        |                  | ??? |
| @  | 0x40 | commercial at        |                  | ??? |
| [  | 0x5B | left square bracket  | link text        | | can be |
| \  | 0x5C | reverse solidus      | hard line break  | command, esc  | should not |
| ]  | 0x5D | right square bracket |                  | | can be |
| ^  | 0x5E | circumflex accent    |                  | power         | should not |
| _  | 0x5F | low line             | emphasis         | index         | should not |
| `  | 0x60 | grave accent         | code span        | ??? |
| {  | 0x7B | left curly bracket   |                  | parameter     | should not |
| \| | 0x7C | vertical line        | table            | | can be |
| }  | 0x7D | right curly bracket  |                  | parameter     | should not |
| ~  | 0x7E | tilde                |                  | ???           | should not |

Your mathematics expressions in TeX are part of a Markdown document. For example, like a hyphen (`-`), Markdown also interprets a plus (`+`) at the beginning of a line as an list item:

```
-foo
-bar
+baz
```

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

### Arrows

| Symbol | Script | : | Symbol | Script |
|:------:|--------|:-:|:------:|--------|
| $\gets$ | `\gets` | : | $\to$ | `\to` |
| $\mapsto$ | `\mapsto` | : | $\longmapsto$ | `\longmapsto` |
| $\leftarrow$ | `\leftarrow` | : | $\Leftarrow$ | `\Leftarrow` |
| $\rightarrow$ | `\rightarrow` | : | $\Rightarrow$ | `\Rightarrow` |
| $\longleftarrow$ | `\longleftarrow` | : | $\Longleftarrow$ | `\Longleftarrow` |
| $\longrightarrow$ | `\longrightarrow` | : | $\Longrightarrow$ | `\Longrightarrow` |
| $\leftrightarrow$ | `\leftrightarrow` | : | $\Leftrightarrow$ | `\Leftrightarrow` |
| $\longleftrightarrow$ | `\longleftrightarrow` | : | $\Longleftrightarrow$ | `\Longleftrightarrow` |
| $\rightleftharpoons$ | `\rightleftharpoons` | : | $\leadsto$ | `\leadsto` |
| $\leftharpoonup$ | `\leftharpoonup` | : | $\rightharpoonup$ | `\rightharpoonup` |
| $\leftharpoondown$ | `\leftharpoondown` | : | $\rightharpoondown$ | `\rightharpoondown` |
| $\hookleftarrow$ | `\hookleftarrow` | : | $\hookrightarrow$ | `\hookrightarrow` |
| $\nearrow$ | `\nearrow` | : | $\searrow$ | `\searrow` |
| $\swarrow$ | `\swarrow` | : | $\nwarrow$ | `\nwarrow` |
| $\uparrow$ | `\uparrow` | : | $\Uparrow$ | `\Uparrow` |
| $\downarrow$ | `\downarrow` | : | $\Downarrow$ | `\Downarrow` |
| $\updownarrow$ | `\updownarrow` | : | $\Updownarrow$ | `\Updownarrow` |
| $\ldots$ | `\ldots` | : | $\cdots$ | `\cdots` |
| $\ddots$ | `\ddots` | : | $\vdots$ | `\vdots` |

### Other constructions

| Symbol | Script | : | Symbol | Script |
|:------:|--------|:-:|:------:|--------|
| $\vec{a}$ | `\vec{a}` | : | $\bar{a}$ | `\bar{a}` |
| $\dot{a}$ | `\dot{a}` | : | $\ddot{a}$ | `\ddot{a}` |
| $\tilde{a}$ | `\tilde{a}` | : | $\hat{a}$ | `\hat{a}` |
| $\acute{a}$ | `\acute{a}` | : | $\grave{a}$ | `\grave{a}` |
| $\breve{a}$ | `\breve{a}` | : | $\check{a}$ | `\check{a}` |
| $\widetilde{abc}$ | `\widetilde{abc}` | : | $\widehat{abc}$ | `\widehat{abc}` |
| $\overleftarrow{abc}$ | `\overleftarrow{abc}` | : | $\overrightarrow{abc}$ | `\overrightarrow{abc}` |
| $\overline{abc}$ | `\overline{abc}` | : | $\underline{abc}$ | `\underline{abc}` |
| $\overbrace{abc}$ | `\overbrace{abc}` | : | $\underbrace{abc}$ | `\underbrace{abc}` |
| $\vert \thinspace \vert$ | `\thinspace` | : | $\vert \quad \vert$ | `\quad` |

> Note: GitHub cannot render `\thickspace` and abbreviated commands for space such as `\,`, `\:`, and `\;`.

## Elemental Mathematical Symbols

### Arithmetic Operators

| Symbol | Usage | Script | Explanation
|:------:|:-----:|--------|-------------
| $=$ | $a=b$ | `a=b` | equal to
| $\neq$ | $a \neq b$ | `a \neq b` | not equal to
| $\approx$ | $a \approx b$ | `a \approx b` | approximately equal to
| $\lt$ | $a \lt b$ | `a \lt b` | less than
| $\ll$ | $a \ll b$ | `a \ll b` | much smaller than
| $>$ | $a>b$ | `a>b` | greater than
| $\gg$ | $a \gg b$ | `a \gg b` | much bigger than
| $\leq$ | $a \leq b$ | `a \leq b` | less than or equal to
| $\geq$ | $a \geq b$ | `a \geq b` | greater than or equal to
| $\leqq$ | $a \leqq b$ | `a \leqq b` | less than or equal to
| $\geqq$ | $a \geqq b$ | `a \geqq b` | greater than or equal to
| $\vert \quad \vert$ | $\vert x \vert$ | `\vert x \vert` | absolute value
| $\lfloor \quad \rfloor$ | $\lfloor x \rfloor$ | `\lfloor x \rfloor` | floor function
| $\lceil \quad \rceil$ | $\lceil x \rceil$ | `\lceil x \rceil` | ceiling function

> Note: GitHub is unable to render `$a<b$`. Use `\lt` command.

| Symbol | Usage | Script | Explanation
|:------:|:-----:|--------|-------------
| $+$ | $a+b$ | `a+b` | addition
| $-$ | $a-b$ | `a-b` | subtraction
| $-$ | $-a$ | `-a` | unary minus
| $\pm$ | $a \pm b$ | `a \pm b` | plus or minus
| $\mp$ | $a \mp b$ | `a \mp b` | minus or plus
| $\times$ | $a \times b$ | `a \times b` | multiplication
| $\cdot$ | $a \cdot b$ | `a \cdot b` | multiplication
| $\div$ | $a \div b$ | `a \div b` | division
| $/$ | $a/b$ | `a/b` | division
| $:$ | $a:b$ | `a:b` | ratio
|  | $\frac{a}{b}$ | `\frac{a}{b}` | fraction
|  | $2^3=8$ | `2^3=8` | power
| $\sqrt{}$ | $\sqrt{x}$ | `\sqrt{x}` | square root
| $\sqrt{}$ | $\sqrt[n]{x}$ | `\sqrt[n]{x}` | *n*th root
| $!$ | $k!$ | `k!` | factorial
| $( \quad )$ | $\binom{n}{k}$ | `\binom{n}{k}` | combination
| $P$ | $^{n}P_{k}$ | `^{n}P_{k}` | permutation

Summation: $\displaystyle\sum_{i=1}^{10} i = 1+2+\ldots+10= 55$
```
\displaystyle\sum_{i=1}^{10}i = 55
```

Pi product: $\displaystyle\prod_{i=1}^{n}i
  = 1\times 2\times\ldots\times (n-1)\times n = n!$
```
\displaystyle\prod_{i=1}^{n}i = n!
```

Integral Calculus:

- $\displaystyle \int u \frac{dv}{dx}\thinspace dx=uv-\int \frac{du}{dx}v\thinspace dx$
  ```
  \displaystyle \int u \frac{dv}{dx}\thinspace dx=uv-\int \frac{du}{dx}v\thinspace dx
  ```
- $\displaystyle f(x) = \int_{-\infty}^\infty \hat f(\xi)\thinspace e^{2 \pi i \xi x}$
  ```
  \displaystyle f(x) = \int_{-\infty}^\infty \hat f(\xi)\thinspace e^{2 \pi i \xi x}
  ```
- $\displaystyle \left[ -\cos{\theta} \right]_0^\pi = 2$
  ```
  \displaystyle \left[ -\cos{\theta} \right]_0^\pi = 2
  ```

| Symbol | Usage | Script | Explanation
|:------:|:-----:|--------|-------------
| $e$ | $e^{x+y}$ | `e^{x+y}` | natural exponent
| $\log$ | $\log_2{x}$ | `\log_2{x}` | general logarithm
| $\ln$ | $\ln{x}$ | `\ln{x}` | natural logarithm
| $\sin$ | $\sin{\theta}$ | `\sin{\theta}` | sine function
| $\cos$ | $\cos{\theta}$ | `\cos{\theta}` | cosine function
| $\tan$ | $\tan{\theta}$ | `\tan{\theta}` | tangent function

| Symbol | Script | : | Symbol | Script | : | Symbol | Script |
|:------:|--------|:-:|:------:|--------|:-:|:------:|--------|
| $sin$ | `\sin` |:| $arcsin$ | `\arcsin` |:| $sinh$ | `\sinh` |
| $cos$ | `\cos` |:| $arccos$ | `\arccos` |:| $cosh$ | `\cosh` |
| $tan$ | `\tan` |:| $arctan$ | `\arctan` |:| $tanh$ | `\tanh` |
| $cot$ | `\cot` |:| $arccot$ | `\arccot` |:| $coth$ | `\coth` |

### Basic Mathematical Constants

| Symbol | Usage | Script | Explanation
|:------:|:-----:|--------|-------------
| $\pi$ | $2 \pi r$ | `2 \pi r` | Pi, Archimedes' constant
| $e$ | $x \mapsto e^x$ | `x \mapsto e^x` | Euler's number
| $i$ | $i=\sqrt{-1}$ | `i=\sqrt{-1}` | the imaginary unit

## Mathematical Symbols by Subject

- Carol Schumacher. *Chapter Zero*. Addison-Wesley. 1996
- Math Vault. *Complete List of Mathematical Symbols* [PDF](https://mathvault.ca/wp-content/uploads/Comprehensive-List-of-Mathematical-Symbols.pdf). Retrieve 2024 June.

### Logic

| Symbol | Usage | Script | Explanation
|:------:|:-----:|--------|-------------
| $\lnot$ | $\lnot P$ | `\lnot P` | logical NOT, negation
| $\land$ | $P \land Q$ | `P \land Q` | logical AND, conjunction
| $\lor$ | $P \lor Q$ | `P \lor Q` | logical OR, disjunction
| $\oplus$ | $P \oplus Q$ | `P \oplus Q$` | exclusive OR
| $\Rightarrow$ | $P \Rightarrow Q$ | `P \Rightarrow Q` | if-then, implication
| $\implies$ | $P \implies Q$ | `P \implies Q` | if-then, implication
| $\Leftrightarrow$ | $P \Leftrightarrow Q$ | `P \Leftrightarrow Q` | if and only if, equivalence
| $\iff$ | $P \iff Q$ | `P \iff Q` | if and only if, equivalence
| $\forall$ | $\forall x\thinspace P(x)$ | `\forall x\thinspace P(x)` | universal quantifier
| $\exists$ | $\exists x\thinspace P(x)$ | `\exists x\thinspace P(x)` | existential quantifier
| $\therefore$ | $\therefore$ | `\therefore` | therefore
| $\because$ | $\because$ | `\because` | because
| $\blacksquare$ | $\blacksquare$ | `\blacksquare` | Q.E.D., end of proof

### Sets

| Symbol | Usage | Script | Explanation
|:------:|:-----:|--------|-------------
| $\emptyset$ | $\emptyset$ | `\emptyset` | empty set
| $\varnothing$ | $\varnothing$ | `\varnothing` | empty set
| $\{ \quad \}$ | $\{a, b, \ldots \}$ | `\{a, b, \ldots \}` | set builder
| $\mid$ | $\{a \mid P(a)\}$ | `\{a \mid T(a)\}` | set builder
| $\colon$ | $\{a \colon P(a)\}$ | `\{a \colon P(a)\}` | set builder
| $\in$ | $a \in A$ | `a \in A` | $a$ is an element of $A$
| $\ni$ | $A \ni a$ | `A \ni a$` | $a$ is an element of $A$
| $\notin$ | $a \notin A$ | `a \notin A` | $a$ is not an element of $A$
| $\not\ni$ | $A \not\ni a$ | `A \not\ni a` | $a$ is not an element of $A$
| $\cup$ | $A \cup B$ | `A \cup B` | union
| $\cap$ | $A \cap B$ | `A \cap B` | intersection
| $\setminus$ | $A \setminus B$ | `A \setminus B` | difference
| $\times$ | $A \times B$ | `A \times B` | Cartesian product
| $A^C$ | $A^C$ | `A^C` | complement
| $\bar{A}$ | $\bar{A}$ | `\bar{A}` | complement
| $\mathcal{P}$ | $\mathcal{P}(A)$ | `\mathcal{P}(A)` | power set
| $\subseteq$ | $A \subseteq B$ | `A \subseteq B` | subset
| $\subset$ | $A \subset B$ | `A \subset B` | (proper) subset
| $\subsetneq$ | $A \subsetneq B$ | `A \subsetneq B` | proper subset
| $\supseteq$ | $A \supseteq B$ | `A \supseteq B` | superset
| $\supset$ | $A \supset B$ | `A \supset B` | (proper) superset
| $\supsetneq$ | $A \supsetneq B$ | `A \supsetneq B` | proper superset

Let $A$ be an arbitrary indexing set. Then

- $\displaystyle\bigcup_{a \in A}{B_{a}} = \{x : x \in B_{a} \text{ for some } a \in A\}$ is called the union over $a \in A$ of the $B_{a}$'s.
  ```
  \displaystyle\bigcup_{a \in A}{B_{a}}
  ```
- $\displaystyle\bigcap_{a \in A}{B_{a}} = \{x : x \in B_{a} \text{ for all } a \in B\}$ is called the intersection over $a \in A$ of the $B_{a}$'s.
  ```
  \displaystyle\bigcap_{a \in A}{B_{a}}
  ```

| Symbol | Usage | Script | Explanation
|:------:|:-----:|--------|-------------
| $\mathbb{N}$ | $n \in \mathbb{N}$ | `\mathbb{N}` | the natural numbers
| $\mathbb{Z}$ | $i \in \mathbb{Z}$ | `\mathbb{Z}` | the integers
| $\mathbb{Q}$ | $a \in \mathbb{Q}$ | `\mathbb{Q}` | the rational numbers
| $\mathbb{R}$ | $x \in \mathbb{R}$ | `\mathbb{R}` | the real numbers
| $\mathbb{C}$ | $a \in \mathbb{C}$ | `\mathbb{C}` | the complex numbers

### Relations, Orderings and Functions

| Symbol | Usage | Script | Explanation
|:------:|:-----:|--------|-------------
| $\sim$ | $a \sim b$ | `a \sim b` | $a$ is related to $b$
| $\preceq$ | $a \preceq b$ | `a \preceq b` | $a$ is a predecessor of $b$
| $\prec$ | $a \prec b$ | `a \prec b` | $a$ is a predecessor of $b$
| $\succeq$ | $a \succeq b$ | `a \succeq b` | $a$ is a successor of $b$
| $\succ$ | $a \succ b$ | `a \succ b` | $a$ is a successor of $b$
| $\ast$ | $a \ast b$ | `a \ast b` | a general operation
| $[\quad]$ | $[a]$ | `[a]` | the equivalence class of $a$
| $/$ | $M/\sim$ | `M/\sim` | the quotient set of $M$ by the equivalence relation $\sim$
| $\to$ | $f:A \to B$ | `f:A \to B` | a function from $A$ to $B$
| $\mapsto$ | $f:x \mapsto y$ | `x \mapsto y` | $x$ maps to $y$ under the function $f$
| $f()$ | $f(a_1)=f(a_2)$ | `f(a_1)=f(a_2)` | the image of $a$ under the function $f$
| $\mathcal{Dom}$ | $\mathcal{Dom}(f)$ | `\mathcal{Dom}(f)` | the domain of the function $f$
| $\mathcal{Ran}$ | $\mathcal{Ran}(f)$ | `\mathcal{Ran}(f)` | the range of the function $f$
| $f^{-1}$ | $f^{-1}:B \to A$ | `f^{-1}:B \to A` | the inverse of the function $f$
| $\circ$ | $g \circ f$ | `g \circ f` | the composition of functions $f$ and $g$

## To be retouched

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

### Integral Calculus

$$
\int u \frac{dv}{dx}\thinspace dx=uv-\int \frac{du}{dx}v\thinspace dx
$$

$$
f(x) = \int_{-\infty}^\infty \hat f(\xi)\thinspace e^{2 \pi i \xi x} $$

$$
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
\nabla \times \vec{\mathbf{B}} -\thinspace \frac1c\thinspace \frac{\partial\vec{\mathbf{E}}}{\partial t} & = \frac{4\pi}{c}\vec{\mathbf{j}} \\
\nabla \cdot \vec{\mathbf{E}} & = 4 \pi \rho \\
\nabla \times \vec{\mathbf{E}}\thinspace +\thinspace \frac1c\thinspace \frac{\partial\vec{\mathbf{B}}}{\partial t} & = \vec{\mathbf{0}} \\
\nabla \cdot \vec{\mathbf{B}} & = 0
\end{aligned}
$$

> Note:
> GitHub does not support `\\[1em]`.

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
S (\omega)=\frac{\alpha g^2}{\omega^5} \thinspace
e ^{\left[-0.74 \left(\frac{\omega U_\omega 19.5}{g} \right) ^{-4} \right]}
$$

> Note: GitHub cannot render `^{ ... \left{ ... \right} }`.
