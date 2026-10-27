#include "inputs.hh"
#include <algorithm>
#include <concepts>
#include <iostream>
#include <optional>
#include <ranges>
#include <span>
#include <vector>

template <typename T>
concept SearchEngine = requires(T, std::span<const int> input, int target) {
   { T::search(input, target) } -> std::same_as<std::optional<std::size_t>>;
};

struct BinarySearch {
      static std::optional<std::size_t> search(std::span<const int> input, const int target)
      {
         auto it = std::ranges::lower_bound(input, target);
         if (it != input.end() && *it == target) return std::ranges::distance(input.begin(), it);
         return std::nullopt;
      }
};

struct LinearSearch {
      static std::optional<std::size_t> search(std::span<const int> input, const int target)
      {
         auto it = std::ranges::find(input, target);
         if (it != input.end()) return std::ranges::distance(input.begin(), it);
         return std::nullopt;
      }
};

template <SearchEngine Engine = BinarySearch>
std::optional<std::size_t> search(std::span<const int> input, const int target)
{
   return Engine::search(input, target);
}

int main()
{
   auto tests           = TestCases::all_tests();
   constexpr int target = 2710;

   for (const auto& test : tests) {
      auto pos  = search<LinearSearch>(test, target);
      auto pos2 = search<BinarySearch>(test, target);

      auto format_pos = [](const std::optional<std::size_t>& p) {
         return p ? static_cast<long long>(*p) : -1;
      };

      std::cout << format_pos(pos) << "  " << format_pos(pos2) << '\n';
   }
   return 0;
}
