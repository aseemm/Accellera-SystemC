/*****************************************************************************

  The following code is derived, directly or indirectly, from the SystemC
  source code Copyright (c) 1996-2014 by all Contributors.
  All Rights reserved.

  The contents of this file are subject to the restrictions and limitations
  set forth in the SystemC Open Source License (the "License");
  You may not use this file except in compliance with such restrictions and
  limitations. You may obtain instructions on how to receive a copy of the
  License at http://www.accellera.org/. Software distributed by Contributors
  under the License is distributed on an "AS IS" basis, WITHOUT WARRANTY OF
  ANY KIND, either express or implied. See the License for the specific
  language governing rights and limitations under the License.

 *****************************************************************************/

/*****************************************************************************

  main.cpp -- 

  Original Author: Martin Janssen, Synopsys, Inc., 2002-02-15

 *****************************************************************************/

/*****************************************************************************

  MODIFICATION LOG - modifiers, enter your name, affiliation, date and
  changes you are making here.

      Name, Affiliation, Date:
  Description of Modification:

 *****************************************************************************/

                /***************************************/
                /* Main Filename: 	main.cc        */
                /***************************************/

#include "display.h"

int sc_main(int ac, char *av[])
{

// Signal Instantiation
  signal_bool_vector      prime	("prime");

// Clock Instantiation
  sc_clock 	clk ("CLK", 6, SC_NS, 0.5, 0, SC_NS);	// 167 Mhz

// Process Instantiation
 
  displayp	T2 ("T2", clk, prime);
 
// Simulation Run Control
  sc_start( 30, SC_NS, SC_EXIT_ON_STARVATION );
  cout << sc_time_stamp() << " : STOPPING SIM - start button" << endl;
   return 0;
}
