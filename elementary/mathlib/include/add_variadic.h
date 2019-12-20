#pragma once

template<typename... ARGS>
auto add_variadic(const ARGS&... args)
{
  return (args + ...);
}
