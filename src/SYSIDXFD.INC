. *----------------------------------------------------------------------
. * Include Name  :   SYSIDXFD.INC
. *
. * Function      :   File Def'n Include for Common
. *                   Index Definition Table              
. *
. * File Type     :   SQL
. *
. * File Name     :   sysidxaf.dat
. *
. * Modifications :   
. *       V10.04.01 03/01/2014  Don Nguyen    CAR 294453
. *                 Moved SYIDIUD out of spare variable
. *       V10.03.01 10/11/2011  Mike Laming   CAR ??????
. *                 Added SYIDIUD (does Index accept duplicates) in Spare
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
SYSIDXA1   IFILE    SQL, FIXED=153, KEY="U1-2,3-4,5-5"                          
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
SYIDSYS   DIM       2      2        1     System Code                        
SYIDFIL   DIM       2      2        3     File Code                          
SYIDIDX   DIM       1      1        5     Index Number                       
SYIDDES   DIM       35     35       6     Description                        
SYIDFL1   DIM       4      4        41    Index Segment 1                    
SYIDFL2   DIM       4      4        45                  2                    
SYIDFL3   DIM       4      4        49                  3                    
SYIDFL4   DIM       4      4        53                  4                    
SYIDFL5   DIM       4      4        57                  5                    
SYIDFL6   DIM       4      4        61                  6                    
SYIDFL7   DIM       4      4        65                  7                    
SYIDFL8   DIM       4      4        69                  8                    
SYIDIUD   DIM       1      1        73    Does Index accept duplicates (Y/N)
SYIDSPA   DIM       79     79       74    Spare                              
.
.End of Record                      153  
.
. Fields stored in the SPARE variable
. -----------------------------------
.
