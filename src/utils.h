#ifdef UTILS_H
#define UTILS_H

#include <string>
#include <vector>


// Definitions for prime large number generation (p) 

std::uint64_t generate_prime_number(int bit_length);
bool is_valid_prime(std::uint64_t number);

// Math helper definitions

std::uint64_t gcd(uint64_t a, uint64_t b);
std::uint64_t modular_pow(std::uint64_t base, std::uint64_t exp, std::uint64_t mod);
std::uint64_t modular_ inv(std::uint64_t a, std::uint64_t mod);


