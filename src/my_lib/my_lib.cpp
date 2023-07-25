module;

#include <iostream>

export module my_lib;

export class foo {
public:
  foo();
  ~foo();
  void helloworld();
};

foo::foo() = default;
foo::~foo() = default;

void foo::helloworld() {
    std::cout << "hello world\n";
}
