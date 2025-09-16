.  ****************************************************************************
.  *                                                                          *
.  *     Include Name : MRTMASFD.INC                                          *
.  *                                                                          *
.  *     Function     : File Definition include for Medical Records Tracking  *
.  *                    Master Details                                        *
.  *                                                                          *
.  *     File Type    : SQL                                                   *
.  *                                                                          *
.  *     File Name    : mrtmasaf.dat                                          *
.  *                                                                          *
.  *    Index Values  :   KEY20   KEY10   KEY20   KEY20                       *
.  *                                                                          *
.  *     Modifications:                                                       *
.  *      V10.02.01 19/05/2011  Mike Laming   CAR 240724                      *
.  *                Add Hospital Id.s for Original, Home and Current locations*
.  *                Change Key Lengths                                        *
.  *      V9.08.02  25/01/2007 Peter Vela CAR 127930                          *
.  *                Added Web User ID Created                                 *
.  *                Added Date/Time Updated                                   *
.  *                Added Web User ID Updated                                 *
.  *      V9.08.01  12/12/2006 Peter Vela CAR 127930                          *
.  *                Added date/time created.                                  *
.  *                Increased file length                                     *
.  *      V9.02.01  Ebon Clements                                             *
.  *                Added index four                                          * 
.  *      V5.10.00  Dave Matthews                                             *
.  *                Added Episode Date                                        * 
.  *      V5.09.01  Pat Dirito                                                *
.  *                Added Redefined Field MRMAVOLN                            * 
.  *      V5.09.00  Bronko Sosic                                              *
.  *                Added Current Location & Microfilm Address                *
.  *                                                                          *
.  *************************************************************************
.
MRTMASA1   IFILE    SQL, FIXED=200, KEY="U1-8,9-11,12-15,16-18,19-20"
MRTMASA2   IFILE    SQL, FIXED=200, KEY="U44-53"
MRTMASA3   IFILE    SQL, FIXED=200, KEY="U1-8,19-20,9-11,12-15,16-18"
MRTMASA4   IFILE    SQL, FIXED=200, KEY="U1-8,16-18,19-20,9-11,12-15"
.
.Name     Type      Length  Phys.  Start  Description
.-------  ----      ------  -----  -----  -------------------
MRMAURNO  DIM       8         8        1  Patient's U/R Number
MRMAHHOS  DIM       3         3        9  MR Home Hospital Id.
MRMAHLOC  DIM       4         4       12  MR Home Location
MRMADOTY  DIM       3         3       16  Type of Document
DMRMAVOL  DIM       2         2       19  Volume Number
MRMASTAT  DIM       3         3       21  Status (Cat RS)
MRMACOMM  DIM       20        20      24  Comments
MRMAKEY   DIM       10        10      44  Key for History File
MRMACHOS  DIM       3         3       54  MR Current Hospital Id.
MRMACLOC  DIM       4         4       57  MR Current Location
MRMAFILM  DIM       25        25      61  MicroFilm Address
MRMAEPDT  DIM       8         8       86  'Episode To' Date (CCYYMMDD)
MRMADTCR  DIM       8         8       94  Date Created
MRMATMCR  DIM       8         8       102 Time Created
MRMACUID  DIM       10        10      110 Web User ID Created (websecaf)
MRMADTUP  DIM       8         8       120 Date Updated
MRMATMUP  DIM       8         8       128 Time Updated
MRMAUUID  DIM       10        10      136 Web User ID Updated (websecaf)
MRMAOHOS  DIM       3         3       146 MR Originating Hospital Id.
MRMASPAR  DIM       51        51      149 Spare Variable
.End of Record                        200
.
.Redefined Variables
.-----------------------------------
MRMAVOLN  FORM      2
