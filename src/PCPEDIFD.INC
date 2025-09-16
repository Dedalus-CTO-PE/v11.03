. *****************************************************************************
. *                                                                           *
. * Include Name  : PCPEDIFD.INC                                              *
. *                                                                           *
. * Function      : File Def'n Include for Patient Care Plans                 *
. *                 Care Plan Edit Master Table                               *
. *                                                                           *
. * File Type     : SQL                                                       *
. *                                                                           *
. * File Name     : pcpediaf.dat                                              *
. *                                                                           *
. * Keys          : KEY20                                                     *
. *                                                                           *
. * I/O Include   : PCPEDIIO.INC                                              *
. *                                                                           *
. * Author        : Justin Coates 19/11/1991                                  *
. *                                                                           *
. * Modifications :                                                           *
. *      V9.02.00  30/12/2002 Tracey Nguyen srf 23497                         *
. *                r5.10 Care Plans Port to V9                                *
. *****************************************************************************
.
.Data File Definition
.--------------------
PCPEDIA1  IFILE     SQL, FIXED=31, KEY="U1-2,3-11,12-20"
.
. Name    Type      Length  Phys.  Start  Description
. ----    ----      ------  -----  -----  -----------
DPCEDTYP  DIM       2           2      1  Type of Record   
.                                           1 = Rel. fact/defining char.
.                                           2 = Defining char./outcomes
.                                           3 = Outcomes/interventions
.                                           4 = Interventions/frequencies
PCEDCODE  DIM       9           9      3  First Code in pair
PCEDSUB   DIM       9           9     12  Second Code in pair
PCEDSPAR  DIM       10         10     21  Spare variable
.
.End of Record                        31
.
.Redefine form fields from key
.-----------------------------
. Name    Type      Length  Start  Description
. ----    ----      ------  -----  -----------
PCEDTYPE  FORM      2           1  Type of Record
.
