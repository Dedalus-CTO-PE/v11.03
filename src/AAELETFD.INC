. ******************************************************************************
. *                                                                            *
. *  Include Name     :  AAELETFD.INC                                          *
. *                                                                            *
. *  Function         :  File Definition Include for Accident & Emergency      *
. *                      A&E Letters                                           *
. *                                                                            *
. *  File Type        :  SQL                                                   *
. *                                                                            *
. *  File Name        :  aaeletaf.dat                                          *
. *                                                                            *
. *  Keys             :  KEY 6, KEY 6                                          *
. *                                                                            *
. *  I/O Include      :  AAELETIO.INC                                          *
. *                                                                            *
. *  Author           :  Rob Leonard  13/04/1994                               *
. *                                                                            *
. *  Modifications    :                                                        *
. ******************************************************************************
.
.Data File Definition
.--------------------
.
AAELETA1  IFILE     SQL, FIXED=99, KEY="U1-3,4-6"
AAELETA2  IFILE     SQL, FIXED=99, KEY="U4-6,1-3"
.
. Name    Type      Length  Physical  Start  Description
. ----    ----      ------  --------  -----  -----------
DAELELTN  DIM       3           3         1  Letter Number
DAELELIN  DIM       3           3         4  Line number for letter
AELETEXT  DIM       70         70         7  Line of letter
AELELVAR  FORM      1           2        77  Variable present
.                                              1 = Yes, 0 = No
AELEPBOT  FORM      2           2        79  Letter bottom margin
AELEPTOP  FORM      2           2        81  Letter top margin
AELEPPAG  FORM      2           2        83  Physical paper length (# of lines)
AELEPTAB  FORM      2           2        85  Letter left margin
AELESPAR  DIM       12         12        87  Spare variable
.End of Record                           99
.
.Redefine form fields from key
.-----------------------------
. Name    Type      Length  Description
. ----    ----      ------  -----------
AELELTNO  FORM      3       Letter Number
AELELINO  FORM      3       Line Number for letter
.
