. *************************************************************************
. *                                                                       *
. *  Include Name :   FMSRDFFD.INC                                        *
. *                                                                       *
. *  Function     :   File Def'n Include for Financial Management         *
. *                   Reporting Defaults Table                            *
. *                                                                       *
. *  File Type    :   SQL                                                 *
. *                                                                       *
. *  File Name    :   fmsrdfaf.dat                                        *
. *                                                                       *
. *  Keys         :   KEY3                                                *
. *                                                                       *
. *  Modifications:   08.07.91 Neeriem Dye                                *
. *                            Added FMRDSTAT variable                    *
. *                   30.07.91 Neeriem Dye                                *
. *                            Added FMRDSUPP field (ignore FMRDSTAT var) *
. *                   15.03.93 Neeriem Dye                                *
. *                            Added FMRDSHED                             *
. *                                                                       *
. *************************************************************************
.
FMSRDFA1  IFILE     SQL, FIXED=91, KEY="U1-3"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
FMRDCOD   DIM       3      3        1     Parameter Code
.
FMRDDES   DIM       35     35       4     Parameter Description
FMRDLED   DIM       2      2        39    Ledger
FMRDREP   DIM       2      2        41    Report Sequence
FMRDRS    DIM       3      3        43    Report Style
FMRDPT    DIM       2      2        46    Printer Type
FMRDLEV   DIM       3      3        48    Print From Report Level
FMRDFPR   DIM       5      5        51    First Print Position *JR *ZF
FMRDTPR   DIM       5      5        56    Last Print Position *JR *ZF
FMRDCAS   FORM      1      2        61    Cash Only (Y/N) 0 = No
FMRDCBT   DIM       4      4        63    Budget Type
FMRDPBT   DIM       4      4        67    Alternative Budget Type
FMRDDOP   FORM      1      2        71    Posting Account Description
.                                           0 = Use Account Code
.                                           1 = Use Cost Center
.                                           2 = Use Subjective
.
FMRDZER   FORM      1      2        73    Print Zero Accounts (Y=1,N=0)
FMRDPRJ   FORM      1      2        75    Projection Type 
.                                         0=Adjust Budget by Ytd Variance
FMRDSTAT  FORM      1      2        77    Not Used !!!!
FMRDSUPP  DIM       1      1        79    Suppress Post Ac Print (Y=1,N=0)
FMRDSHED  DIM       1      1        80    Suppress Heading Ac Print (Y=1,N=0)
FMRDCRIN  DIM       1      1        81    Use Credit Indicator (Y=1,N=0)
.
FMRDSPAR  DIM       9      9        82    Spare
.
.End of Record                      91
.
