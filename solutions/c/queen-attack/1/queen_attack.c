#include "queen_attack.h"
#include <stdlib.h>

attack_status_t can_attack(position_t queen_1, position_t queen_2)
{
   // Check if positions are valid (on an 8x8 board: 0-7)
   if (queen_1.row > 7 || queen_1.column > 7 || queen_2.row > 7 || queen_2.column > 7)
   {
      return INVALID_POSITION;
   }

   // Check if queens are on the same position
   if (queen_1.row == queen_2.row && queen_1.column == queen_2.column)
   {
      return INVALID_POSITION;
   }

   // Check if queens can attack each other
   // Same row
   if (queen_1.row == queen_2.row)
   {
      return CAN_ATTACK;
   }

   // Same column
   if (queen_1.column == queen_2.column)
   {
      return CAN_ATTACK;
   }

   // for diagonal use the absolute difference in rows equals absolute difference in columns
   int row_diff = abs(queen_1.row - queen_2.row);
   int col_diff = abs(queen_1.column - queen_2.column);
   if (row_diff == col_diff)
   {
      return CAN_ATTACK;
   }

   return CAN_NOT_ATTACK;
}
