.  ************************************************************************
.  *                                                                      *
.  *  Include Name      :   PRIGRPFD.INC                                  *
.  *                                                                      *
.  *  Function          :   File Definition include for Private Practice  *
.  *                        Item Group Table                              *
.  *                                                                      *
.  *                        This file is used to store those item codes   *
.  *                        which cover secondary item codes in the       *
.  *                        billing process.                              *
.  *                                                                      *
.  *  File Type         :   SQL                                           *
.  *                                                                      *
.  *  File Name         :   prigrpaf.dat                                  *
.  *                                                                      *
.  *  Keys              :   KEY 34                                        *
.  *                                                                      *
.  *  Modifications     :                                                 *
.  *                                                                      *
.  ************************************************************************
.Data File Definition
.--------------------
PRIGRPA1   IFILE SQL, FIXED=39, KEY="U1-2,3-11,12-14,15-22,23-31,32-34"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
DPRGPFLG  DIM       2      2        1     Item Flag
.                                              0 = MBS Item
.                                              1 = AMA Item
PRGPITM1  DIM       9      9        3     MBS/AMA Item Number (Primary Item)
PRGPSUB1  DIM       3      3        12    MBS Subitem Number
PRGPDATE  DIM       8      8        15    Date effective from
.
PRGPITM2  DIM       9      9        23    MBS/AMA Item Number (Secondary Item)
PRGPSUB2  DIM       3      3        32    MBS Subitem Number
.
PRGPSPAR  DIM       4      4        35    Spare Variable
.
.End of Record                      39
.
.
. Redefine form fields from key
. -----------------------------
.
PRGPFLAG  FORM      2
