.  ****************************************************************************
.  *                                                                          *
.  *     Include Name : PATECDFD.INC                                          *
.  *                                                                          *
.  *     Function     : File Definition include for Patient                   *
.  *                    Episode Disease Coding                                *
.  *                                                                          *
.  *     File Type    : SQL                                                   *
.  *                                                                          *
.  *     File Name    : patecdaf.dat                                          *
.  *                                                                          *
.  *     Keys         : KEY13 KEY16 KEY25 KEY21 KEY22                         *
.  *                                                                          *
.  *     Programmer Note: The variables in this FD have the same 4-character  *
.  *                      prefix as those in PATEDAFD, so if you are adding   *
.  *                      new variables, then make sure they don't clash      *
.  *                      with those in PATEDAFD.                             *
.  *                                                                          *
.  *     Modifications:                                                       *
.  *--------------------------------------------------------------------------*
.  *      V11.01.01 06/04/2021  Thanh T        TSK 0901851                    *
.  *                Added contract care flag - PTEDCCFL                       *
.  *--------------------------------------------------------------------------*
.  *      V10.04.01 28/03/2017  Steve Armstrong                               *
.  *                Updated PTEDOSET description to include non-QLD values.   *
.  *      V10.04.01 10/02/2014  Patrick Adair  CAR 273419                     *
.  *                Change PTEDDESC to DIM 200, Increase record to FIXED=310  *
.  *      V10.02.01 22/03/2011  Mike Laming    CAR 240107                     *
.  *                Increase "Unique Number" fields to Form 3/Dim 3 for -     *
.  *                PTEDCNT/DPTEDCNT and PTEDUNQN/DPTEDUNQ. Fix Indexes       *
.  *      V9.10.01  30/04/2008  Mike Laming    CAR 166095                     *
.  *                Change PTEDDESC to DIM 100, Increase record to FIXED=210  *
.  *      V9.06.01  25/05/2006 Ebon Clements   CAR 104165                     *
.  *                Added diagnostic onset type for QLD                       *
.  *                07/06/2006 J.Tan           CAR 96476                      *
.  *                Added index 5
.  *      V9.05.B01 20/02/2006 J.Tan           CAR 91327                      *
.  *                Added 4th index                                           *
.  *      V9.03.01  28/10/2003 Sylvek Litewka  CAR 44328                      *
.  *                Added Free Format Description.                            *
.  *      V9.02.01  22/11/2001 Pat Dirito                                     *
.  *                Added DRG Driver                                          * 
.  *      V9.02.00  17/10/2001 Pat Dirito                                     *
.  *                Added Web User Security Code                              * 
.  *      V5.10.000 27/03/20001 Dave Matthews                                 *
.  *                Added C Class Level field                                 * 
.  *      V5.09.001 10/11/2000  Pat Dirito  - Added Coding Time               *
.  *      V5.08.B01 09/03/2000  Greg Horvat                                   *
.  *                Added the patmdisf variables & the 2nd & 3rd indexes      *
.  *                                                                          *
.  ****************************************************************************
.
.Data File Definition
.--------------------
PATECDA1  IFILE     SQL, FIXED=310, KEY="U1-8,9-10,11-13"
PATECDA2  IFILE     SQL, FIXED=310, KEY="U1-8,24-26,9-10,11-13"
PATECDA3  IFILE     SQL, FIXED=310, KEY="U14-22,1-8,24-26,9-10,11-13"
PATECDA4  IFILE     SQL, FIXED=310, KEY="U27-34,1-8,9-10,11-13"
PATECDA5  IFILE     SQL, FIXED=310, KEY="U1-8,14-22,9-10,11-13"
.
. NAME    TYPE   LENGTH  PHYSICAL START LOC.  DESCRIPTION
. ----    ----   ------  -------- ----------  -----------
DPTEDADM  DIM       8        8         1      Admin no
DPTEDEPN  DIM       2        2         9      Episode no
DPTEDCNT  DIM       3        3        11      Episode unique counter
PTEDCODE  DIM       9        9        14      Disease code
PTEDTYPE  DIM       1        1        23      Disease type (P,S,C,A,L)
DPTEDUNQ  DIM       3        3        24      Unique no - as per "patmrdaf"
PTEDDTCD  DIM       8        8        27      Date of coding (ccyymmdd)
PTEDOPER  DIM       4        4        35      Operator        (No longer used ?)
PTEDACDT  DIM       8        8        39      Accident date (ccyymmdd)
PTEDTIME  DIM       5        5        47      Coding Time (hh:mm)
PTEDCCCL  DIM       1        1        52      CC Class Level
PTEDUSID  DIM      10       10        53      Web User ID
PTEDDRGD  DIM       1        1        63      DRG Driver 0=Not Used 1=Used 
PTEDDESC  DIM     200      200        64      Free Format Description
PTEDOSET  DIM       1        1       264      Diagnostic onset type
.                                             For QLD sites:
.                                               " " = Unknown
.                                               1 = Condition present   
.                                               2 = Condition arises        
.                                             For non-QLD sites:
.                                               " " = Unknown
.                                               1 = Condition arises        
.                                               2 = Condition present   
PTEDCCFL  DIM       2        2       265      Contract Care flag
PTEDSPAR  DIM      43       43       267      Spare variable
.
.End of Record                       310
.
.Redefined Variables
.-------------------
PTEDADMN  FORM      8
PTEDEPNO  FORM      2
PTEDCNT   FORM      3
PTEDUNQN  FORM      3
.
SPTEDCOD  DIM       8
.
ECDFLAG   FORM      1
SECDKEY   DIM       16
