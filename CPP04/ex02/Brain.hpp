/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ginobile <ginobile@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/22 17:38:24 by ginobile          #+#    #+#             */
/*   Updated: 2026/11/25 15:15:25 by ginobile         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	BRAIN_HPP
# define BRAIN_HPP

# include <string>

class Brain
{
	private:
		std::string ideas[100];
	
	public:
		Brain(void);
		Brain(const Brain &other);
		Brain	&operator=(const Brain &other);
		~Brain(void);

		void	setIdea(int index, const std::string &idea);
		std::string getIdea(int index) const;
};

#endif