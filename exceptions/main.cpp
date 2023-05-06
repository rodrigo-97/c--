#include <iostream>

void function(int *pointer, int x)
{
  if (pointer == NULL || x == 0)
  {
    throw pointer;
    std::cout << "Bizarre error" << '\n';
  }
  else
  {
    std::cout << "Pointer: " << *pointer << '\n'
              << "X: " << x;
  }
}

int main()
{
  int num = 10;
  int *pointer = &num;

  try
  {
    function(pointer, num);
    function(NULL, num);
  }
  catch (...)
  {
    std::cout << "Erro tratado" << '\n';
  }

  return 0;
}
