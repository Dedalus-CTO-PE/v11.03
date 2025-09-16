. *****************************************************************************
. *                                                                           *
. * Include Name  : WATSCUFD.INC                                              *
. *                                                                           *
. * Function      : File Def'n Include for Waiting List                       *
. *                 Unit/Clinic Suspensions                                   *
. *                                                                           *
. * File Type     : SQL                                                       *
. *                                                                           *
. * File Name     : watscuaf.dat                                              *
. *                                                                           *
. * Keys          : KEY18                                                     *
. *                                                                           *
. * Author        : Justin Coates 15/02/1993                                  *
. *                                                                           *
. * Modifications :                                                           *
. *****************************************************************************
.
.Data File Definition
.--------------------
WATSCUA1  IFILE     SQL, FIXED=50, KEY="U1-6,7-9,10-15,16-18"
.
. Name    Type      Length  Phys.  Start  Description
. ----    ----      ------  -----  -----  --------------------------------------
WTSCDATE  DIM       6          6       1  Period Date (CCYYMM)
WTSCUNIT  DIM       3          3       7  Unit/Clinic Code (Category WU) 
WTSCDOCT  DIM       6          6      10  Doctor Code (From PATDO1FD)
WTSCPRTY  DIM       3          3      16  Priority (Cat TP)
WTSCSBEU  FORM      6          4      19  Number added to List and un-susp.
WTSCSBES  FORM      6          4      23  Number added to List and suspended
WTSCSSEU  FORM      6          4      27  Number who became unsuspended
WTSCSUES  FORM      6          4      31  Number who became suspended
WTSCLPUN  FORM      6          4      35  Number un-susp. at end of Last Period
WTSCLPSU  FORM      6          4      39  Number susp. at end of Last Period
WTSCDELT  FORM      6          4      43  Number of deletions in period
WTSCSPAR  DIM       3          3      47  Spare variable
.End of Record                        50
.
