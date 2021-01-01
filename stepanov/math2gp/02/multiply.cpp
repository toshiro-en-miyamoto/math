#include "../chrono_stats.hpp"

constexpr int half(int n) { return n >> 1; }
constexpr bool odd(int n) { return n & 0x1; }

constexpr int mult_acc4(int r, int n, int a)
{
    while (true)
    {
        if (odd(n))
        {
            r = r + a;
            if (n == 1) return r;
        }
        n = half(n);
        a = a + a;
    }
}

constexpr int mult_acc3(int r, int n, int a)
{
    if (odd(n))
    {
        r = r + a;
        if (n == 1) return r;
    }
    n = half(n);
    a = a + a;
    return mult_acc3(r, n, a);
}

constexpr int mult_acc2(int r, int n, int a)
{
    if (odd(n))
    {
        r = r + a;
        if (n == 1) return r;
    }
    return mult_acc2(r, half(n), a + a);
}

constexpr int mult_acc1(int r, int n, int a)
{
    if (n == 1) return r + a;
    if (odd(n)) r = r + a;
    return mult_acc1(r, half(n), a + a);
}

constexpr int mult_acc0(int r, int n, int a)
{
    if (n == 1) return r + a;
    if (odd(n)) {
        return mult_acc0(r + a, half(n), a + a);
    } else {
        return mult_acc0(r, half(n), a + a);
    }
}

constexpr int mult4(int n, int a)
{
    while (!odd(n))
    {
        a = a + a;
        n = half(n);
    }
    if (n == 1) return a;
    return mult_acc4(a, half(n - 1), a + a);
}

constexpr int mult3(int n, int a)
{
    while (!odd(n))
    {
        a = a + a;
        n = half(n);
    }
    if (n == 1) return a;
    return mult_acc4(a, n - 1, a);
}

constexpr int mult2(int n, int a)
{
    if (n == 1) return a;
    return mult_acc4(a, n - 1, a);
}

constexpr int mult1(int n, int a)
{
    if (n == 1) return a;
    int result = mult1(half(n), a + a);
    if (odd(n)) result = result + a;
    return result;
}

// 1a = a
// na = (n-1)a + a
constexpr int mult0(int n, int a)
{
    if (n == 1) return a;
    return mult0(n - 1, a) + a;
}

#include <iostream>
#include <cassert>

int main()
{
    const int n = 100'041;
    const int a = 59;

    assert(n*a == mult0(n, a));
    auto stat = chrono_stats_of<std::chrono::nanoseconds>([]{ mult0(n, a); });
    std::cout << "mult0: "
        << stat.min << "; " << stat.avg << "; " << stat.max << '\n';

    assert(n*a == mult1(n, a));
    stat = chrono_stats_of<std::chrono::nanoseconds>([]{ mult1(n, a); });
    std::cout << "mult1: "
        << stat.min << "; " << stat.avg << "; " << stat.max << '\n';

    assert(n*a == mult_acc0(0, n, a));
    stat = chrono_stats_of<std::chrono::nanoseconds>([]{ mult_acc0(0, n, a); });
    std::cout << "mult_acc0: "
        << stat.min << "; " << stat.avg << "; " << stat.max << '\n';

    assert(n*a == mult_acc1(0, n, a));
    stat = chrono_stats_of<std::chrono::nanoseconds>([]{ mult_acc1(0, n, a); });
    std::cout << "mult_acc1: "
        << stat.min << "; " << stat.avg << "; " << stat.max << '\n';

    assert(n*a == mult_acc2(0, n, a));
    stat = chrono_stats_of<std::chrono::nanoseconds>([]{ mult_acc2(0, n, a); });
    std::cout << "mult_acc2: "
        << stat.min << "; " << stat.avg << "; " << stat.max << '\n';

    assert(n*a == mult_acc3(0, n, a));
    stat = chrono_stats_of<std::chrono::nanoseconds>([]{ mult_acc3(0, n, a); });
    std::cout << "mult_acc3: "
        << stat.min << "; " << stat.avg << "; " << stat.max << '\n';

    assert(n*a == mult_acc4(0, n, a));
    stat = chrono_stats_of<std::chrono::nanoseconds>([]{ mult_acc4(0, n, a); });
    std::cout << "mult_acc4: "
        << stat.min << "; " << stat.avg << "; " << stat.max << '\n';

    assert(n*a == mult2(n, a));
    stat = chrono_stats_of<std::chrono::nanoseconds>([]{ mult2(n, a); });
    std::cout << "mult2: "
        << stat.min << "; " << stat.avg << "; " << stat.max << '\n';

    assert(n*a == mult3(n, a));
    stat = chrono_stats_of<std::chrono::nanoseconds>([]{ mult3(n, a); });
    std::cout << "mult3: "
        << stat.min << "; " << stat.avg << "; " << stat.max << '\n';

    assert(n*a == mult4(n, a));
    stat = chrono_stats_of<std::chrono::nanoseconds>([]{ mult4(n, a); });
    std::cout << "mult4: "
        << stat.min << "; " << stat.avg << "; " << stat.max << '\n';
}