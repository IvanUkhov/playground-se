set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})

include_directories(
  ${CMAKE_CURRENT_SOURCE_DIR}
  )

add_library(
  interview
  problem/bit_insertion.cc
  problem/build_order.cc
  problem/char_replacement.cc
  problem/common_subsequence.cc
  problem/factorial_zeros.cc
  problem/fibonacci.cc
  problem/fixed_difference.cc
  problem/four_cubes.cc
  problem/free_fields.cc
  problem/hanoi_towers.cc
  problem/last_lines.cc
  problem/magic_index.cc
  problem/minimal_tree.cc
  problem/nested_permutations.cc
  problem/one_away.cc
  problem/palindrome_permutations.cc
  problem/parenthesis_combinations.cc
  problem/recursive_multiply.cc
  problem/robot_maze.cc
  problem/string_combinations.cc
  problem/string_compression.cc
  problem/string_permutations.cc
  problem/string_rotation.cc
  problem/triple_step.cc
  problem/two_permutations.cc
  problem/unique_chars.cc
  )
