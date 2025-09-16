.  ************************************************************************
.  *                                                                      *
.  *  Include Name      :   ALLHBTFD.INC                                  *
.  *                                                                      *
.  *  Function          :   Allied Health History Batch File              *
.  *                        (VINAH extraction data)                       *
.  *                                                                      *
.  *  File Type         :   SQL                                           *
.  *                                                                      *
.  *  File Name         :   allhbtaf.dat                                  * 
.  *                                                                      * 
.  *  Keys              :   KEY40                                         *
.  *                                                                      *
.  *  Modifications     :                                                 *
.  *                                                                      *
.  ************************************************************************
.
.Data File Definition
.--------------------
ALLHBTA1   IFILE SQL, FIXED=110, KEY="U1-20,21-40"
ALLHBTA2   IFILE SQL, FIXED=110, KEY="U21-40,1-20"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
ALHBFNAM  DIM       20       20       1   Extract Filename
ALHBBNUM  DIM       20       20      21   Batch Number
ALHBSTAT  DIM       1        1       41   Batch Status
.                                          0 = Extracted
.                                          1 = Submitted
.                                          2 = Rejected
.                                          3 = Resubmitted (Not used)
.                                          4 = Accepted
.                                          5 = Rejections resubmitted(Not used)
ALHBURNO  DIM       8        8       42   U/R Number
ALHBNBTN  DIM       20       20      50   Next Batch Number (for resubmissions)
ALHBPBTN  DIM       20       20      70   Previous Batch Number (for resub.)
ALHBSPAR  DIM       20       20      90   Spare Variable
.
.End of record                      110
