.  **********************************************************************
.  *                                                                    *
.  *     Include Name : DEPCATFD.INC                                    *
.  *                                                                    *
.  *     Function     : File Definition include for Patient Dependency  *
.  *                    Category Table                                  *
.  *                                                                    *
.  *     File Type    : SQL                                             *
.  *                                                                    *
.  *     File Name    : depcataf.dat                                    *
.  *                                                                    *
.  *     Keys         : KEY 3                                           *
.  *                                                                    *
.  *     Modifications:                                                 *
.  *          V9.02.00  05/05/2003 Tonii  CAR 38344                     *
.  *                    Port program from r5.10                         *
.  **********************************************************************
.  *                    04/06/1991 Justin Coates Quote 6882 SRF 107875  *
.  *                    Change Values to be minutes not hours (were 2.2)*
.  *                                                                    *
.  **********************************************************************
.
DEPCATA1  IFILE     SQL, FIXED=63, KEY="U1-3"
.
. NAME    TYPE    LENGTH   PHYSICAL  START LOC.   DESCRIPTION
. ----    ----    ------   --------  ----------   -----------
DPCPATCA  DIM       3          3         1        Patient Category
DPCDESC   DIM       30         30        4        Patient Description
DPCLVAL   FORM      4          3         34       Low Value  (Mins/Points)
DPCHVAL   FORM      4          3         37       High Value (Mins/Points)
DPCAVRG   FORM      4          3         40       Average    (Mins/Points)
DPCTSPRE  DIM       20         20        43       Spare Variable
.
.End of Record                           63
.
