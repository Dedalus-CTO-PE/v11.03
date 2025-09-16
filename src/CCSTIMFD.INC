. VF.01.001 08/05/2000 SB                                                    
. *----------------------------------------------------------------------
. * Include Name  :   CCSTIMFD.INC
. *
. * Function      :   File Def'n Include for Clinical Costing
. *                   Casemix Time Period Analysis       
. *
. * File Type     :   SQL
. *
. * File Name     :   ccstimaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
CCSTIMA1   IFILE    SQL, FIXED=105, KEY="U1-1,2-9"                              
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
CCTMDEF   DIM       1      1        1     Time Periods Definition (1-9)      
CCTMDAT   DIM       8      8        2     Period Ending Date                 
CCTMDES   DIM       35     35       10    Period Description                 
CCTMLV2   DIM       10     10       45    Dimension 2 eg Year                
CCTMLV3   DIM       10     10       55    Dimension 3 eg Quarter/Month       
CCTMLV4   DIM       10     10       65    Dimension 4 eg Months/Fortnight/Wks
CCTMSPA   DIM       30     30       75    Spare                              
.
.End of Record                      105  
.
