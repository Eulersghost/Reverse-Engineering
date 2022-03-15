#include <iostream>
int main()
{
  std::cout << "Please enter your name"<< std::endl;
  int name1 = 0, name2 = 0, name3 = 0;
  std::cin >> name1 >> name2 >> name3;
  std::cout << "Your new name is " << name1 + name3 << std::endl;
  return 0;
}
