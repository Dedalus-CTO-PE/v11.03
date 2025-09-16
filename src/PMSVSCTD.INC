.--------------------------------------------------------------------------
.PMSVSCTD.INC
.--------------------------------------------------------------------------
.Clinical Coding Value Set Codes
.
.
PTVSC001  DIM       3      * Value Set ID
PTVSC002  DIM       30     * Code 
PTVSC003  DIM       100    * Preferred Term
PTVSC004  DIM       100    * Fully Specified Name
PTVSC005  DIM       1      * Active Flag
.                            0 or Blank = No
.                            1 = Yes
PTVSC006  DIM       30     * Code
PTVSC007  DIM       30     * Code
.
FILTVACT  DIM       1      * Value Set Active Filter
FILTVSID  DIM       3      * Value Set ID Filter
FILTVSCD  DIM       30     * Value Set Code Filter
FILTVSPT  DIM       256    * Preferred Term Filter
.
CODSYSID  DIM       3      * Coding System ID (Value Set ID)
SAVKEY83  DIM       83     * Saved Full Key
STARTCOD  DIM       30     * Starting Key (Code)
