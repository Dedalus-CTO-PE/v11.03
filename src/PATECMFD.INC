.  Author: RKS       Date: 01/08/1993
.  **********************************************************************
.  *                                                                    *
.  *     Include Name : PATECMFD.INC                                    *
.  *                                                                    *
.  *     Function     : File Definition include for Patient             *
.  *                    Episode Morbidity Changes                       *
.  *                                                                    *
.  *     File Type    : SQL                                             *
.  *                                                                    *
.  *     File Name    : patecmaf.dat                                    *
.  *                                                                    *
.  *     Keys         : KEY 18, KEY 18                                  * 
.  *                                                                    *
.  *     Modifications:                                                 *
.  **********************************************************************
.
PATECMA1  IFILE     SQL, FIXED=40, KEY="U1-8,9-10,11-18"      *KEY18
PATECMA2  IFILE     SQL, FIXED=40, KEY="U11-18,1-8,9-10"      *KEY18
.
. NAME    TYPE   LENGTH  PHYSICAL START LOC.  DESCRIPTION
. ----    ----   ------  -------- ----------  -----------
DPTEMADM  DIM       8        8        1       Admission Number        
DPTEMEPN  DIM       2        2        9       Episode Number    
PTEMCDTE  DIM       8        8       11       Morbidity Change Date (CCYYMMDD)
PTEMNEWF  DIM       1        1       19       1st Record Flag
.                                                 " "  = New    
.                                                 "C"  = Change
PTEMSPAR  DIM      20       20       20       Spare Variable
.
.End of Record                       40
.
.Redefined Variables
.-------------------
PTEMADMN  FORM      8
PTEMEPNO  FORM      2
