#include "BitcoinExchange.hpp"

int main(int argc, char **argv)
{
    std::ifstream btc_price_f("data.csv");
    std::ifstream amounts_f(argv[1]);

    if (!amounts_f.is_open() || argc != 2 || !btc_price_f.is_open()) 
    {
        std::cerr << "Error: could not open file." << std::endl;
        return 1;
    }
	BitcoinExchange exchange(btc_price_f, amounts_f);
	return 0;
}
