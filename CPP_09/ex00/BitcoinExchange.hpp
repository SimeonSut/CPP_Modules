/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/23 21:22:50 by marvin            #+#    #+#             */
/*   Updated: 2026/11/26 01:35:23 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

#ifndef DEBUG
#define DEBUG 0
#endif

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
# include <cfloat>

class BitcoinExchange
{

	public:

		BitcoinExchange();
		BitcoinExchange( BitcoinExchange const & src );
		BitcoinExchange( const std::string NewFileName );
		~BitcoinExchange();

		BitcoinExchange &		operator=( BitcoinExchange const & rhs );

		typedef  std::pair<std::string, float>		bitpair;
		typedef  std::multimap<std::string, float>	bitmap;

		bitmap const & Get_Dates_For_Rates() const;

		void	Bitcoin_Conversion();

	private:

		void	_Parser();
		void	_Fill_Csv( std::ifstream & file_to_parse );

		std::string	FileName;
		bitmap		_Dates_For_Rates;

		static bitpair Validate_Line_By_Given_Format( std::string const & line, bitpair const & valid_format );

		static const bitpair	_Valid_Csv_Format;
		static const bitpair	_Valid_Input_Format;
		static const int		Days[12];

};

#endif /* ************************************************* BITCOINEXCHANGE_H */