#include <cxxopts.hpp>
#include <fmt/core.h>
#include <fmt/format.h>
#include <iostream>
#include <range/v3/view.hpp>

namespace view = ranges::views;

int fib(int x) {
  int a = 0, b = 1;

  for (int it : view::repeat(0) | view::take(x)) {
    (void)it;
    int tmp = a;
    a += b;
    b = tmp;
  }

  return a;
}

int main(int argc, char **argv) {
  cxxopts::Options options("fibo",
                           "Print the fibonacci sequence up to a value 'n'");
  options.add_options()("n,value", "The value to print to",
                        cxxopts::value<int>()->default_value("10"))(
      "h,help", "Print usage");

  auto result = options.parse(argc, argv);

  if (result.count("help")) {
    std::cout << options.help() << std::endl;
    exit(0);
  }

  auto n = result["value"].as<int>();

  for (int x : view::iota(1) | view::take(n)) {
    fmt::print("fib({}) = {}\n", x, fib(x));
  }
}
