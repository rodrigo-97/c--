#include <iostream>

constexpr long int fib(int n)
{
  return (n <= 1) ? n : fib(n - 1) + fib(n - 2);
}

int main()
{
  std::cout << "Numero de fibonaci: " << fib(30) << '\n';
  return 0;
}
