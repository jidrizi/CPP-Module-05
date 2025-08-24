/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jidrizi <jidrizi@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/24 05:42:51 by jidrizi           #+#    #+#             */
/*   Updated: 2025/08/25 00:20:21 by jidrizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
	private:
		std::string	target;
	
	public:
	// constructors
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(RobotomyRequestForm& source);
		RobotomyRequestForm&	operator=(RobotomyRequestForm& source);
		~RobotomyRequestForm();

	// functions
		void			subFormAction() const;
};

#endif