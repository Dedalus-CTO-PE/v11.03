. V6.06.001 21/06/1999 P.D Created FD                                        
. *----------------------------------------------------------------------
. * Include Name  :   CORDTTFD.INC
. *
. * Function      :   File Def'n Include for WEB              
. *                   Correspondence Details             
. *
. * File Type     :   SQL
. *
. * File Name     :   cordttaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
CORDTTA1   IFILE    SQL, FIXED=120, KEY="U1-5,6-10"                             
CORDTTA2   IFILE    SQL, FIXED=120, KEY="U1-5,11-13,6-10"                       
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
CODTCTYP  DIM       5      5        1     Correspondence Type                
CODTFLNO  DIM       5      5        6     Download Field No                  
CODTDSEQ  DIM       3      3        11    Download Sequence                  
CODTHEAD  DIM       25     25       14    Heading Name                       
CODTCNVT  DIM       1      1        39    Convert Text                       
.                                         0 - No Conversion
.                                         1 - Convert to Title Text
.                                         2 - Convert to Upper Case
.                                         3 - Convert to Lower Case
.
CODTSPAR  DIM       80     80       40    Spare                              
.
.End of Record                      120  
.
