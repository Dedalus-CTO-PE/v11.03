.  **********************************************************************
.  *                                                                    *
.  *     Include Name : OPRCOUFD.INC                                    *
.  *                                                                    *
.  *     Function     : File Definition include for Theatre             *
.  *                    Clinic operation Usage                          *
.  *                                                                    *
.  *     File Type    : SQL                                             *
.  *                                                                    *
.  *     File Name    : oprcouaf.dat                                    *
.  *                                                                    *
.  *     Keys         : KEY 21                                          *
.  *                                                                    *
.  *                                                                    *
.  *     Modifications:                                                 *
.  **********************************************************************
.
OPRCOUA1  IFILE     SQL, FIXED=45, KEY="U1-6,7-12,13-13,14-16,17-19,20-20,21-21"
.
. NAME    TYPE   LENGTH  PHYSICAL START LOC.   DESCRIPTION
. ----    ----   ------  -------- ----------   -----------
OPCODATE  DIM       6        6        1        Period date (CCYYMM)
OPCODOCT  DIM       6        6        7        clinic/surgeon code        
OPCOTYPE  DIM       1        1        13       Type of sess. "B"ooked or "E"xtra
OPCOOTYP  DIM       3        3        14       Operation type (OY)
OPCOTPER  DIM       3        3        17       Time period (SP)   
DOPCOATY  DIM       1        1        20       Admission type    
.                                                     category "A ", 1st indic
.                                                     1 = Public
.                                                     2 = Private 
DOPCOOWN  DIM       1        1        21       Attnd. doct = oper. doct
.                                                     1 = yes
.                                                     2 = no
OPCONCAS  FORM      6        4        22       Number of cases
OPCONOPR  FORM      6        4        26       Number of operations
OPCOTIME  FORM      6        4        30       Theatre time used (mins)
OPCOSPAR  DIM       11       11       34       Spare Variable
.End of Record                        45
.
.
. redefine key variables
OPCOATYP  FORM      1                          Admission type
OPCOOWN   FORM      1                          Attending doctor = oper. surgeon
.
