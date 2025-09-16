. V11.02.01 28/03/2022 Davin      TSK 0917793 - Added include PTOK12FD
. V10.14.01 14/03/2019 Don Nguyen TSK 0869412 - Added include PTOK11FD
. V10.10.01 08/03/2017 Davin      TSK 0833093 - Added include PATKXOFD
. V10.06.01 17/04/2015 Davin       CAR 311669 - Added include PATK9OFD
. V10.03.01 23/04/2013 Davin       CAR 284420 - Added include PATK8OFD
. V10.00.01 06/04/2010 Mike Laming CAR 219246 - Added include PATK7OFD
. V9.09.001 18/03/2008 Mike Laming CAR 163918 - Added include PATK6OFD
. V9.06.001 15/05/2006 Mike Laming CAR 105244 - Added include PATK5OFD
. V9.03.002 07/06/2004 H.Son      CAR49037 - Added include PATK4OFD
. V9.03.001 17/11/2003 S.Litewka  CAR20222 - Added include PATK3OFD
. V5.07.002 12/07/1999 B.G.Ackland Change Spare to 10
. V6.06.001 01/06/1999 P.D Created FD                                        
. *----------------------------------------------------------------------
. * Include Name  :   PATKCOFD.INC
. *
. * Function      :   File Def'n Include for WEB          
. *                   Patient ICD10 Procedure Codes Keyword Index
. *
. * File Type     :   SQL
. *
. * File Name     :   patkcoaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PATKCOA1   IFILE    SQL, FIXED=35, KEY="U1-9,10-24"                             
PATKCOA2   IFILE    SQL, FIXED=35, KEY="U10-24,1-9"                             
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PTCOITM   DIM       9      9        1     ICD10 Proc Code                    
PTCOKWD   DIM       15     15       10    Key Word                           
PTCOSPA   DIM       10     10       25    Spare                              
.
.End of Record                      35   
.
          INC       PATK3OFD/INC    * ICD10 Version 3 Procedure Keyword Index
          INC       PATK4OFD/INC    * ICD10 Edition 4 Procedure Keyword Index
          INC       PATK5OFD/INC    * ICD10 Edition 5 Procedure Keyword Index
          INC       PATK6OFD/INC    * ICD10 Ed.6 Procedure Keyword Index
          INC       PATK7OFD/INC    * ICD10 Ed.7 Proc. Keyword Index  *I-219246
          INC       PATK8OFD/INC    * ICD10 Ed.8 Proc. Keyword Index  *I-284420
          INC       PATK9OFD/INC    * ICD10 Ed.9 Proc. Keyword Index  *I-311669
          INC       PATKXOFD/INC    * ICD10 Ed.10 Proc. Keyword Index *I-0833093
          INC       PTOK11FD/INC    * ICD10 Ed.11 Proc. Keyword Index
          INC       PTOK12FD/INC    * ICD10 Ed.12 Proc. Keyword Index
