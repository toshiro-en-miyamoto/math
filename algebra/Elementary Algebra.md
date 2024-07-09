# Elementary Algebra (初等代数学)

References:

- [blinder] Guide to Essential Math, 2nd Edition. Sy M. Blinder. Elsevier, February 2013. ISBN: 9780124071582.
- [wiki/Exponentiation] Wikipedia Exponentiation. https://en.wikipedia.org/wiki/Exponentiation.
- [wiki/冪乗] Wikipedia 冪乗. https://ja.wikipedia.org/wiki/%E5%86%AA%E4%B9%97.
- [wiki/Nth_root] Wikipedia Nth roots. https://en.wikipedia.org/wiki/Nth_root.
- [wiki/冪根] Wikipedia 冪根. https://ja.wikipedia.org/wiki/%E5%86%AA%E6%A0%B9.
- [random] 小学館ランダムハウス英和大辞典第2版 (iOS版 ver. 1.5)

## Symbolic Variables (記号変数)

Algebra is a lot like arithmetic but deals with symbolic variables in addition to numbers. Very often these include `x`, `y`, and/or `z`, especially for *unknown* quantities which is often your job to solve for. Earlier letters of the alphabet such as `a`, `b`, `c` are often used for *constants*, quantities whose values are determined by assumed conditions before you solve a particular problem. [blinder]

代数学(algebra)は数論(arithmetic)とよく似ているが、代数学は数だけでなく記号変数(symbolic variables)を扱う。変数とはこれから解こうとする「値が分かっていない」数である。変数を表す記号にはアルファベットの終わりの文字(`x`、`y`、`z`など)が使われることが多い。「定数」(constants)、すなわちある条件を仮定すれば問題を解く前にその値が決められる数には、アルファベットの始まりの文字(`a`、`b`、`c`など)が使われることが多い。

The fundamental entity in algebra is an *equation*, consisting of two quantities connected by an equal sign. [blinder]

代数学の基本となるものは、2つの数量を等号で結んだ「方程式」(equation)である。

## Powers

*Exponentiation* is a mathematical operation, written as `bⁿ`, involving two numbers, the *base* `b` and the *exponent* or *power* `n`, and pronounced as "`b` raised to the power of `n`". [wiki/Exponentiation]

数学における冪乗（べきじょう、べき乗、英: 独: 仏: exponentiation）あるいは冪演算（べきえんざん）は、底 (てい、英: base) および冪指数 (べきしすう、英: exponent) と呼ばれる二つの数に対して定まる数学的算法で、その結果は冪 (べき、英: power) と呼ばれる。[wiki/冪乗]

## Roots

In the expression `ⁿ√x`, the integer `n` is called the *index*, `√` is the *radical sign* or *radix*, and `x` is called the *radicand*. [wiki/Nth_root]

`n`は指数 (index) と呼ばれ、記号`√`は根号 (radical sign, radix) と呼ばれる。また、根号の中に書かれた数`x`は時に被開平数 (radicand) と呼ばれる。[wiki/冪根]

In mathematics, an `n`th root of a number `x` is a number `r` which, when raised to the power `n`, yields `x`: `rⁿ = x`, 
where `n` is a positive integer, sometimes called the degree of the root. A root of degree 2 is called a *square root* and a root of degree 3, a *cube root*. [wiki/Nth_root]

`n`を2以上の自然数とする。数`a`に対して、代数方程式`xⁿ = a`の解`x`を、`a`の`n`乗根 (root of n-th power, n-th root) といい、また`n`を特に固定せずに冪根、累乗根と総称する。特に、2 乗根、3 乗根は、それぞれ平方根 (square root)、立方根 (cube root) ともいう。[wiki/冪根]

## Logarithms
対数

*Inverse operations* are pairs of mathematical manipulations in which one operation undoes the action of the other—for example, addition and subtraction, multiplication and division. The inverse of a number usually means its reciprocal, i.e. `x⁻¹ = 1⁄x`. The product of a number and its inverse (reciprocal) equals 1. [blinder]

「逆演算」(inverse operations)とは、ある演算とその結果を元に戻す演算の一対である。例えば、加算と減算、乗算と除算である。ある数に対する逆演算の結果は、その数の逆数(reciprocal)となる。すなわち、`x⁻¹ = 1⁄x`である。ある数とその逆数との積は1になる。

Raising to a power and extraction of a root are evidently another pair of inverse operations. An alternative inverse operation for raising to a power is taking the *logarithm*. The following relations are equivalent:

```
x = aⁿ ⟺ n = logₐx
```

in which `a` is called the base of the *logarithm*. [blinder]

冪乗と冪根は逆演算である。冪乗のもうひとつの逆演算が「対数」である。`logₐx`における`a`を底(base)と呼ぶ。

```
a⁰ = 1 ⟹ logₐ1 = 0 ⟺ log 1 = 0
a¹ = a ⟹ logₐa = 1
x = aⁱ, y = aⁿ ⟺ i = logₐx, n = logₐy
 ⟹ xy = aⁱ⁺ⁿ ⟺ i + n = logₐxy
 ⟹ log xy = log x + log y
 ⟹ log xⁿ = n × log x
```

Logarithms to the base 10 are called *Briggsian* or *common logarithms*. [blinder]

底を10とする対数を常用対数(common logarithms)と呼ぶ。

Of more fundamental mathematical significance are logarithms to the base `e = 2.71828...`, known as *natural logarithms*. [blinder]

底を`e = 2.71828...`とする対数は数学上の基本的重要性を持っており、自然対数(natural logarithms)と呼ぶ。

```
log₂1    =  0
log₂2    =  1
log₂4    =  2
log₂8    =  3
log₂16   =  4
log₂128  =  7   7 bits: [0, 127]
log₂256  =  8   1 byte: [0, 255]
log₂1024 = 10
log₂4096 = 12
```
