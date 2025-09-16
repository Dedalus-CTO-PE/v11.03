. V5.07.001 07/08/1998 Jim Stathopoulos  507 Changes 
.  **********************************************************************
.  *                                                                    *
.  *     Include Name : PATURAFD.INC                                    *
.  *                                                                    *
.  *     Function     : File Definition include for Patient             *
.  *                    U/R Alteration Audit                            *
.  *                                                                    *
.  *     File Type    : SQL                                             *
.  *                                                                    *
.  *     File Name    : paturadf.dat                                    *
.  *                                                                    *
.  *     Keys         : KEY 17,                                         *
.  *                                                                    *
.  **********************************************************************
.
PATURAD1   IFILE SQL, FIXED=27, KEY="U1-1,2-9,10-17"
PATURAD2   IFILE SQL, FIXED=27, KEY="U10-17,1-1,2-9"
.
.NAME       TYPE   LENGTH  PHYSICAL   START     DESCRIPTION
.----       ----   ------  --------   -----     -----------
URRTYPE      DIM        1        1        1     AUDIT RECORD TYPE
.                                               A = Addition
.                                               C = Change
URDATE       DIM        8        8        2     DATE OF TRANSACTION (YYMMDD)
URURNO       DIM        8        8       10     U/R NUMBER
URSYST       FORM       1        2       18     ORIGINATING SYSTEM
.                                               1 = A & E
.                                               2 = OUTPATIENTS
.                                               3 = INPATIENTS
.                                               4 = OTHER FINANCIAL
.                                               5 = DAY CENTRE     
.                                               6 = COMMUNITY HEALTH
.                                               7 = WARD ATTENDERS 
.                                               8 = AD-HOC ATTENDEES
URSPARE      DIM        7        7       20     SPARE VARIABLE
.
.End of Record                           27
.
SURDATE       DIM          6         2     DATE OF TRANSACTION (YYMMDD)
SURURNO       DIM          8        10     U/R NUMBER
