.  ************************************************************************
.  *                                                                      *
.  *  Include Name      :   EMRSECFD.INC                                  *
.  *                                                                      *
.  *  Function          :   File Definition include for Emergency         *
.  *                        Operator Security Table                       *
.  *                                                                      *
.  *  File Type         :   SQL                                           *
.  *                                                                      *
.  *  File Name         :   emrsecaf.dat                                  * 
.  *  Audit File                                                          *
.  *                                                                      * 
.  *  Keys              :   Key 4                                         *
.  *                                                                      *
.  *  Modifications     :                                                 *
.  *                                                                      *
.  ************************************************************************
.
.Data File Definition
.--------------------
EMRSECA1   IFILE SQL, FIXED=45, KEY="U1-4"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
EMSCOPER  DIM         4       4       1   Operator Id
EMSCSCR1  FORM        1       2       5   Data capture screen number 1 access
.                                            0=No   1=Yes
EMSCSCR2  FORM        1       2       7   Data capture screen number 2 access
.                                            0=No   1=Yes
EMSCSCR3  FORM        1       2       9   Data capture screen number 3 access
.                                            0=No   1=Yes
EMSCSCR4  FORM        1       2      11   Data capture screen number 4 access
.                                            0=No   1=Yes
EMSCSCR5  FORM        1       2      13   Data capture screen number 5 access
.                                            0=No   1=Yes
EMSCSPAR  DIM        30      30      15   Spare Variable
.
.End of Record                      45
