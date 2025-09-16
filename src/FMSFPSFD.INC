. *************************************************************************
. *                                                                       *
. *  Include Name   : FMSFPSFD.INC                                        *
. *                                                                       *
. *  Function       : File Def'n Include for Financial Management         *
. *                   Financial Period Summary Table                      *
. *                                                                       *
. *  File Type      : SQL                                                 *
. *                                                                       *
. *  File Name      : fmspYYYY.dat                                        *
. *                   Where YYYY = Financial Year                         * 
. *                                                                       *
. *  Keys           : KEY14                                               *
. *                                                                       *
. *  Modifications  : 21.10.93 Neeriem Dye                                *
. *                   Modified for new committed expenditure field        *
. *                   srf HWK                                             *
. *                                                                       *
. *************************************************************************
.
FMSFPSA1  IFILE SQL, FIXED=644, KEY="U1-2,3-14"  
FMSFPSA2  IFILE SQL, FIXED=644, KEY="U1-2,3-14"  * used for last years Calc
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
FMFPCULD  DIM       2      2        1     Ledger
FMFPCUAC  DIM       12     12       3     Account
.
FMFPCBF   FORM      12.2   8        15    Cash Brought Forward
FMFPC01   FORM      12.2   8        23    Cash Period 1
FMFPC02   FORM      12.2   8        31    Cash Period 2
FMFPC03   FORM      12.2   8        39    Cash Period 3
FMFPC04   FORM      12.2   8        47    Cash Period 4
FMFPC05   FORM      12.2   8        55    Cash Period 5
FMFPC06   FORM      12.2   8        63    Cash Period 6
FMFPC07   FORM      12.2   8        71    Cash Period 7
FMFPC08   FORM      12.2   8        79    Cash Period 8
FMFPC09   FORM      12.2   8        87    Cash Period 9
FMFPC10   FORM      12.2   8        95    Cash Period 10
FMFPC11   FORM      12.2   8        103   Cash Period 11
FMFPC12   FORM      12.2   8        111   Cash Period 12
FMFPC13   FORM      12.2   8        119   Cash Period 13
.
FMFPABF   FORM      12.2   8        127   Accrual Brought Forward
FMFPA01   FORM      12.2   8        135   Accrual Period 1
FMFPA02   FORM      12.2   8        143   Accrual Period 2
FMFPA03   FORM      12.2   8        151   Accrual Period 3
FMFPA04   FORM      12.2   8        159   Accrual Period 4
FMFPA05   FORM      12.2   8        167   Accrual Period 5
FMFPA06   FORM      12.2   8        175   Accrual Period 6
FMFPA07   FORM      12.2   8        183   Accrual Period 7
FMFPA08   FORM      12.2   8        191   Accrual Period 8
FMFPA09   FORM      12.2   8        199   Accrual Period 9
FMFPA10   FORM      12.2   8        207   Accrual Period 10
FMFPA11   FORM      12.2   8        215   Accrual Period 11
FMFPA12   FORM      12.2   8        223   Accrual Period 12
FMFPA13   FORM      12.2   8        231   Accrual Period 13
.
FMFPCOM   FORM      12.2   8        239   Committed Expenditure (Rec not Inv)
.
. Fields in Dollar only Scale
.
FMFPCBFD  FORM      12     7        247   Cash Brought Forward
FMFPC01D  FORM      12     7        254   Cash Period 1
FMFPC02D  FORM      12     7        261   Cash Period 2
FMFPC03D  FORM      12     7        268   Cash Period 3
FMFPC04D  FORM      12     7        275   Cash Period 4
FMFPC05D  FORM      12     7        282   Cash Period 5
FMFPC06D  FORM      12     7        289   Cash Period 6
FMFPC07D  FORM      12     7        296   Cash Period 7
FMFPC08D  FORM      12     7        303   Cash Period 8
FMFPC09D  FORM      12     7        310   Cash Period 9
FMFPC10D  FORM      12     7        317   Cash Period 10
FMFPC11D  FORM      12     7        324   Cash Period 11
FMFPC12D  FORM      12     7        331   Cash Period 12
FMFPC13D  FORM      12     7        338   Cash Period 13
.
FMFPABFD  FORM      12     7        345   Accrual Brought Forward
FMFPA01D  FORM      12     7        352   Accrual Period 1
FMFPA02D  FORM      12     7        359   Accrual Period 2
FMFPA03D  FORM      12     7        366   Accrual Period 3
FMFPA04D  FORM      12     7        373   Accrual Period 4
FMFPA05D  FORM      12     7        380   Accrual Period 5
FMFPA06D  FORM      12     7        387   Accrual Period 6
FMFPA07D  FORM      12     7        394   Accrual Period 7
FMFPA08D  FORM      12     7        401   Accrual Period 8
FMFPA09D  FORM      12     7        408   Accrual Period 9
FMFPA10D  FORM      12     7        415   Accrual Period 10
FMFPA11D  FORM      12     7        422   Accrual Period 11
FMFPA12D  FORM      12     7        429   Accrual Period 12
FMFPA13D  FORM      12     7        436   Accrual Period 13
.
FMFPCOMD  FORM      12     7        443   Committed Expenditure
.
. Fields in Thousands only Scale
.
FMFPCBFT  FORM      9      6        450   Cash Brought Forward
FMFPC01T  FORM      9      6        456   Cash Period 1
FMFPC02T  FORM      9      6        462   Cash Period 2
FMFPC03T  FORM      9      6        468   Cash Period 3
FMFPC04T  FORM      9      6        474   Cash Period 4
FMFPC05T  FORM      9      6        480   Cash Period 5
FMFPC06T  FORM      9      6        486   Cash Period 6
FMFPC07T  FORM      9      6        492   Cash Period 7
FMFPC08T  FORM      9      6        498   Cash Period 8
FMFPC09T  FORM      9      6        504   Cash Period 9
FMFPC10T  FORM      9      6        510   Cash Period 10
FMFPC11T  FORM      9      6        516   Cash Period 11
FMFPC12T  FORM      9      6        522   Cash Period 12
FMFPC13T  FORM      9      6        528   Cash Period 13
.
FMFPABFT  FORM      9      6        534   Accrual Brought Forward
FMFPA01T  FORM      9      6        540   Accrual Period 1
FMFPA02T  FORM      9      6        546   Accrual Period 2
FMFPA03T  FORM      9      6        552   Accrual Period 3
FMFPA04T  FORM      9      6        558   Accrual Period 4
FMFPA05T  FORM      9      6        564   Accrual Period 5
FMFPA06T  FORM      9      6        570   Accrual Period 6
FMFPA07T  FORM      9      6        576   Accrual Period 7
FMFPA08T  FORM      9      6        582   Accrual Period 8
FMFPA09T  FORM      9      6        588   Accrual Period 9
FMFPA10T  FORM      9      6        594   Accrual Period 10
FMFPA11T  FORM      9      6        600   Accrual Period 11
FMFPA12T  FORM      9      6        606   Accrual Period 12
FMFPA13T  FORM      9      6        612   Accrual Period 13
.
FMFPCOMT  FORM      9      6        618   Committed Expenditure
.
FMFPCOM2  FORM      12.2   8        624   Committed Exp. (Raised not Rec)
FMFPSPAR  DIM       12     12       632   Spare
.
.End of Record                      644
