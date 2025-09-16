. 
.  **********************************************************************
.  *                                                                    *
.  *     Include Name : IBAPRTFD.INC                                    *
.  *                                                                    *
.  *     Function     : File Definition include for                     *
.  *                    Printer File                                    *
.  *                                                                    *
.  *     File Type    : SQL                                             *
.  *                                                                    *
.  *     File Name    : ibaprtaf.dat                                    *
.  *                                                                    *
.  *     Keys         : KEY 3                                           *
.  *                                                                    *
.  *     Modifications:                                                 *
.  *       V10.01.01 22/03/2011  Jill Parkinson  CAR 239574             * 
.  *                 Increased printer size and added queue,hospital,   *    
.  *                 location and script parameters                     *    
.  *       V9.04.02  31/03/2009  WEELEE KOO                             * 
.  *                 Added printer type 9 (Generic Barcoding)           *    
.  *                    V9.04.01  16/09/2005  Mike Laming   CAR 68672   *
.  *                      Add Datamax E-class printer - Printer type 8  *
.  *                    V9.04 13/08/2001  Tonii Tang                    *
.  *                          Added printer type 7 (Zebra)              *
.  *                    V5.08 17/07/2000  Steve Armstrong               *
.  *                          Added printer type 6 (SATO CX200)         *
.  *                    V5.00 15.08.89 J.Clark     (IBA)                *
.  *                          Change include heading                    *
.  *                    V6.00 29/07/91 Steve O'Gorman                   *
.  *                          Added Paper Type                          *
.  *                                                                    *
.  **********************************************************************
.
.
IBAPRTA1  IFILE      SQL, FIXED=346, KEY="U1-6"
IBAPRTA2  IFILE      SQL, FIXED=346, KEY="U33-35,1-6"
.
. NAME     TYPE      LENGTH  PHYSICAL   START LOC.   DESCRIPTION
. ----     ----      ------  --------   ----------   -----------
QPRTCODE  DIM          6         6            1      Printer Code
PRTDESC   DIM         20        20            7      Description
PRTAVAL   FORM         1         2           27      Avaliability Code
.                                                     0 = Available
.                                                     1 = Not Available
PRTTYPE   FORM         2         2           29      Printer Type
.                                                     0 = No barcoding facility
.                                                     1 = HP2934A (Rel 5 & 6)
.                                                     2 = Epson with dongle
.                                                         (Rel 5)
.                                                     3 = Tharo Freedom (Rel 5)
.                                                     4 = Intermec 3400 (Rel 6)
.                                                     5 = Epson DLQ-3000+
.                                                     6 = Sato CX200
.                                                     7 = Zebra
.                                                     8 = Datamax E-class
.                                                     9 = Generic Barcoding
PRTPAPER  FORM         2         2           31      Paper Type
.                                                     0 = Either
.                                                     1 = Plain Paper
.                                                     2 = Special Stationary
IBPTHOSP  DIM          3         3           33      Hospital (pathspaf)
IBPTQUEN  DIM         50        50           36      Printer Queue Name
IBPTLOCN  DIM         80        80           86      Location
IBPTSCRP  DIM         80        80          166      Script Parameters
PRTSPARE  DIM        100       100          246      Spare
.
.End of record                              346
.
PRTCODE   FORM         6         6            1      Printer Code
