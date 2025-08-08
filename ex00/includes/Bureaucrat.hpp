/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jidrizi <jidrizi@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 18:08:39 by jidrizi           #+#    #+#             */
/*   Updated: 2025/08/08 21:28:54 by jidrizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <string>
# include <iostream>

class	Bureaucrat
{
	private:
		const std::string	name;
		int					grade;

	public:
		//constructors
		Bureaucrat();
		Bureaucrat(const std::string name, int grade);
		Bureaucrat& operator=(const Bureaucrat other);
		Bureaucrat(const Bureaucrat &other);
		~Bureaucrat();
		
		//functions
		const std::string	getName(Bureaucrat buro);
		int					getGrade(Bureaucrat buro);
};





#endif