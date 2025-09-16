. ******************************************************************************
. *  Include Name  : WATUPCFD
. *  Function      : File Definition include for Waiting List
. *                  Unit/Doctor Priority changes
. *  File Type     : SQL
. *  File Name     : watupcaf.dat
. *  Keys          : KEY21
. *  Programmer    : Bill Dew 09/07/1990
. *  Modifications :
. ******************************************************************************
.
WATUPCA1   IFILE SQL, FIXED=40, KEY="U1-6,7-9,10-15,16-18,19-21"
.
.NAME      TYPE   LENGTH  PHYSICAL   START     DESCRIPTION
.----      ----   ------  --------   -----     -----------
WTUPDATE    DIM        6         6       1     Period Date (CCYYMM)
WTUPUNIT    DIM        3         3       7     Unit/Clinic Code (Category WU) 
WTUPDOCT    DIM        6         6      10     Doctor Code (From PATDO1FD)
WTUPOPTY    DIM        3         3      17     Old Priority code (cat TP)
WTUPNPTY    DIM        3         3      19     New Priority code (cat TP)
WTUPNUMB    FORM       8         5      22     Number of priority code changes
WTUPSPAR    DIM       13        13      27     Spare Variable             
.
.End of Record                          40
.
.******************************************************************************
