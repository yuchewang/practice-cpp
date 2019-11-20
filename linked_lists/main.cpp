#include <cstdlib>
#include <iostream>

#include "linked_list.cpp"

int main(int argc, char *argv[]) {

  LinkedList<int> ilist;
  ilist.PushFront(4);
  ilist.PushFront(9);

  std::cout << "Size of int list is: " << ilist.Size() << std::endl;

  LinkedList<std::string> strlist;
  strlist.PushFront("string 1");
  strlist.PushFront("another");
  strlist.PushFront("and another");
  std::cout << "Size of string list is: " << strlist.Size() << std::endl;

  return EXIT_SUCCESS;
}

