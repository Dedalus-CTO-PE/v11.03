. PATHCSHT.INC
. ------------
.
.          FILE               :  PATHCSHT
.          DESCRIPTION        :  HCS DOCTOR TRANSFER DATA AUDIT FILE
.          RECORD LENGTH      :  64
.
PATHCHT1   IFILE     SQL, FIXED=64, KEY="U1-8"
SAVHCSHT   FILE      SQL, FIXED=64
.
.          MODIFICATIONS: V5.00 02/06/89 K.Peak
.                               Change U/R & Admission to 8 characters
.
. NAME     TYPE   LENGTH   PHYSICAL  START LOC.   DESCRIPTION
. ----     ----   ------   --------  ----------   -----------
DHHTUNIQ   DIM       8           8         1      Unique Key from Control file
HHTURNO    DIM       8           8         9      U/R Number
HHTDATE    DIM       6           6        17      Transfer Date
HHTCODE    DIM       6           6        23      New Doctor Code
HHTADMN    FORM      8           5        29      Admission Number
HHTSPAR    DIM      30          30        34      Spare Variable
.
.END OF RECORD                            64
. 
.  redefine form fields from key
.  -----------------------------
. NAME     TYPE      LENGTH     START LOC.   DESCRIPTION
. ----     ----      ------     ----------   -----------
HHTUNIQ    FORM         8             1      Unique Key from Control file
