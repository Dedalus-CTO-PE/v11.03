. IBASECUR.INC
. ------------
.
.          FILE               :  ibasecur     
.          DESCRIPTION        :  PROGRAM SECURITY FILE
.          RECORD LENGTH      :  50 
.          DUPLICATES ALLOWED ?  NO
.
. * Function      :   File Definition Include for Common
. *                   Program Security Details
.
. * File Type     :   SQL
.
. * File Name     :   ibasecuf.dat
.
.          19/08/91 Steve O'Gorman
.                   Added Alias,Spare and Second Index.
.                   Altered length of file.
.
.
IBASECU1  IFILE      SQL, FIXED=100, KEY="U1-8"
IBASECU2  IFILE      SQL, FIXED=100, KEY="U51-58,1-8"
.
. NAME     TYPE      LENGTH  PHYSICAL   START LOC.   DESCRIPTION
. ----     ----      ------  --------   ----------   -----------
PSECNME    DIM          8       8            1       PROGRAM NAME   
PSECDESC   DIM         30      30            9       PROGRAM DESCRIPTION  
PSECLEV    FORM         1       2           39       SECURITY LEVEL      
PSECPW     DIM          8       8           41       PASSWORD            
PPAPER     FORM         2       2           49       PAPER TYPE
.                                                    0 = No paper
.                                                    1 = Plain Paper
.                                                    2 = Special Stationary
.                                                    No other values accepted
.
PSEALIAS   DIM          8       8           51       Program Alias
PSECSPAR   DIM         41      41           59       Spare Variable
.
.End of Record                             100
.
