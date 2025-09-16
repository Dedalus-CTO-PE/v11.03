.  ****************************************************************************
.  *                                                                          *
.  *     Include Name : WATCATFD.INC                                          *
.  *                                                                          *
.  *     Function     : File Definition include for Waiting List              *
.  *                    Category Change                                       *
.  *                    Currently Used for Categories BC, TP & WR             *
.  *                                                                          *
.  *     File Type    : SQL                                                   *
.  *                                                                          *
.  *     File Name    : watcataf.dat                                          *
.  *                                                                          *
.  *     Keys         : KEY30, KEY30 (old)                                    *
.  *                    KEY29, KEY29 (new)                                    *
.  *                                                                          *
.  *     Modifications: V5.00     22/03/89 S.Barcham                          *
.  *                              New Include                                 *
.  *                    V5.01.01  07/11/90 i chung                            *
.  *                              Changed incorrect keys size in WATCATIO.INC *
.  *                    V5.10.00  02/05/2001 Dean Cramer                      *
.  *                              Add  WTCAADTE, WTCAATIM & WTCAWEBI          *
.  *                                                                          *
.  ****************************************************************************
.
.          INCLUDE IO : WATCATIO.INC
.
WATCATA1    IFILE   SQL, FIXED=60, KEY="U1-8,28-29,9-16,17-25,26-27"
WATCATA2    IFILE   SQL, FIXED=60, KEY="U9-16,17-25,26-27,28-29,1-8"
.
.NAME       TYPE   LENGTH   PHYSICAL  START     DESCRIPTION
.----       ----   ------   --------  -----     -----------
WTCAEDAT    DIM       8           8      1      Effective Date (CCYYMMDD)
WTCAURNO    DIM       8           8      9      U/R Number
WTCAPROC    DIM       9           9     17      Procedure Code
DWTCAPCN    DIM       2           2     26      Procedure Count
WTCACATF    DIM       2           2     28      Change Category
WTCACODF    DIM       3           3     30      Change Code From
WTCACODT    DIM       3           3     33      Change Code To
WTCAADTE    DIM       8           8     36      Alteration Date
WTCAATIM    DIM       5           5     44      Alteration Time 
WTCAWEBI    DIM      10          10     49      WEB User ID     
WTCASPAR    DIM       1           1     59      Spare Variable
.
.End of Record                          60
.
.    redefine form fields from key
.    -----------------------------
.NAME      TYPE   LENGTH  PHYSICAL   START     DESCRIPTION
.----      ----   ------  --------   -----     -----------
WTCAPCNT    FORM      2        2       26      Procedure Count
