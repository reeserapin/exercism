

#include "space_age.h"

static const double EARTH_YEAR_SECONDS = 31557600.0;

static const double ORBITAL_PERIODS[] =
{
	0.2408467,   // MERCURY
	0.61519726,  // VENUS
	1.0,         // EARTH
	1.8808158,   // MARS
	11.862615,   // JUPITER
	29.447498,   // SATURN
	84.016846,   // URANUS
	164.79132    // NEPTUNE
};

float age(planet_t planet, int64_t seconds)
{
	if (planet < MERCURY || planet > NEPTUNE)
   {
		return -1.0f;
	}
	double period = ORBITAL_PERIODS[planet];
	return (float)(seconds / (EARTH_YEAR_SECONDS * period));
}
