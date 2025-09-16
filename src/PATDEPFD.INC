. ******************************************************************************
. *                                                                            *
. *  Include Name     :  PATDEPFD.INC                                          *
. *                                                                            *
. *  Function         :  File Def'n Include for Patient                        *
. *                      Department Ward                                       *
. *                                                                            *
. *  File Type        :  SQL                                                   *
. *                                                                            *
. *  File Name        :  patdepaf.dat                                          *
. *                                                                            *
. *  Keys             :  KEY14, KEY14                                          *
. *                                                                            *
. *  I/O Include      :  PATDEPIO.INC                                          *
. *                                                                            *
. *  Author           :  Justin Coates 08/02/1991                              *
. *                                                                            *
. *  Modifications    :                                                        *
. ******************************************************************************
.
.Data File Definition
.--------------------
.
PATDEPA1  IFILE     SQL, FIXED=68, KEY="U1-3,4-6,7-14"
PATDEPA2  IFILE     SQL, FIXED=68, KEY="U4-6,1-3,7-14"
.
. Name    Type      Length  Physical  Start  Description
. ----    ----      ------  --------  -----  -----------
PTDPDEPT  DIM       3           3         1  Department Code (Cat A)
PTDPWARD  DIM       3           3         4  Ward Code
PTDPDATE  DIM       8           8         7  Effective Date (CCYYMMDD)
PTDPNBED  FORM      4           3        15  Number of Beds for Ward/Department
PTDPSPAR  DIM       50         50        18  Spare variable
.
.End of Record                           68
.
