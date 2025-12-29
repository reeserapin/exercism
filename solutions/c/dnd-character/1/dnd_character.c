#include "dnd_character.h"
#include <stdlib.h>
#include <time.h>

static int roll_die(void)
{
	return rand() % 6 + 1;
}

int ability(void)
{
	int rolls[4];
	int min = 7;
   int sum = 0;
	for (int i = 0; i < 4; i++)
   {
		rolls[i] = roll_die();
		sum += rolls[i];
		if (rolls[i] < min) min = rolls[i];
	}
	return sum - min;
}

int modifier(int score)
{
	int mod = score - 10;
	if (mod < 0 && mod % 2 != 0)
   {
		return (mod / 2) - 1;
   }
	return mod / 2;
}

dnd_character_t make_dnd_character(void)
{
	static int seeded = 0;
	if (!seeded)
   {
		srand((unsigned int)time(NULL));
		seeded = 1;
	}
	dnd_character_t character;
	character.strength = ability();
	character.dexterity = ability();
	character.constitution = ability();
	character.intelligence = ability();
	character.wisdom = ability();
	character.charisma = ability();
	character.hitpoints = 10 + modifier(character.constitution);
	return character;
}
