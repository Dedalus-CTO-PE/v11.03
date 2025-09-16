.  ****************************************************************************
.  *                                                                          *
.  *     Include Name : AAECONTD.INC                                          *
.  *                                                                          *
.  *     Function     : CGI Definition include for A&E Control File           *
.  *                                                                          *
.  *     Sector used  :  30 and 78                                            *
.  *                                                                          *
.  *     Modifications:                                                       *
.  *    V11.01.01  30/08/2021  J.Tan  TSK 0905305                             *
.  *               Added AECNAECC - Start date for AECC Class ABF calculation *
.  *    V10.05.01  31/07/2014  Steve Armstrong   CAR 294204                   *
.  *               Extended AAECN004 from DIM 1 to DIM 2.                     *
.  *     V9.12.01  09/07/2009  J.Tan          CAR 199760                      *
.  *               Added AECNAERH,AECNAERT-receipt header/tail template       *
.  *     V9.09.02  25/10/2007  J.Tan          CAR 151803                      *
.  *               Add AAECN009 (HYSYST) - Type of Fee                        *
.  *     V9.09.01  12/07/2007  Mike Laming    CAR 140395                      *
.  *               Add AAECN007 (AECNAEIH) - User defined Emer.Invoice Header *
.  *               Add AAECN008 (AECNAEIT) - User defined Emer.Invoice Tail   *
.  *     V9.04.01  18/05/2005  Peter Vela     CAR 60166                       *
.  *               Changed variable names to AAE                              *
.  *     V9.04.00  12/04/2005  Ebon Clements  CAR 58443                       *
.  *               Created include                                            *
.  ****************************************************************************
.
.  ****************************************************************************
.  Sector 30
.  ****************************************************************************
.
.Name     Type   Length   Start   Description
.----     ----   ------   -----   -----------
AAECN001  DIM       1        89       No of Labels across page
AAECN002  DIM       3        90       "  "    "    to print
AAECN003  DIM       1        93       Label Size used in Hospital
AAECN004  DIM       2        130      Type of Label Used in Hospital
AAECN005  DIM       2        178      No. of Additional Blank labels to print
AAECN009  DIM       1        180      Type of Fee
.                                     0 = No Facility Fee
.                                     1 = Facility Fee
.                                     2 = NZ Facility Fee
.                                     3 = Triage Fee
.
.  ****************************************************************************
.  Sector 78
.  ****************************************************************************
.
.Name     Type   Length   Start   Description
.----     ----   ------   -----   -----------
AAECN006  DIM       1         35      Using Eltron printer for A&E labels
AAECN007  DIM       6         40      User Defined Emer. Invoice Header
AAECN008  DIM       6         46      User Defined Emer. Invoice Tail   
AAECN010  DIM       6         52      User Defined Emer. Receipt Header
AAECN011  DIM       6         58      User Defined Emer. Receipt Tail   
.
AAECN012  DIM       8         66      Start date for AECC Class/ABF Calculation

