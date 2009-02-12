/*  Copyright 2008 Stephen English, Jeffrey Gough, Alexis Johnson, 
        Robert Spanton and Joanna A. Sun.

    This file is part of the Formica robot firmware.

    Foobar is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Foobar is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with the Formica robot firmware.  
    If not, see <http://www.gnu.org/licenses/>.  */
#ifndef __PARKING_H
#define __PARKING_H
#include "../types.h"

/* Controlled drive into a wall */
void parking_update( void );

extern bool charge_complete;
<<<<<<< .mine
extern bool now_parking;

=======
extern bool now_parking;


typedef enum {
  NOTHIT,     /* Moving around in a random walk */
  JUSTHIT,    /* Just touched power */
  WEDGED,	    /* Been touching power for a while, wedged in */
  FALLEN,     /* Was touching power, not at the moment */
  ANOTHERRUNUP 	/* Can't reastablish contact. Having a second run-up */
} hitstate_t;

extern hitstate_t hit;

>>>>>>> .r489
#endif
