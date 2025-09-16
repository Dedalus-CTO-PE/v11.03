.  *****************************************************************************
.  *                                                                           *
.  *     Include Name : PATICUFD.INC                                           *
.  *                                                                           *
.  *     Function     : File Definition include for Patient                    *
.  *                    Intensive Care Unit                                    *
.  *                                                                           *
.  *     File Type    : SQL                                                    *
.  *                                                                           *
.  *     File Name    : paticuaf.dat                                           *
.  *                                                                           *
.  *     Keys         : KEY 8                                                  *
.  *                                                                           *
.  *     Modifications:                                                        *
.  *                                                                           *
.  *     V10.14.01  27/03/2019 Peter Vela                 Task 0857392         *
.  *                Added Charlson Score to spare                              *
.  *     V10.05.01  15/08/2014 Ania P                     CAR  304641          *
.  *                Increased PTICAMBN from 6 to 15                            *
.  *     V10.04.01  05/01/2013 Ania P                     CAR  295425          *
.  *                Moved PTICINTM/PTICMECM out of SPARE                       *
.  *     V10.01.02  29/05/2013 Jill P                     CAR  282743          *
.  *                Added Minutes of ICU & Minutes of Mech Vent                *
.  *     V10.00.01  13/04/2010 Jill P                                          *
.  *                Changed fields from FORM4 to FORM5                         *
.  *      V5.10.00  27/03/2001 DM                                              *
.  *                Added PTICHNCU                                             *
.  *      V5.09.01  01/02/2001 STeve A                                         *
.  *                Added PTICCPAP                                             *
.  *      V5.09.00  06/10/2000 PD                                              *
.  *                Added PTICUCCU                                             * 
.  *      V5.01.00  21/07/1993 Bez Created                                     *
.  *                                                                           *
.  *****************************************************************************
.
PATICUA1  IFILE  SQL, FIXED=93, KEY="U1-8"
.
.Name     Type   Length   Physical   Start   Description
.----     ----   ------   --------   -----   -----------
DPTICUAD  DIM       8         8          1   ADMISSION NUMBER
PTICUINT  FORM      5         4          9   HOURS IN INTENSIVE CARE
PTICUMEC  FORM      5         4         13   HOURS ON MECHANICAL VENTILATOR
PTICUCCU  FORM      5         4         17   HOURS IN CRITICAL CARE  
PTICAMBN  DIM      15        15         21   AMBULANCE CLIENT NUMBER
PTICCPAP  FORM      5         4         36   HOURS ON CONSTANT POSITIVE AIR
.                                            PRESSURE (CPAP)
PTICHNCU  FORM      5         4         40   HOURS IN NCU
PTICINTM  DIM       2         2         44   Minutes of ICU
PTICMECM  DIM       2         2         46   Minutes of Mechanical Ventilation
PTICCHSC  DIM      15        15         48   Charlson Score
PTICUSPR  DIM      30        30         63   SPARE
.
.End of Record                          93
.
.     The following field is stored in the spare variable
.
.
. redefine form fields in key
. ---------------------------
PTICUADM  FORM      8                        ADMISSION NUMBER
