.  ***************************************************************************
.  *                                                                         *
.  *     Include Name : MRTLOCFD.INC                                         *
.  *                                                                         *
.  *     Function     : File Definition include for Medical Records Tracking *
.  *                    Locations                                            *
.  *                                                                         *
.  *     File Type    : SQL                                                  *
.  *                                                                         *
.  *     File Name    : mrtlocaf.dat                                         *
.  *                                                                         *
.  *     Index Info   : KEY7   KEY8   KEY37                                  *
.  *                                                                         *
.  *     Modifications:                                                      *
.  *      V10.03.01 26/03/2013  Ebon Clements  CAR 283238                    *
.  *                Added Index 4                                            *
.  *      V10.02.03 26/07/2011  Ebon Clements  CAR 243582                    *
.  *                Added MRLOTREC                                           *
.  *      V10.02.02 24/05/2011  Mike Laming    CAR 240724                    *
.  *                Add MRLOHOSP (in front of MRLOCODE) to Indexes           *
.  *      V10.02.01 31/02/2011  Jill Parkinson CAR 239574                    *
.  *                Increase printer size                                    *
.  *      V9.**.**  30/04/2007  Neelkamal Pyla CAR 137604                    *
.  *                Added MRLOBPRN - Bulk Request Printer                    *
.  *                01/05/2006  Jill Habasque  CAR 84263                     *
.  *                Added MRLOPRLC - Priority location                       *
.  *                14/09/2005  Peter Vela     CAR 74616                     *
.  *                Added MRTLOCA3                                           *
.  *                06/09/2004  Ebon Clements  CAR 53266                     *
.  *                Added Hospital ID                                        *
.  *                01/03/2001  Bronko sosic                                 *
.  *                            Added Stationery Code                        *
.  *                                                                         *
.  ***************************************************************************
.
MRTLOCA1  IFILE     SQL, FIXED=165, KEY="U55-57,1-4"
MRTLOCA2  IFILE     SQL, FIXED=165, KEY="U38-38,55-57,1-4"
MRTLOCA3  IFILE     SQL, FIXED=165, KEY="U5-34,55-57,1-4"
MRTLOCA4  IFILE     SQL, FIXED=165, KEY="U1-4,55-57"
.
.Name     Type      Length  Phys.  Start  Description
.-------  ----      ------  -----  -----  ------------------
MRLOCODE  DIM       4          4       1  Location Code
MRLODESC  DIM       30        30       5  Description
MRLOTYPE  DIM       3          3      35  Type (Cat LT)
MRLOINDC  DIM       1          1      38  Indicator   1 = Internal
.                                                     2 = External
MRLOSTAT  FORM      1          2      39  Status Indicator 0 = Active
.                                                          1 = Non Active
MRLOUSAG  FORM      1          2      41  Usage Indicator  0 = Not Used
.                                                          1 = Used
MRLOPRNT  DIM       6          6      43  Printer
MRLOSTCD  DIM       6          6      49  Stationery Code
MRLOHOSP  DIM       3          3      55  Hospital ID (pathspaf)
MRLOPRLC  DIM       1          1      58  Priority location (1=yes)
MRLOBPRN  DIM       6          6      59  Bulk Record Request Printer
MRLOTREC  DIM       1          1      65  Using Tracking Receipt For This 
.                                         Location  0=No, 1=Yes
MRLOSPAR  DIM       99         99     66  Spare
.
.End of Record                        165
.
