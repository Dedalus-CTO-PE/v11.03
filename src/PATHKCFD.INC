. V5.07.001 07/08/1998 Jim Stathopoulos  507 Changes 
. *****************************************************************************
. *                                                                           *
. * Include Name  : PATHKCFD.INC                                              *
. *                                                                           *
. * Function      : File Def'n Include for Patient                           *
. *                 Hong Kong Charging                                        *
. *                                                                           *
. * File Type     : SQL                                                       *
. *                                                                           *
. * File Name     : pathkcaf.dat                                              *
. *                                                                           *
. * Keys          : KEY15                                                     *
. *                                                                           *
. * I/O Include   : PATHKCIO.INC                                              *
. *                                                                           *
. *****************************************************************************
.
.Data File Definition
.--------------------
PATHKCA1  IFILE     SQL, FIXED=71, KEY="U1-3,4-6,7-9,10-12,13-15"
.
. Name    Type      Length  Phys.  Start  Description
. ----    ----      ------  -----  -----  --------------------------------------
PTHKCLAM  DIM       3           3      1  Claim Code      (Cat "CL")
PTHKDEPT  DIM       3           3      4  Department      (Cat "A ")
PTHKDIET  DIM       3           3      7  Diet Type       (Cat "DC")
PTHKBTYP  DIM       3           3     10  Bed Type        (Cat "BT")
DPTHKAGE  DIM       3           3     13  Patient Age Range
PTHKCCHG  FORM      12.2        8     16  Charge
PTHKDESC  DIM       30          30    24  Description
PTHKSPAR  DIM       17          17    54  Spare Variable
.End of Record                        71
.
.Redefine form fields
.--------------------
PTHKAGER  FORM      3                     Patient Age Range
PTHKCHGE  FORM      6.2   
