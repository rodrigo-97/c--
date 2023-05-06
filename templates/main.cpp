#include <iostream>

template <class T>
class Stack
{
public:
  void stack(T array, int max)
  {
    int i = {0};

    while (i < max)
    {
      std::cout << "Array elements is " << array[i] << '\n';
      i++;
    }
  }
};

int main()
{
  Stack<const std::string *> s;
  std::string m_array[] = {"Rods", "Arajo", "Matheus", "Silva"};
  std::string *p_array = m_array;
  int max = sizeof(m_array) / sizeof(m_array[0]);

  s.stack(p_array, max);

  return 0;
}
