#include <string.h>
#include "resistor_color_duo.h"

resistor_band_t resistorBandColors[] = {BLACK, BROWN, RED, ORANGE, YELLOW, GREEN, BLUE, VIOLET, GREY, WHITE};


static int color_value(const char *color) {
    if (strcmp(color, "black") == 0)
    {
        return 0;
    }
    if (strcmp(color, "brown") == 0)
    {
        return 1;
    }
    if (strcmp(color, "red") == 0)
    {
        return 2;
    }
    if (strcmp(color, "orange") == 0)
    {
        return 3;
    }
    if (strcmp(color, "yellow") == 0)
    {
        return 4;
    }
    if (strcmp(color, "green") == 0)
    {
        return 5;
    }
    if (strcmp(color, "blue") == 0)
    {
        return 6;
    }
    if (strcmp(color, "violet") == 0)
    {
        return 7;
    }
    if (strcmp(color, "grey") == 0)
    {
        return 8;
    }
    if (strcmp(color, "white") == 0)
    {
        return 9;
    }
    return -1; // invalid color
}

int value(const char **colors) {
    int first = color_value(colors[0]);
    int second = color_value(colors[1]);
    return first * 10 + second;
}

int color_code(const resistor_band_t *bands) {
    return bands[0] * 10 + bands[1];
}


const resistor_band_t *colors(void) {
    return resistorBandColors;
}
