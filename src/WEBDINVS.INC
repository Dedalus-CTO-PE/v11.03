.******************************************************************************
. Include Name    : WEBDINVS.PBL
.        
. Function        : Web Substitute for PATDINVS                
.                   Removed Duplicate Labels, Duplicate's are marked.
.
. Modifications   :
.
.         V11.03.04 04/12/2023  J.Tan          TSK 0940149
.                   Added CSMATYPE for lumpsum admission type for No payday   
.         V11.03.03 03/10/2023  J.Tan          TSK 0938056
.                   Added IVDETAIL fro Disc.Billing
.         V11.03.02 14/06/2023  J.Tan          TSK 0923703
.                   Added DRGVER and DMDCCODE
.         V11.03.01 12/01/2023  J.Tan          TSK 0900145
.                   Mod Win/Loss for each procedure code
.         V11.02.01 26/05/2022  J.Tan             TSK 0906596
.                   Added NWAUFLAG for ABF NWAU Calculation
.         V11.01.03 18/10/2021  J.Tan             TSK 0880410
.                   Added PENDHOSP,PENDSYST
.         V11.01.02 07/10/2021  J.Tan             TSK 0901515
.                   Mod for adding 4th,5th6th CMBS variables
.         V11.01.01 26/08/2021  J.Tan             TSK 0903454
.                   Added FNAMEN for ABF Emergency
.         V11.00.01 31/03/2020  J.Tan             TSK 0868813
.                   Changed PFNAME to DIM80
.         V10.15.01 24/01/2020  J.Tan             TSK 0857392
.                   Added FNAMEP
.         V10.14.01 28/06/2017  J.Tan             TSK 0857392
.                   Mod for ABF
.         V10.13.02 04/12/2018  Peter Vela        TSK 0859743
.                   Extended ECCLMARR for Eclipse DBS
.         V10.13.01 07/11/2018  Peter Vela        TSK 0863035
.                   Extended ECCLMARR for Eclipse PCS
.         V10.10.02 17/05/2017  J.Tan             TSK 0297904
.                   Removed BTDAYFLG, FICUFLAG
.         V10.10.01 04/04/2017  J.Tan             TSK 0297904
.                   Added BTDAYFLG, FICUFLAG for Non-Accum.inlier ICU/CCU rule
.         V10.08.03 21/09/2016  J.Tan            TSK 0826370
.                   Changed MCHGARR and MCHGAMT array to FORM3
.         V10.08.02 04/07/2016  J.Tan            CAR 0819914
.                   Added MVENHOUR - MV Hours
.         V10.08.01 07/03/2016  J.Tan            CAR 0814361
.                   NPDBTYPE - No payday bed type
.         V10.07.02 07/03/2016  J.Tan            CAR 0814361
.                   Added BPDAYS, BSDAYS, BCDAYS
.         V10.07.01 18/11/2015  J.Tan            CAR 303942
.                   Mods for Payment type
.         V10.06.02 26/03/2015  J.Tan            CAR 297718
.                   Added SUMCOPAY and MAXCOPAY
.         V10.06.01 05/03/2014  J.Tan            CAR 313385
.                   Added PPAYABLE - Patient Balance Payable
.         V10.05.02 23/09/2014  J.Tan            CAR 297718
.                   Added CPAYCCUH
.         V10.05.01 12/08/2014  Steve Armstrong  CAR 304812
.                   Extended LINCOUNT from FORM2 to FORM3
.         V10.04.02 19/06/2014  J.Tan         CAR 302452
.                   Increased array variables for MCHGARR and MCHGAMT
.         V10.04.01 24/01/2014  J.Tan         CAR 296422
.                   Added SAVECPRC for SX
.         V10.03.08 09/12/2013  Ania P        CAR 294740   
.                   Added DBILFLAG
.         V10.03.07 06/12/2012  J.Tan         CAR 237130
.                   Added variables to Group Pharmacy Items on Discharge Billing
.         V10.03.06 09/11/2012 J.Tan          CAR 262673
.                   Mods for Unqualified days/Additional Casepayment Perdiemrate
.         V10.03.05 15/05/2012 J.Tan          CAR 255708
.                   Added PENDSDAT,PENDADAT,PENDDDAT
.         V10.03.04 12/04/2012 J.Tan          CAR 263363
.                   Added NPDCONTR - No Payday Contract ID
.         V10.03.03 07/03/2012  J.Tan         CAR 250477
.                   Mods for Pack item
.         V10.03.02 10/01/2012 J.Tan          CAR 257682
.                   Added SAVTBEND
.         V10.03.01 28/10/2011  J.Tan         CAR 235425
.                   Mods for displaying items on invoice enquiry for SX
.         V10.02.01 15/05/2011 J.Tan          CAR 239592
.                   Added SAVACLM
.         V10.01.02 01/03/2011 Peter Vela     CAR 233270
.                   Added variables for Raise and Claim Eclipse
.         V10.01.01 06/01/2011 Jill Parkinson CAR 233088
.                   Changed IREFNO from dim 11 to dim 20
.         V10.00.01 16/07/2010  J.Tan         CAR 226322
.                   Added variables for search next rule if contract not valid
.         V9.12.05  16/02/2010  Peter Vela    CAR 215485
.                   Added save variables for Leave and Return recrod validation
.         V9.12.04  27/01/2010  J.Tan         CAR 214877
.                   Added FORM9 and FORM9A for checking range of MBS on Matrix
.         V9.12.03  04/09/2009  J.Tan         CAR 205303
.                   Added CNTRCID - Contract ID
.         V9.12.02  04/06/2009  J.Tan         CAR 197218
.                   Added PRTIFLAG for printing invoice with no amount
.         V9.12.01  29/05/2009  J.Tan         CAR 196010
.                   Added PRIICDCD SECICDCD TERICDCD
.         V9.11.03  10/03/2009  J.Tan         CAR 188102
.                   Added IPATFLAG - Patient Only Invoice
.         V9.11.02  24/10/2008  J.Tan         CAR 181263
.                   Added DBSFLAG - Discharge Billing Statement
.         V9.11.01  03/10/2008  J.Tan         CAR 180188
.                   Added CASMXKEY
.         V9.10.01  14/07/2008  J.Tan         CAR 168769
.                   Added variables for SX Billing
.         V9.09.02  20/08/2007  J.Tan         CAR 144656
.                   Mods for Multiple procedures billing
.         V9.09.01  11/07/2007  Mike Laming   CAR 140395
.                   Added variable STATMENT for PATINV.. (print statements)
.         V9.08.04  13/06/2007  Mike Laming   CAR 119158
.                   Added variable MISCDATE for Misc.Charges Effective Date
.         V9.08.03  09/02/2007 Peter Vela CAR sjog-vic
.                   Added sjog work variables
.         V9.08.02  08/02/2007 J.Tan      CAR 120001
.                   Added new fields for SX
.         V9.08.01  11/10/2006 J.Tan      CAR 121178
.                   Added FORM41 for form4.1
.                   16/10/2006 J.Tan      CAR 121630
.                   Added escape H & G for printing bold on item code
.         V9.07.02  31/07/2006 J.Tan      CAR 103365
.                   Mods for John hopkins invoice
.         V9.07.01  13/07/2006  Mike Laming       CAR 111521 
.                   Change all Bed Fee & Theatre Fee work areas to FORM 8.2 
.         V9.04.03  04/08/2005   J.Tan        CAR 62750
.                   Mods not to use the redefined amount variables
.         V9.04.02  15/10/2004  J.Tan  CAR 52765
.                   Added MAXLINE for SVHM outpatient invoice
.         V9.04.01  03/09/2004  Lina Vo   CAR 52998
.                   Added PAGENO for PATINVHL                                 *
.         V9.03.07  08/06/2004  J.Tan CAR 50035
.                   Added mvbflag,mvbdate,mvbrate,mvdays,mvhours & extrahrs   *
.         V9.03.06  13/05/2004  J.Tan CAR 49827
.                   Added nbnkamnt variable 
.         V9.03.05  29/04/2004  J.Tan
.                   Added errflag variable 
.         V9.03.04  19/04/2004  J.Tan
.                   Mods for new fields added in pmscmtaf file
.         V9.03.03  03/01/2004 J.Tan  CAR 45047
.                   Added CASHTOT
.         V9.03.02  13/11/2003 J.Tan
.                   Added CREDTOT,CRDNFLAG
.         V9.03.01  04/08/2003  CAR 34330/41952   Mike Laming
.                   Add second Temp file TMPMSCFL to sort DTR Misc.Items (type
.                   "3") into 'Date/DTR Seq.' sequence
.         V9.02.05  14/04/2003  Davin  CAR/Quote 23297
.                   Removed PTMCKREB (now in PATMCHFD)
.         V9.02.04  05/12/2002 L.Vo  Defect 22709
.                   Changed CR to CODECR same as PATDINVS
.         V9.02.03  06/11/2002 J.Tan
.                   Added fields for C/P
.         V9.02.02  09/09/02 J.Tan
.                   Mods for casemix sorting file     
.         V9.02.01  29/07/02 J.Tan
.                   Added rectype to items sort file
.         V5.09.02  08/03/2001  Jill Habasque
.                   Added ACOMDAYS & ICUDAYS
.         V5.09.01  04/01/2001  Jill Habasque
.                   Added new casemix variables                  
.         V5.09.00  29/12/2000  Pat Dirito
.                   Added variables CMCODE,CMXFLAG,DCFLAG,SDIM18 
.         V5.08.01  21/06/2000  Tonii
.                   Added variable CNEXTINV, previously a field in PATCONFD
.         V5.07.03  15/09/1999  J.Tan 
.                   Added fields for Nursing home
.         V5.07.02  07/06/1999  Jill Habasque SRF 631718
.                   Changed CSREPNO from Dim 8 to Dim 12
.         V5.07.01  07/01/1999  Jill Habasque             
.                   Removed FORM4   
.                   08/10/1998  Glenn Berry      5.07 changes
.******************************************************************************
.         V5.04.01  15/07/1996  Greg Horvat      SRf 616143
.                   Added DIM29
.
.                   09/05/89 J.Tan  (I.B.A)
.                   Fixed SAVADOC from DIM3 to DIM6
.                   26/11/1993  Glenn Berry      Hawkes Bay Changes
.                   Added a few variables
.                   23/12/1993  Steve Armstrong     
.                   Added COMPFLG, SAVCOST, COSTTOT, LOCDATE, HOSCOLL, SNGOPTN &
.                   FINFLAG, DOCCOLL for Mt. Alvernia changes
.                   11/04/1994  Steve Armstrong
.                   Added PAGENUM
.                   26/07/1994  Rob Leonard
.                   Added a couple of vars
.         V5.02.01  21/02/1995  Greg Horvat      SRF 135134
.                   Added NOHIPAYM
.         V5.03.01  28/07/1995  Greg Horvat      SRF 610897
.                   Added DIM35
.
.        USED BY: IBAAAE02  IBABIL20  IBABIL97  IBAMED21
.                 IBAAAE20  IBABIL21  IBAHOS32  IBAOUT20
.                 IBABIL09  IBABIL60  IBAMED19  IBAPAT32
.                 IBABIL19  IBABIL91  IBAMED20  IBAPAT34
.
.        TO USE THIS INCLUDE YOU MUST HAVE DEFINED THE FOLLOWING
.        FILE DEFINITION INCLUDES :-
.
.        INC       PATADMN
.        INC       PATCONTR
.        INC       PATDSCH
.        INC       PATKINN
.        INC       PATMAST
.        INC       PATDTRAN
.        INC       PATINVR
.        INC       PATFINS
.        INC       JULCALEN
.        INC       PATTRAN       * TRANSFER FILE
.        INC       PATALLW       * ALLOWANCE FILE
.        INC       PATPSUM
.        INC       PATBANK
.        INC       PATCODES
.        INC       PATWCOMP
.        INC       PATITEM
.        INC       PATPRNTR
.        INC       PATAUDC
.        INC       PATAUDM
.        INC       PATCRATE
.******************************************************************************
.
.
.
.         Temp. file for Mt. Alvernia invoice (detailed by cost centre)
.
.         Filename : invtmpxx.dat           (xx = port id)
.
INVTEMP1  IFILE SQL, FIXED=61,KEY="U1-3,4-9"
.
.NAME     TYPE    LENGTH     PHYSICAL      START     DESCRIPTION
.----     ----    ------     --------      -----     -----------
TFCOST    DIM       3           3            1       Cost Centre
TFFDATE   DIM       6           6            4       From Date
TFTDATE   DIM       8           8           10       To Date
TFNODAY   FORM      4           3           18       No of Days
TFDESC    DIM      30          30           21       Description
TFRATE    FORM    6.2           5           51       Rate
TFAMNT    FORM    6.2           5           56       Amount
.
.End of Record                              61
.
PACMCHRG  FORM      "0"            * Include Accom. amount to Patient Payable
PITMCHRG  FORM      "0"            * Include Item amount  to Patient Payable
ALLINFLG  FORM      1
ACCCOUNT  FORM      6
ACCARRAY  FORM      6.2[50]
ACOMDAYS  FORM      4
MCHGARR   DIM       9[999]
MCHGAMT   FORM      12.2[999]
MVENHOUR  FORM      6
SORTDONE  FORM      1
SWAPFLAG  FORM      1
LASTSWAP  FORM      2
TARGET    FORM      3
.
ACCPDAY   FORM      12.2
MECHVFLG  FORM      1
.
PRABFINV  FORM      "0"
PPAYABLE  FORM      12.2
PATLNTOT  FORM      12.2
PATLNGST  FORM      12.2
PATARATE  FORM      12.2           * Patient Daily Additional rate
PATHRATE  FORM      12.2           * HF Daily Additional rate
.
PATLRATE  FORM      12.2           * Total Patient rate (daily/inlier + Add.)
FNDLRATE  FORM      12.2           * Total HF rate (daily/inlier + Additional)
.
PHPIAMNT  FORM      12.2
PHXIAMNT  FORM      12.2
PREVTMOV  DIM       1
PREVTDAT  DIM       8
CALCFLAG  FORM      1
CHNGDATE  DIM       8
CPRCNUMB  FORM      1
CPRCCODE  DIM       9[9]
CPAYPRIV  FORM      12.2
CPAYSHRD  FORM      12.2
CPAYCCUH  FORM      12.2
CALCFFS   FORM      1
COUNTA    FORM      2
SUMCOPAY  FORM      12.2
MAXCOPAY  FORM      12.2
SAVKEY30  DIM       30
SAVTBEND  FORM      3
SUMACC    FORM      12.2
SAVGCOD   DIM       3
SAVFCODE  DIM       13
SAVTDTE   DIM       8
SAVTWARD  DIM       3
SAVTBED   DIM       3
SAVBDTYP  DIM       3
SVKEY30   DIM       30
ADMFLAG   FORM      1
AUDFCODE  DIM       3
CREDTOT   FORM      12.2
CASHTOT   FORM      12.2
CRDNFLAG  FORM      "0"
CMSTRTDT  DIM       8
CMENDDTE  DIM       8
CMLOS     FORM      5
CRITDAYS  FORM      5
ECTRFLAG  FORM      1
ESCCHR    INIT      033
CHARG     INIT      0107
CHARH     INIT      0110
CONTRCID  DIM       6
SAVCONTR  DIM       6
NWAUFLAG  FORM      "0"
NPDCONTR  DIM       6
ACCCONTR  DIM       6
NPDBTYPE  DIM       3
CMXCONTR  DIM       6
CQLDTMOV  DIM       1
FQLDFLAG  FORM      1
SQLDTMOV  DIM       1
.
DRGVER    DIM       3
DMDCCODE  DIM       4
DFDATE    DIM       8
DTDATE    DIM       8
DBSFLAG   FORM      1
DBILFLAG  DIM       1
DRCHRAMT  FORM      12.2
DRGSTAMT  FORM      12.2
DSCNFLAG  FORM      "0"
DOCTTOT   FORM      12.2
DIM3C     DIM       3
DIM3D     DIM       3
DIM3E     DIM       3
DAYSDIFF  FORM      2
DOCNAM38  DIM       38
DEFINDIC  DIM       1
DEFPAYCL  FORM      "0"
DEFPAYER  DIM       3
ACCPAYER  DIM       3[20]
DEFAULT   FORM      1
DEFDCOL   FORM      4    * Default daily charge column
DEFACOL   FORM      4    * Default additional charge column
DUDFCODE  DIM       3
DRECTYPE  DIM       1
ERDTFLAG  FORM      1
EXTRAHRS  FORM      2                       * extra hrs (<24) for mv billing
DOCNAM24  DIM       24
FNAMEN    DIM       8
FNAMEP    DIM       8
FNAMEQ    DIM       8
FNAMEX    DIM       8
FNAMEY    DIM       8                                                  *I-90301
FNAMEZ    DIM       8
FORM10P4  FORM      10.4
FRM10P4A  FORM      10.4
F10P4     FORM      10.4
FORM12P2  FORM      12.2
FORM12D2  FORM      12.2
FORM12F2  FORM      12.2
FORM12X2  FORM      12.2
FORM6P2   FORM      6.2
FORM41    FORM      4.1
FORM4B    FORM      4
FORM5A    FORM      5
FORM6P    FORM      6.2
FORM6P2B  FORM      6.2
FORM9P2   FORM      9.2
FORM9     FORM      9
FORM9A    FORM      9
FORM8A    FORM      8
FORM12B   FORM      12
FORM12C   FORM      12
FFEEAMNT  FORM      12.2
FRSTACCM  FORM      1
FORCMBS   DIM       9
FIFCMBS   DIM       9
.
IVDETAIL  DIM       1
INVTYPE   FORM      1
ISBLFLAG  FORM      "0"         * Independence Service Billing flag
ISBLDATE  DATE      8
IVTOTDES  DIM       18
INVCTOTL  FORM      12.2        * invoice total for templating
ICUCOUNT  FORM      6
ICUFLAG   FORM      1
IPATFLAG  FORM      1
ICUDAYS   FORM      4
INVBFLAG  FORM      1
LINCOUNT  FORM      3          * Line counter
LWARD     DIM       3
LBED      DIM       3
LRBTYP    DIM       3
LDATE     DIM       8
LTIME     DIM       8
LATYPE    DIM       3
LADOCT    DIM       6
LCHSTAT   DIM       3
LUMPAT    FORM      12.2
LUMPFLAG  FORM      1
LUMHF     FORM      12.2
LSDESC1   DIM       30
LSDESC2   DIM       35
MAXSEPDY  FORM      "35"
MSGFLAG   FORM      1
MVBFLAG   FORM      1                       * mech. vent. billing flag(1=Y/0=N)
MVBDATE   DATE      8                       * mech. vent. date for billing
MVBRATE   FORM      12.2                    * mech. vent. daily rate
MVDAYS    FORM      4                       * mechanical ventilation days
MVHOURS   FORM      4                       * mechanical ventilation hours
NLWAMT    FORM      12.2
NDISC     FORM      12.2
NPSTRTDT  DIM       8
NPENDDTE  DIM       8
NPDAYFLG  FORM      1
NCHACCOM  FORM      1
MATRXFLG  FORM      1
RPRTFLAG  FORM      1
SRECTYPE  DIM       1
PRFACNTR  FORM      1
PRFACODE  DIM       6[9]
.
PENDSDAT  DIM       8
PENDADAT  DIM       8
PENDDDAT  DIM       8
PENDFUND  DIM       6
PENDCLAM  DIM       3
PENDHOSP  DIM       3
PENDSYST  DIM       2
PLINFLAG  FORM      1
PRITFLG   FORM      1
PRTIFLAG  FORM      1
PRPATINV  FORM      1    * 1=flag for Printing Pat inv. 0= Printing Funder Inv.
PINVFLAG  FORM      1    * 0=Print All Inv  1=Pat Inv only 2= Print Funder only
PMCCTY    FORM     1
PSTATCM   DIM      3
PATSTCUR  DIM       4
PATSCAN   INIT      "%PATNPORTN"
PARTFLAG  FORM      1
PHRCOUNT  FORM      6
PCFLAG    FORM      1
PCSTRTDT  DIM       8
PCENDDTE  DIM       8
PMOIETY   FORM      12.2
PRICMBS   DIM       9
PREBFLAG  FORM      "0"
RECFLAG   FORM      1
ROUNDAMT  FORM      12.2
REMNDURN  FORM      8
REVEXIST  FORM      1
REVBFLAG  FORM      1
RFNFLAG   FORM      "0"
SECCMBS   DIM       9
SECICDCD  DIM       9
SECICOCD  DIM       9
SDISC     FORM      12.2
SALLW     FORM      12.2
SDAYPAT   FORM      12.2
SDAYHF    FORM      12.2
SADDPAT   FORM      12.2
SADDHF    FORM      12.2
SDAYEND   DIM       4
SADDEND   DIM       4
STATMENT  FORM      1
SIXCMBS   DIM       9
.
.
CEFFDATE  DIM       8
CNTRCEFR  FORM      1
TRNFLAG   FORM      1
THTCOUNT  FORM      6
TERCMBS   DIM       9
TERICDCD  DIM       9
TERICOCD  DIM       9
TFYEAR1   DIM       2
TFDAY1    DIM       2
TFMON1    DIM       2
TFCENT1   DIM       2
TDBSAMNT  FORM      12.2
MBSCONTR  DIM       6
SUBQPROC  FORM      1
THEADURN  FORM      8
.
ACCRATE   FORM     12.2
ADPRATE   FORM     12.2
A8DATE    DIM       8         **  ADD/AMM/AYY
A10DATE    DIM       10  
ACCDAYC   DIM       1
ACCMTOT   FORM     12.2      ** ACCOMADATION TOTAL
ACCPRIV   DIM       1
ACCSHRD   DIM       1
ACDAYCS   FORM      1
ACDAYS    DIM       4
ACLINE    FORM      2
ACPRIVT   FORM      1
ACSHARE   FORM      1
ACTOTAL   DIM       9
ADDATE    DIM       8
ADJULDAY  FORM      4
ADJULYR   FORM      2
ADMCODE   DIM       3
ADMISS    DIM       6
ADMKEY    DIM       12
ADOCNAM   DIM       22
ANS1      DIM       2
ASTAT1    INIT      "                    "
ASTAT2    INIT      "CURRENT ADMISSION   "
ASTAT3    INIT      "DISCHARGED          "
ASTAT4    INIT      "ON LEAVE            "
ADDPAT    FORM      12.2
ADDHF     FORM      12.2
ADDEND    FORM      4
ADDCOL    FORM      4
ACCMDESC  DIM       50
.
BOUTFLAG  FORM      1
BEDDESC   DIM       18
B8DATE    DIM       8         **  BDD/BMM/BYY
B10DATE    DIM       10
BACKDATE  DIM       8
BDTEFLAG  FORM      "0"
BATAMTC   FORM      12.2
BATAMTM   FORM      12.2
BEQPROG   FORM      1            * Billing enquiry program
BFCOL     FORM      2
BFEND1    FORM      3
BFEND2    FORM      3
BFEND3    FORM      3
BFEND4    FORM      3
BFEND5    FORM      3
BFEND6    FORM      3
BFENDARY  DIM       3[999]
...BJDAY     FORM      3  ---- duplicate label ----
BTDAYS    FORM      4
BDAYS     FORM      4
CDAYS     FORM      4
BFFLAG    FORM      1
BPDAYS    FORM      4
BSDAYS    FORM      4
BCDAYS    FORM      4
.
BDYARRAY  FORM      6[99]
CURBEND   FORM      4
COLNUM    FORM      3
CMIXFLAG  FORM      1
CASH      INIT      "  CASH"
CASHFLAG  FORM      1
CBFLAG    FORM      1
CDJULDAY  FORM      4
CDJULYR   FORM      2
CHEQUE    INIT      "CHEQUE"
CHGARRY   FORM      6.2[5]
CHGC      FORM      1
...CJDAY     FORM      3  ---- duplicate label ----
CLAIM     FORM      1
CMCODE    DIM       9
CMXFLAG   FORM      1
CNEXTINV  FORM      8
CODEFI    INIT      "FI"
COL       FORM      3
COLFEE    DIM       1
COMFLAG   FORM      1
COMPFLG   FORM      1                  * invoice completed flag
.                                            0 = not completed
.                                            1 = completed
COPYINV   FORM      1
COSTTOT   FORM      6.2                * cost centre sub-total
COUNT     FORM      3
CODECR    INIT      "CR"
CREDIT    INIT      "CREDIT"
CSTRTYR   DIM       8
CSAMT     FORM      12.2
CSBANK    DIM       30
CSBRNC    DIM       30
CSCENT    FORM      2
CSDAY     FORM      2
CSDRAW    DIM       30
CSMON     FORM      2
CSREPNO   DIM      12
CSTYPEF   FORM      1
CSMATYPE  DIM       3
CSYEAR    FORM      2
CURDATE   DIM       8
CURMDAYS  FORM      4
CURRROW   FORM      3
CUMADAYS  FORM      4
CMDRG     DIM       9
CRDAY     DIM       2
CRMON     DIM       2
CRCENT    DIM       2
CRYEAR    DIM       2
CASHDATE  DIM       8         * Cash receipt date
.
EXPPAYER  DIM       6
DISCFLAG  FORM      1
DEFCOL    FORM      1
DCCYY     DIM       4
DAYFLAG   FORM      1
ADYFLAG   FORM      1
DAYPAT    FORM      12.2
DAYHF     FORM      12.2
DAYEND    FORM      4
...D28       FORM      "28"  ---- dupilcate label ----
...D30       FORM      "30"  ---- dupilcate label ----
...D31       FORM      "31"  ---- dupilcate label ----
D8DATE    DIM       8         **  DDD/DMM/DYY
D10DATE    DIM       10
DANS1     DIM       20
DANS2     DIM       20
DANS3     DIM       20
DANS4     DIM       20
DANS5     DIM       4
DANS6     DIM       20
DCFLAG    FORM      1
DAYNUM    FORM      4
SDAYNUM   FORM      4
BDAYSCNT  FORM      3
DEFLAG    FORM      4
DEVICE    DIM       127
DIM5A     DIM       5
DIM12     DIM       12
DIM10     DIM       10
DIM15     DIM       15
DIM20     DIM       20
DIM21     DIM       21
DIM22     DIM       22
DIM23     DIM       23
DIM23A    DIM       23
DIM24     DIM       24
DIM25     DIM       25
DIM27     DIM       27
DIM29     DIM       29
DIM34A    DIM       34
DIM35     DIM       35
DIM37     DIM       37
DIM5      DIM       5
DIM6      DIM       6
DIM6A     DIM       6
DIM8      DIM       8
DIM8A     DIM       8
DINSUR    INIT      "INSURANCE"
DINVTP    DIM       9
DISCODE   DIM       3
DISFLG    FORM      1
DISPROG   FORM      1
DSCITEM   DIM       50
DLCDATE   DIM       8
DMEMB     DIM       6
.DOCCOLL   FORM      6.2
DSCHN     DIM       1
DSCHY     DIM       1
DSPONLY   FORM      1
DUEDATE   DIM       10
DVERT     FORM      2
DYCHRGED  FORM      3
DEP11     DIM       11
.
ECCLMARR  DIM       90
ESTFLAG   FORM      "0"
ENDTDAT   DIM       8
ENDFLAG   FORM      1
EPSFLAG   FORM      1
ERASE     INIT      "iserase " 
ERRFLAG   FORM      1
.
FINDFLG   FORM      1
FRCCYY    FORM      4
FCENT     FORM      2
FCENT1    DIM       2
FDAY      FORM      2
FDAY1     DIM       2
FIELDC    FORM      2
FJDAY     FORM      3
FJULYR    FORM      2
FLEAPYR   FORM      1
FMON      FORM      2
FMON1     DIM       2 
FILNAME   INIT      "invtmp"
FINFLAG   FORM      1             * finalise flag for IBABIL20
.                                      0 = finalise completed invoices
.                                      1 = dont finalise completed invoices
FNDFLAG   FORM      1
FNDSTRT   FORM      1
FORM12    FORM     12
FORM12A   FORM     12
FORM82    FORM      8.2
FORM2D    FORM      2
FORM2M    FORM      2
FORM2Y    FORM      2
FORM3     FORM      3
FORM3B    FORM      3
FORM6     FORM      6
FORM62    FORM      6.2
FORM72    FORM      7.2
FORM7P2   FORM      7.2
FRDATE    DIM       8
FROMDATE  DIM       8
FUNDNM    DIM       30
FYEAR     FORM      2
FYEAR1    DIM       2
FFSFLAG   FORM      1
GSTAMNT6  FORM      6.2
GSTPCEN   FORM      3.2
GSTFLAG   FORM      1
GENDAYS   FORM      6         * total number of days for general bed type
GOVTOTAL  FORM      6.2
GROSSTOT  FORM      12.2
GSTAMNT   FORM      12.2
GSTWORK   FORM      12.4
HBCOFKEY  DIM       26
HEADER20  DIM       20
HEADER    DIM       127  
HEADSECC  FORM      5
HEADSECM  FORM      5
HEADTYPE  FORM      1             * Header Type
.                                   1 = Invoive
.                                   2 = Re-Print Invoices
.                                   3 = Statements
.                                   4 = Receipts
HFACCM    FORM      12.2
HFAMT     FORM      12.2
HFFEE     FORM      12.2
HFMISC    FORM      12.2
HFNMTB    DIM       11
HFTHEA    FORM      12.2
HKCGAMNT  FORM      8.2       * amount returned from hkcds000 in patcatbi
HOSCOLL   FORM      6.2           * hospital collection amount (Mt. Alvernia)
.
INVDFLAG  FORM      "0"                     * don't write to patinpaf
IDATEF    DIM       8
IDATET    DIM       8
INVPRTD   FORM      1            * 0=Invoice printed
.                                * 1 = Patient Portion of two invoice gen.
.                                * 2 = Insurance Portion of two invoices gen.
IPASS     FORM      1            * 0 = Normal Processing
.                                * 1=Invoice not printed
.                                * 2=Invoice not printed - cancel batch
IREFNO    DIM       20
ISBUILD   INIT      "isbuild "
ITCODE    DIM       12
ITFRATE   FORM      12.2
JHFLAG    FORM      1
.
LNTOTAL   FORM      7.2
LASTDAYS  FORM      4
LOWFLAG   FORM      1
LCOUNT    FORM      2
LEVDAYS   FORM      4
LINETOT   FORM      12.2
LINEGST   FORM      12.2
LOCDATE   DIM       8            * Letter of Cert. date
LOOPTRN   FORM      1
LRECFLAG  FORM      1
LSTDAYS   FORM      4
LSTRATE   FORM      12.2
LBWCOUNT  FORM      6
MISCDATE  DIM       8
MISCGST   FORM      12.2
MISCOUNT  FORM      6
MAXFIELD  FORM      2         *** PATCRATE
MAXNUM    FORM      2
MAXLINE   FORM      2
MC        INIT      "MC"
MEMBER    INIT      "MEMBER"
MERCH     INIT      " MERCH"
MISCTOT   FORM      12.2      ** MISCELANEOUS TOTAL
MONEY     INIT      " MONEY"
MONEY1    INIT      "MONEY ORD"
MVPFLAG   FORM      1
.
NEXTFLAG  FORM      1
NBNKAMNT  FORM      12.2
NBRDAYS   FORM      4
NDATE     DIM       8
NETTOT    FORM      12.2
NEWRATE   FORM      12.2
NHOSP     DIM       2
NINE9     FORM      "999999999999999999999"
NOSTDOWN  FORM      "0"
NOACCFLG  FORM      1
NODAYS    FORM      4
NOFEE     FORM      "0"
NOHIPAYM  FORM      1
NOHOSP    FORM      3
NOON      INIT      "12:00:00"
NUMBER    FORM      3
NUMBINVR  FORM      "1"    * No of inv for New Patient Portion Inv.functionality
NUMINVS   FORM      1
OPCND     FORM      1
OPT       DIM       2
OPTIONZ   FORM      1
OPTNFLAG  FORM      1
OVERPFL   FORM      1
OYEAR     FORM    "365"
PRIMFUND  DIM       6
PRSCOUNT  FORM      6
PRIMMBS   DIM       9
PRIICDCD  DIM       9
PRIICOCD  DIM       9
PRIMFLAG  FORM      1
MULTCNTR  FORM      1
PRNTSTRT  FORM      3
PAGENO    FORM      3
P2NAME    DIM       35
PAGENUM   FORM      3
PATFEE    FORM      12.2
PAYMTTOT  FORM      12.2
PEQPROG   FORM      1             * Patient Enquiry program flag
PFNAME    DIM       80
PGNAME15  DIM       15
PKADD241  DIM       24
PKADD242  DIM       24
PKADD244  DIM       24
PKSUB22   DIM       22            * Print Var for Southland Invoice
PKSUBR20  DIM       20
PNAM24    DIM       24
PNAM29    DIM       29
PNAME     DIM       35
PRDAYS    FORM      4
PREDATE   DIM       8
PRINTFLG  FORM      1
PROGFLAG  FORM      1
PRTITCOD  DIM       9                        * Invoice item code that is printed
PSUBRB20  DIM       20
PSUB22    DIM       22            * Print Var for Southland Invoice
REBTOT    FORM      6.2
RECCD     DIM       1
REBSCAN   INIT      "%REBTPORTN"
.
SFRDATE   DIM       8
SPERCENT  FORM      3.2
SXPPAYER  DIM       6
SEPCHAR2  DIM       2
STEPFLAG  FORM      1
SAVECPRC  DIM       9
SAVRTYPE  FORM      1
SAVTRNNO  DIM       6
SAVIND12  DIM       1
SAVADPT   FORM     12.2
SAVADRB   FORM     12.2
SAVDYPT   FORM     12.2
SAVDYRB   FORM     12.2
SAVAPAT   FORM     12.2
SAVAHF    FORM     12.2
SAVPAT    FORM     12.2
SAVHF     FORM     12.2
SAVTDATE  DIM       8
SAVPRGID  DIM       8
SAVREPTN  FORM      2
SETDFPRG  DIM       8
SETDFRPT  FORM      2
.
SAMTG     FORM      6.2
SAVDES1   DIM       30
SAVDES2   DIM       35
SAVINVNO  DIM       8
SAVADOC   DIM       6
SAVATYP   DIM       3
SAVACLM   DIM       3
SAVAURNO  FORM      6
SAVBED    DIM       3
SAVBTYP   DIM       3
SAVBTYP2  DIM       3
SAVCHST   DIM       3
SAVCOL    FORM      1
SAVMSGRP  DIM       3
SAVDATE   DIM       8
SAVDATE1  DIM       8
SAVDATE2  DIM       8
SAVEUNIQ  DIM       10
SAVEND    FORM      3
SAVETRN   FORM      3
SAVKEY8   DIM       8
SAVKEY37  DIM       37
SAVTIME   DIM       8
SAVTOT    FORM      8.2
SAVWARD   DIM       3
SAVFEDAY  FORM      3
SDIM20    DIM       20
SDIM24    DIM       24
SDIM27    DIM       27
SDIM30    DIM       30
SEC1      FORM      "00001"
...SECTOR    FORM      5  ---- duplicate label ----
...SEP       DIM       2  ---- duplicate label ----
SFDT1     DIM       8        *** PATCRATE
SFDT10    DIM       8
SFDT11    DIM       8
SFDT12    DIM       8
SFDT13    DIM       8
SFDT14    DIM       8
SFDT15    DIM       8
SFDT16    DIM       8
SFDT17    DIM       8
SFDT2     DIM       8
SFDT3     DIM       8
SFDT4     DIM       8
SFDT5     DIM       8
SFDT6     DIM       8
SFDT7     DIM       8
SFDT8     DIM       8
SFDT9     DIM       8
SFLD1     DIM       30        *** PATCRATE
SFLD10    DIM       30
SFLD11    DIM       30
SFLD12    DIM       30
SFLD13    DIM       30
SFLD14    DIM       30
SFLD15    DIM       30
SFLD16    DIM       30
SFLD17    DIM       30
SFLD2     DIM       30
SFLD3     DIM       30
SFLD4     DIM       30
SFLD5     DIM       30
SFLD6     DIM       30
SFLD7     DIM       30
SFLD8     DIM       30
SFLD9     DIM       30
SIDATET   DIM       8
SKEY14    DIM       14
SKEY17    DIM       17
SKEY18    DIM       18
SKEY21    DIM       21
SKEY22    DIM       22
SKEY23    DIM       23
SKEY26    DIM       26
SKEY27    DIM       27
.SKEY29    DIM       29
SKEY30    DIM       30
SKEY31    DIM       31
SKEY35    DIM       35
SKEY37    DIM       37
CASMXKEY  DIM       18
CNTRKEY   DIM       37
SMDESC    DIM       30
SNGOPTN   FORM      1                  * Singapore invoice option
.                                            1 = Detailed by coste centre
.                                            2 = Detailed by date
.                                            3 = Summary
.                                            4 = Final
SSECTOR   FORM      5
STODATE   DIM       8
STMVDATE  DIM       8
ENMVDATE  DIM       8
.
TOTBDAY   FORM      4
TMPDT1    DIM       8
TMPDT2    DIM       8
TABLNM    DIM       30
TABLNN    DIM       10
TCENT     FORM      2
TCENT1    DIM       2
TDAY      FORM      2
TDAY1     DIM       2
TEDESC    DIM       30
TEMPDAY   FORM      4
...TMPFILE   DIM       8  ---- duplicate label ----
TEMPREB   FORM      5.2
...TIMEIS    DIM       8  ---- duplicate label ----
TJDAY     FORM      3
TJULYR    FORM      2
TLEAPYR   FORM      1
TMON      FORM      2
TMON1     DIM       2
TOCCYY    FORM      4
TODATE    DIM       8
TOTAL     FORM      8.2
TOTPGST   FORM      12.2            * Total Patient GST amount
TOTGST    FORM      12.2
TOTAMNT   FORM      12.2
TOTAMT    FORM      12.2
TOTDAY    FORM      3
TOTDAYS   FORM      4
TOTDISC   FORM     12.2
TOTCHRG   FORM      5
TOTHEALTH FORM     12.2
TOTACCM   FORM     12.2                                                *I-90204
TOTTHEA   FORM     12.2                                                *I-90204
TOTMISC   FORM     12.2                                                *I-90204
TOTOTHR   FORM     12.2                                                *I-90204
TOTMAL    FORM      5
TOTPAT    FORM      5
TOTUNK    FORM      5
TOTXTRA   FORM      6.2
TOYEAR    FORM      2
TTIME2    DIM       8
TYEAR     FORM      2
TYEAR1    DIM       2
UGSTFLAG  FORM      "0"
UKEY      INIT      " 61 U1-3,4-9"
UPRANGE   FORM      3
URNUMB    DIM       8
USEDEF    FORM      1
VARIABLE  DIM       127
VERT      FORM      2
VLINE     FORM      2
WNLFLAG   FORM      "0"       * Win/Loss Flag
WRDTFLAG  FORM      "0"
WCAREFLG  FORM      1
WRMNSTDN  FORM      "0"                     * Write manual s'down flag *I-90204
WRKDAY    FORM      4
WEBFLAG   FORM      1
DATFIELD  DATE      8
XGROSTOT  FORM      6.2
XLINETOT  FORM      6.2
XLSTRATE  FORM      6.2
XLINEGST  FORM      6.2
XTOTGST   FORM      6.2
XTOTAMNT  FORM      6.2
XBANDING  DIM       3
.
X1        INIT    "X"
X5        INIT    "XXXXX"
X10       INIT    "XXXXXXXXXX"
XCENT1    DIM     2
XDAY1     DIM     2
XDESC1    DIM     30
XDESC2    DIM     30
XMON1     DIM     2
XTRADAY   FORM     1
XYEAR1    DIM     2
ZED30     INIT    "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzz"
.
SORTFILE  IFILE     SQL, FIXED=46, KEY="U1-1,2-9,10-11,12-19,20-24,25-33,34-39"
. Name    Type     Size    Physical   Start
.------   ----     ----    --------   -----
ZRECTYP  DIM       1         1         1
ZDATE    DIM       8         8         2 
ZSESS    DIM       2         2         10
ZAMT     DIM       8         8         12
ZMBS     DIM       5         5         20
ZMISC    DIM       9         9         25
ZUNIQ    DIM       6         6         34
ZTRNN    DIM       6         6         40
.EOR                                   46
.
. ******************************************* Start of Addition        *I-90301
.. Temporary Miscellaneous Items File
..
TMPMSCFL  IFILE     SQL, FIXED=50, KEY="U1-1,2-9,10-15"
. Name    Type     Size    Physical   Start
.------   ----     ----    --------   -----
TMPRECTY  DIM      1         1         1
TMPDTRDT  DIM      8         8         2
TMPZUNIQ  DIM      6         6         10
TMPTRNSC  DIM      6         6         16
TMPREFNC  DIM      8         8         22
TMPAMNTP  FORM     12.2      8         30
TMPREBAT  FORM     12.2      8         41
TMPMNINV  DIM      1         1         49
.EOR                                   50
. ******************************************* End of Addition          *I-90301
.
... Temporary Mechanical Ventilation File
.
TMMVFIL1  IFILE     SQL, FIXED=34, KEY="U1-1,2-9"
TMMVFIL2  IFILE     SQL, FIXED=34, KEY="U26-33,1-1,2-9"
. Name    Type     Size    Physical   Start
.------   ----     ----    --------   -----
INTCTYPE  DIM       1         1         1   . Record type
INTCTDAT  DIM       8         8         2   . to date
INTCFDAT  DIM       8         8        10   . From date
INTCDAYS  FORM      5         4        18   . Days in period
INTCNCHR  FORM      5         4        22   . No charges days
INTCNBDT  DIM       8         8        26   . Start date for MV period
.EOR                                   34
.
TMPSXMA1  IFILE     SQL, FIXED=26, KEY="U1-1,2-4,5-13,14-19"
TMPSXMA2  IFILE     SQL, FIXED=26, KEY="U20-25,1-1,2-4,5-13,14-19"
. Name    Type     Size    Physical   Start
.------   ----     ----    --------   -----
.PMMIRTYP DIM      1         1         1
.PMMIMGRP DIM      3         3         2
.NZSPCRPC DIM      9         9         5
.PMMITRAN DIM      6         6         14
.PMMICNTR DIM      6         6         20
.EOR                                   26
.
TMPWNLA1  IFILE     SQL, FIXED=30, KEY="U1-1,2-7,8-16"
. Name    Type     Size    Physical   Start
.------   ----     ----    --------   -----
NZPRPRIM  DIM      1         1         1    * Primary procedure
NZPRCNTR  DIM      6         6         2    * Contract code
NZPRCPRC  DIM      9         9         8    * Contract Procedure code
NZAMOUNT  FORM     12.2      8        17    * Amount
NZSPARES  DIM      5         5        25
.EOR                                  30
.
          INC      ABFVARS/INC

