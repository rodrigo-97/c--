#include <iostream>

class House
{

public:
  std::string comp = "124";

protected:
  char essid[5] = {'H', 'o', 'm', 'e', '\0'};

private:
  std::string password = "Rods Password" + comp;

  friend class Neighbor;
};

class Neighbor
{
public:
  void contorller()
  {
    House h;

    std::cout << "Its working" << h.password << '\n';
  }
};

int main(int argc, char const *argv[])
{
  Neighbor n;
  n.contorller();

  return 0;
}
