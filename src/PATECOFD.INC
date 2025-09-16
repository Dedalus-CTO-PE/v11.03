.  ****************************************************************************
.  *                                                                          *
.  *     Include Name : PATECOFD.INC                                          *
.  *                                                                          *
.  *     Function     : File Definition include for Patient                   *
.  *                    Episode Operation Coding                              *
.  *                                                                          *
.  *     File Type    : SQL                                                   *
.  *                                                                          *
.  *     File Name    : patecoaf.dat                                          *
.  *                                                                          *
.  *     Keys         : KEY13 KEY16 KEY25 KEY21                               *
.  *                                                                          *
.  *     Modifications:                                                       *
.  *--------------------------------------------------------------------------*
.  *      V11.01.01 06/04/2021  Thanh T        TSK 0901851                    *
.  *                Added contract care flag - PTEOCCFL                       *
.  *--------------------------------------------------------------------------*
.  *      V10.04.01 10/02/2014  Patrick Adair  CAR 273419                     *
.  *                Change PTEDDESC to DIM 200, Increase record to FIXED=321  *
.  *      V10.02.01 22/03/2011  Mike Laming    CAR 240107                     *
.  *                Increase "Unique Number" fields to Form 3/Dim 3 for -     *
.  *                PTEOCNT/DPTEOCNT and PTEOUNQN/DPTEOUNQ. Fix Indexes       *
.  *      V9.10.01  30/04/2008  Mike Laming    CAR 166095                     *
.  *                Change PTEODESC to DIM 100, Increase record to FIXED=221  *
.  *      V9.05.B01 20/02/2006 J.Tan           CAR 91327                      *
.  *                Added 4th index                                           *
.  *      V9.03.01  28/10/2003 Sylvek Litewka  CAR 44328                      *
.  *                Added Free Format Description.                            *
.  *      V9.02.01  12/12/2002 Pat Dirito                                     *
.  *                Added DRG Driver                                          *
.  *      V9.02.00  17/10/2001 Pat Dirito                                     *
.  *                Added Web User Security Code                              *
.  *      V5.09.001 10/11/2000  Pat Dirito  - Added Coding Time               *
.  *      V5.08.B01 09/03/2000  Greg Horvat                                   *
.  *                Added the patmoprf variables & the 2nd & 3rd indexes      *
.  *                                                                          *
.  ****************************************************************************
.
.Data File Definition
.--------------------
PATECOA1  IFILE     SQL, FIXED=321, KEY="U1-8,9-10,11-13"
PATECOA2  IFILE     SQL, FIXED=321, KEY="U1-8,24-26,9-10,11-13"
PATECOA3  IFILE     SQL, FIXED=321, KEY="U14-22,1-8,24-26,9-10,11-13"
PATECOA4  IFILE     SQL, FIXED=321, KEY="U27-34,1-8,9-10,11-13"
.
. NAME    TYPE   LENGTH  PHYSICAL START LOC.  DESCRIPTION
. ----    ----   ------  -------- ----------  -----------
DPTEOADM  DIM       8        8         1      Admin no
DPTEOEPN  DIM       2        2         9      Episode no
DPTEOCNT  DIM       3        3        11      Episode unique counter
PTEOCODE  DIM       9        9        14      Operation code
PTEOTYPE  DIM       1        1        23      Operation type (O,I,N,X)
DPTEOUNQ  DIM       3        3        24      Unique no - as per "patmroaf"
PTEODTCD  DIM       8        8        27      Date of coding (ccyymmdd)
PTEOOPER  DIM       4        4        35      Operator id    (No longer used ?)
PTEODATE  DIM       8        8        39      Operation date (ccyymmdd)
PTEOSTTM  DIM       5        5        47      Operation start time (hh:mm)
PTEOEDTM  DIM       5        5        52      Operation end time (hh:mm)
PTEOTIME  DIM       5        5        57      Coding Time (hh:mm)
PTEOUSID  DIM      10       10        62      Web User ID
PTEODRGD  DIM       1        1        72      DRG Driver 0=Not Used 1=Used
PTEODESC  DIM     200      200        73      Free Format Description
PTEOCLIN  DIM      10       10       273      Procedure Clinician
PTEOCCFL  DIM       2        2       283      Contract care flag
PTEOSPAR  DIM      36       36       285      Spare variable
.
.End of Record                       321
.
.Redefined Variables
.-------------------
PTEOADMN  FORM      8
PTEOEPNO  FORM      2
PTEOCNT   FORM      3
PTEOUNQN  FORM      3
.
SPTEOCOD  DIM       9
.
ECOFLAG   FORM      1
SECOKEY   DIM       16
