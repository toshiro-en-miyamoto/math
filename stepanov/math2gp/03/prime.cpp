#include <array>

/*
https://primes.utm.edu/howmany.html
π(x) = the number of primes less than or equal to x
*/
constexpr int max_pow = 8;
constexpr std::array<int, 10> primes{
//       π(x)       n               x
            4,  //  1              10
           25,  //  2             100
          168,  //  3           1,000
        1'229,  //  4          10,000
        9'592,  //  5         100,000
       78'498,  //  6       1,000,000
      664'579,  //  7      10,000,000
    5'761'455,  //  8     100,000,000
   50'847'534,  //  9   1,000,000,000
  455'052'511   // 10  10,000,000,000
};

#include <iterator>
#include <concepts>

template<std::random_access_iterator I, std::integral N>
constexpr void mark_sieve(I first, I last, N factor)
{
//    assert(first != last);
    *first = false;
    while (last - first > factor)
    {
        first = first + factor;
        *first = false;
    }
}

template<std::random_access_iterator I, std::integral N>
constexpr void sift0(I first, N n)
{
//    std::fill(first, first + n, true);
    N i{0};
    N index_square{3};
    while (index_square < n)
    {
        // invariant: index_square = 2i^2 + 6i + 3
        if (first[i]) // if candidate is prime
        {
            mark_sieve(first + index_square, first + n, i + i + 3);
        }
        i++;
        index_square =  2*i*(i + 3) + 3;
    }
}

inline int value_at(int index) { return 2*index + 3; }
inline int index_of(int value) { return (value - 3)/2; }

#include <vector>
#include <algorithm>
#include <cmath>
#include <iostream>
#include <cassert>
#include "../chrono_stats.hpp"

int pi(int n)
{
    // if n=1, x=10, sieve(4): {3, 5, 7, 9}
    // the size of the sieve := x/2 - 1;
    int x = std::pow(10, n);
    int size = x/2 - 1;
    std::vector<bool> sieve(size);
    std::fill(sieve.begin(), sieve.end(), true);
    assert(std::count(sieve.begin(), sieve.end(), true) == size);

    // sift0(sieve.begin(), size);
    auto stats = chrono_stats_of<std::chrono::microseconds, 10>(
        [&](){ sift0(sieve.begin(), size); });
    std::cout << n << ':' << stats.avg << '\n';

    return std::count(sieve.begin(), sieve.end(), true);
}

// #include <iostream>
// #include "../chrono_stats.hpp"

#include <limits>

int main()
{
    assert(std::numeric_limits<int>::max() > std::pow(10, max_pow));
    for (int n = 0; n < max_pow; n++)
    {
        assert(primes[n] == (pi(n + 1) + 1));
    }
}