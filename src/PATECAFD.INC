.  Author: RKS       Date: 01/08/1993
.  **********************************************************************
.  *                                                                    *
.  *     Include Name : PATECAFD.INC                                    *
.  *                                                                    *
.  *     Function     : File Definition include for Patient             *
.  *                    Epsiode Admission/Discharge Details             *
.  *                                                                    *
.  *     File Type    : SQL                                             *
.  *                                                                    *
.  *     File Name    : patecaaf.dat                                    *
.  *                                                                    *
.  *     Keys         : KEY 10                                          * 
.  *                                                                    *
.  *     Modifications:                                                 *
.  *      V9.00.00  24/07/2001  Dean Cramer                             *
.  *                Increased PTEAWGHT from 4 to 6 characters           *
.  *      V5.06.01  29/06/1998  Greg Horvat                             *
.  *                Added PTEAUVTH - Unplanned visit to theatre         *
.  *                                                                    *
.  **********************************************************************
.
.Data File Definition
.--------------------
PATECAA1  IFILE     SQL, FIXED=81, KEY="U1-8,9-10"      *KEY10
.
. NAME    TYPE   LENGTH  PHYSICAL START LOC.  DESCRIPTION
. ----    ----   ------  -------- ----------  -----------
DPTEAADM  DIM       8        8        1       Admission Number        
DPTEAEPN  DIM       2        2        9       Episode Number    
PTEAWGHT  DIM       6        6       11       Patients Weight    
PTEACLSS  DIM       3        3       17       Admission Class (Cat P)
PTEACRIT  DIM       3        3       20       Admission Criterion (Cat U?)
PTEAUVTH  DIM       3        3       23       Unplanned visit to theatre (CatU?)
PTEASPAR  DIM      55       55       26       Spare Variable
.
.End of Record                       81
.
.Redefined Variables
.-------------------
PTEAADMN  FORM      8
PTEAEPNO  FORM      2
