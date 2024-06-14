# Writing mathematical expressions in Markdown with VS Code preview

Use [Markdown](https://docs.github.com/en/get-started/writing-on-github/working-with-advanced-formatting/writing-mathematical-expressions) to display mathematical expressions.

## About writing mathematical expressions on GitHub

To enable clear communication of mathematical expressions, GitHub supports LaTeX formatted math within Markdown. For more information, see [LaTeX/Mathematics](http://en.wikibooks.org/wiki/LaTeX/Mathematics) in Wikibooks.

GitHub's math rendering capability uses MathJax; an open source, JavaScript-based display engine. MathJax supports a wide range of LaTeX macros, and several useful accessibility extensions. For more information, see [the MathJax documentation](http://docs.mathjax.org/en/latest/input/tex/index.html#tex-and-latex-support) and [the MathJax Accessibility Extensions Documentation](https://mathjax.github.io/MathJax-a11y/docs/#reader-guide).

Mathematical expressions rendering is available in GitHub Issues, GitHub Discussions, pull requests, wikis, and Markdown files.

## Writing inline expressions

You can surround a math expression with dollar symbols (`$`) to delimit the math expression inline with your text. This sentence uses `$` delimiters to show math inline: $\sqrt{3x-1}+(1+x)^2$.

```
$\sqrt{3x-1}+(1+x)^2$
```

## Writing expressions as blocks

To add a math expression as a block, start a new line and delimit the expression with two dollar symbols `$$`.

```
$$
\left( \sum_{k=1}^n a_k b_k \right)^2
\leq
\left( \sum_{k=1}^n a_k^2 \right) \left( \sum_{k=1}^n b_k^2 \right)
$$
```

$$
\left( \sum_{k=1}^n a_k b_k \right)^2
\leq
\left( \sum_{k=1}^n a_k^2 \right) \left( \sum_{k=1}^n b_k^2 \right)
$$

