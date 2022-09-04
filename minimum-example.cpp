#include <iostream>
#include "signals.hpp"

int main()
{
  // create signal with given callback function signature
  fteng::signal<void()> sig;

  {
    // connection will be disconnected automatically when it goes out of scope
    fteng::connection c = sig.connect([]() { std::cout << "test" << std::endl; });
    sig();
  }

  // expect no more output as connection is gone
  sig();

  return 0;
}