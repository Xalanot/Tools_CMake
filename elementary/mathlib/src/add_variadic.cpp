#include <add_variadic.h>

template<typename... ARGS>
auto add_variadic(const ARGS&... args)
{
  return (args + ...);
}

template auto add_variadic<int>(const int&);
