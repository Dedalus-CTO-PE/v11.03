. ************************************************************************
. *                                                                      *
. *  Include Name      :   ACCRFPFD.INC                                  *
. *                                                                      *
. *  Function          :   File Def'n Include for ACC Referral Details   *
. *                                                                      *
. *  File Type         :   SQL                                           *
. *                                                                      *
. *  File Name         :   accrfpaf.dat                                  *
. *                                                                      *
. *  Keys              :   KEY23                                         *
. *                                                                      *
. *  Modifications     :                                                 *
. *                                                                      *
. *      07/06/2007  Janet George  CAR 142467                            *
. *                  FD created.                                         *
. ************************************************************************
.
.Data File Definition
.--------------------
ACCRFPA1   IFILE    SQL, FIXED=387, KEY="U1-20,21-23"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
ACRFACCN  DIM       20     20       1     ACC Number
DACRFCNT  DIM       3      3        21    Count
ACRFRPRT  DIM       3      3        24    Referral Provider Type (Category IW) 
ACRFOPRT  DIM       80     80       27    Other Provider Type
ACRFSTC1  DIM       100    100      107   Suggested Treatment Comment Line 1
ACRFSTC2  DIM       100    100      207   Suggested Treatment Comment Line 2
ACRFSTC3  DIM       50     50       307   Suggested Treatment Comment Line 3
ACRFSPAR  DIM       30     30       357   Spare Variable
.
.End of Record                      387
.
.  Redefine form fields from key
. ------------------------------
ACRFCONT  FORM      3 
