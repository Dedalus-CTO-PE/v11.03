.  **********************************************************************
.  *                                                                    *
.  *     Include Name : PATC1SFD.INC                                    *
.  *                                                                    *
.  *     Function     : File Definition include for Patient             *
.  *                    Clinical Statistics 1                           *
.  *                                                                    *
.  *     File Type    : SQL                                             *
.  *                                                                    *
.  *     File Name    : patc1sad.dat                                    *
.  *                                                                    *
.  *     Keys         : KEY 16,                                         *
.  *                                                                    *
.  *                                                                    *
.  **********************************************************************
.
PATC1SA1  IFILE     SQL, FIXED=40, KEY="U1-6,7-9,10-15,16-16"
.
. NAME    TYPE   LENGTH  PHYSICAL  START     DECRIPTION
. ----    ----   ------  --------  ------    ----------
PTC1DATE  DIM         6         6       1    Period Date (CCYYMM)
PTC1TYPE  DIM         3         3       7    Doctor Type (Cat DT)
PTC1DOCT  DIM         6         6      10    Doctor Code
PTC1TYPP  DIM         1         1      16    Type of patient
.                                            1=Public, 2=Private, 3=Compensable
PTC1DSCH  FORM        5         4      17    No of Discharged 
PTC1TBDY  FORM        5         4      21    No of Bed Days
PTC1PBDY  FORM        5         4      25    No of Bed Days in Period
PTC1SPAR  DIM        11        11      29    Spare Variable
.
.End of Record                         40
.
.
.
.
