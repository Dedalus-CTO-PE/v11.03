. *----------------------------------------------------------------------
. * Include Name  :   IBATMHFD.INC
. *
. * Function      :   File Def'n Include for Common                            
. *                   Template Header                    
. *
. * File Type     :   SQL
. *
. * File Name     :   ibatmhaf.dat
. *
. * Modifications :   03/01/2017  Davin          TSK 0319852
. *                   Added IBTHCOMM to IBTHUTIM and increased spare length
. *                   18/06/2004  Pat Dirito     CAR 50842
. *                   Added var IBTHACTV - Active Indicator & Index 3
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
IBATMHA1   IFILE    SQL, FIXED=229, KEY="U1-6"
IBATMHA2   IFILE    SQL, FIXED=229, KEY="U43-45,1-6"
IBATMHA3   IFILE    SQL, FIXED=229, KEY="U7-36,1-6"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
IBTHSCOD  DIM       6      6        1     Stationery Code                    
IBTHDESC  DIM       30     30       7     Stationery Description             
IBTHWIDT  FORM      3      3        37    Max Column Width for Printing      
IBTHLENG  FORM      3      3        40    Paper Length of Stationery         
IBTHSTYP  DIM       3      3        43    Stationery Type                    
IBTHACTV  DIM       1      1        46    Active Indicator 1=Active 0=Not Active
IBTHCOMM  DIM       80     80       47    Stationery Template Comments
IBTHCUID  DIM       10     10       127   WEB User ID Created (websecaf)
IBTHCDAT  DIM       8      8        137   Date Record Created (ccyymmdd)
IBTHCTIM  DIM       8      8        145   Time Record Created (hh:mm:ss)
IBTHUUID  DIM       10     10       153   WEB User ID Updated (websecaf)
IBTHUDAT  DIM       8      8        163   Date Record Updated (ccyymmdd)
IBTHUTIM  DIM       8      8        171   Time Record Updated (hh:mm:ss)
IBTHSPAR  DIM       50     50       179   Spare variable                     
.
.End of Record                      229  
.
IBTHSTFM  FORM      3                     Stationery Type
