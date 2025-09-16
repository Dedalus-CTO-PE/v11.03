. V9.08.001 29/01/2007 JT                                                    
. *----------------------------------------------------------------------
. * Include Name  :   NZPRFNFD.INC
. *
. * Function      :   File Def'n Include for New Zealand Private                
. *                   NZ Priv Financial Summary for Revenue breakdown
. *
. * File Type     :   SQL
. *
. * File Name     :   nzprfnaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
NZPRFNA1   IFILE    SQL, FIXED=194, KEY="U4-4,5-10,11-14,15-15,16-28,1-3"       
NZPRFNA2   IFILE    SQL, FIXED=194, KEY="U1-3,4-4,5-10,11-14,15-15,16-28"       
. <Same format as NZPFINFD>
.
.NZFICODE  DIM       13     13       16    Finance Code
.
.                                         Fixed Fee
.                                         ----------
.                                         DXXXXXXYYYYYYYYY -fixed fee
.                                          XXXXXX   - Contract/HF
.                                          YYYYYYYY - Contract Proc.
.
.                                         EXXXXXXYYYYYYYYY -fixed fee adjust.
.
