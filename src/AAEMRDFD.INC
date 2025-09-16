. *****************************************************************************
. *                                                                           *
. * Include Name  : AAEMRDFD.INC                                              *
. *                                                                           *
. * Function      : File Def'n Include for Accident Emergency                 *
. *                 Patients Diagnosis codes                                  *
. *                                                                           *
. * File Type     : SQL                                                       *
. *                                                                           *
. * File Name     : aaemrdaf.dat                                              *
. *                                                                           *
. * Keys          : KEY11                                                     *
. *                                                                           *
. * I/O Include   : AAEMRDIO.INC                                              *
. *                                                                           *
. * Author        : LOFTY         07/10/1993                                  *
. *                                                                           *
. * Modifications :                                                           *
. *****************************************************************************
.
.Data File Definition
.--------------------
AAEMRDA1  IFILE     SQL, FIXED=70, KEY="U1-8,9-9,10-11"
.
. Name    Type      Length  Phys.  Start  Description
. ----    ----      ------  -----  -----  --------------------------------------
DAEMREVN  DIM       8           8      1  A&E event number
AEMRTYPE  DIM       1           1      9  Type of Code  D = diagnosis
.                                                       I = investigation
.                                                       T = treatment
.                                                       Z = research
DAEMRUNI  DIM       2           2     10  Unique counter
AEMRCODE  DIM       6           6     12  Code 
AEMRDTCC  DIM       8           8     18  Date completed coding 
AEMROPCC  DIM       4           4     26  Operator who completed coding
AEMRSPAR  DIM       40         40     30  Spare variable
.End of Record                        70
.
AEMREVNT  FORM      8
AEMRUNIQ  FORM      2
.
