#include "Kolo.h"

Kolo::Kolo(double radius) : m_radius(radius)
{}


void Kolo::wypisz(std::ostream & input) const
{
	std::cout << "Kolo o promieniu: " << m_radius << std::endl;
}

double Kolo::polePow() const 
{
	return 3.1415*m_radius*m_radius;
}	