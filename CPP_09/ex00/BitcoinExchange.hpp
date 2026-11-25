/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/23 21:22:50 by marvin            #+#    #+#             */
/*   Updated: 2026/11/25 01:45:35 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <fstream>
# include <string>
# include <map>
# include <stdexcept>
# include <cstdlib>
# include <cstring>
# include <cctype>
# include <cerrno>
# include <utility>

class BitcoinExchange
{

	public:

		BitcoinExchange();
		BitcoinExchange( BitcoinExchange const & src );
		BitcoinExchange( char * FileName );
		~BitcoinExchange();

		BitcoinExchange &		operator=( BitcoinExchange const & rhs );

		std::multimap<std::string, float> const & getExchangeRates() const;

	private:

		typedef  std::pair<char *, float>	bitpair;
		typedef  std::multimap<std::string, float>	bitmap;

		void	_parser_setup( char const * FileName );
		void	_parser( std::fstream const & file_to_parse , bitpair const & valid_format, bitmap & destination );
	
		bitmap	_exchange_rates;
		bitmap	_date_to_convert;

		static void Validate_Line_By_Given_Format( std::string const & line, bitpair const & valid_format );

		static const bitpair	valid_csv_format;
		static const bitpair	valid_input_format;
		static const int	days[12];

};

#endif /* ************************************************* BITCOINEXCHANGE_H */