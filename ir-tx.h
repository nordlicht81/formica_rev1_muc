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
#ifndef __IR_TRANSMIT_H
#define __IR_TRANSMIT_H
#include "types.h"

void ir_transmit_init( void );

/* Enable IR transmission */
void ir_transmit_enable( void );

/* Returns TRUE if IR transmission is enabled */
bool ir_transmit_is_enabled( void );

#endif	/* __IR_TRANSMIT_H */
