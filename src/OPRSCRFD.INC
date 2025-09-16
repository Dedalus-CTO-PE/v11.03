.  **********************************************************************
.  *                                                                    *
.  *     Include Name : OPRSCRFD.INC                                    *
.  *                                                                    *
.  *     Function     : File Definition include for Theatre             *
.  *                    OPERATION SCREEN                                *
.  *                                                                    *
.  *     File Type    : SQL                                             *
.  *                                                                    *
.  *     File Name    : oprscraf.dat                                    *
.  *                                                                    *
.  *     Keys         : KEY 10                                          *
.  *                                                                    *
.  *     Author       : 08/09/90  J. Ceniza                             *
.  *                                                                    *
.  *     Modifications: V5.01.01 17/10/90 Glen Hobby                    *
.  *                             Fixed bug in write routine in IO       *
.  *                                                                    *
.  **********************************************************************
.Data File Definition
.--------------------
OPRSCRA1  IFILE    SQL, FIXED=79, KEY="U1-8,9-10"
.
. NAME    TYPE   LENGTH  PHYSICAL START LOC.   DESCRIPTION
. ----    ----   ------  -------- ----------   -----------
OPSCKEY   DIM       8        8        1        Unique id for screen
DOPSCFLD  DIM       2        2        9        Field Number
OPSCDROW  FORM      2        2        11       Display Row
OPSCDCOL  FORM      2        2        13       Display column
OPSCKROW  FORM      2        2        15       Keyin row
OPSCKCOL  FORM      2        2        17       Keyin column
OPSCVARN  FORM      2        2        19       Variable number
OPSCDESC  DIM       20       20       21       Field description
OPSCDSIZ  FORM      2        2        41       Description size
OPSCSIZE  FORM      2        2        43       Field size/Code desc. size 
OPSCDSRW  FORM      2        2        45       Row code for code desc.
OPSCDSCL  FORM      2        2        47       Column code for code desc.
OPSCMAND  FORM      1        2        49       Timefield Mandatory 
OPSCSPAR  DIM       28       28       51       Spare variable
.
.End of Record                        79
.
.Redefined forms for keys
.------------------------
OPSCFLD   FORM      2        2
