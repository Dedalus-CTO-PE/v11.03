.  **********************************************************************
.  *                                                                    *
.  *     Include Name : OPRSOUFD.INC                                    *
.  *                                                                    *
.  *     Function     : File Definition include for Theatre             *
.  *                    Surgeon Operation Usage                         *
.  *                                                                    *
.  *     File Type    : SQL                                             *
.  *                                                                    *
.  *     File Name    : oprsouaf.dat                                    *
.  *                                                                    *
.  *     Keys         : KEY 19                                          *
.  *                                                                    *
.  *                                                                    *
.  *     Modifications:                                                 *
.  **********************************************************************
.
OPRSOUA1  IFILE     SQL, FIXED=43, KEY="U1-6,7-12,13-13,14-16,17-17,18-18,19-19"
.
. NAME    TYPE   LENGTH  PHYSICAL START LOC.   DESCRIPTION
. ----    ----   ------  -------- ----------   -----------
OPSODATE  DIM       6        6        1        Period date (CCYYMM)
OPSODOCT  DIM       6        6        7        Operating surgeon code        
OPSOTYPE  DIM       1        1        13       Type of sess. "B"ooked or "E"xtra
OPSOOTYP  DIM       3        3        14       Operation type (OY)
DOPSOATY  DIM       1        1        17       Admission type    
.                                                     category "A ", 1st indic
.                                                     1 = Public
.                                                     2 = Private 
DOPSOOWN  DIM       1        1        18       Attnd. doct = oper. doct
.                                                     1 = yes
.                                                     2 = no
DOPSOTRN  DIM       1        1        19       Trainee? 1=Yes 2=No
OPSONCAS  FORM      6        4        20       Number of cases
OPSONOPR  FORM      6        4        24       Number of operations
OPSOTIME  FORM      6        4        28       Theatre time used (min)
OPSOSPAR  DIM       11       11       32       Spare Variable
.End of Record                       43
.
. redefine key variables
OPSOATYP  FORM      1                          Addmission type
OPSOOWN   FORM      1                          Attending doctor = oper. surgeon
OPSOTRNE  FORM      1                          Addmission type
.
