#include <add.h>
#include <mul.h>
#include <pow.h>

#include <iostream>

int main()
{
  bool result = true;

  if (add(2, 6) != 8)
  {
    std::cout << "add failed" << std::endl;
    result = false;
  }
  
  if (mul(3, 5) != 15)
  {
    std::cout << "mul failed" << std::endl;
    result = false;
  }

  if (pow(2, 10) != 1024)
  {
    std::cout << "pow failed" << std::endl;
  }

  if (result)
  {
    std::cout << "All tests passed" << std::endl;
    return 0;
  }

  return 1;
}
