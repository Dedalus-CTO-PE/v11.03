. VF.01.001 08/05/2000 SB                                                    
. *----------------------------------------------------------------------
. * Include Name  :   CCSEWTFD.INC
. *
. * Function      :   File Def'n Include for Clinical Costing
. *                   Episode Weight Table               
. *
. * File Type     :   SQL
. *
. * File Name     :   ccsewtaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
CCSEWTA1   IFILE    SQL, FIXED=120, KEY="U1-2,3-18"                             
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
CCEWHCD   DIM       2      2        1     Hospital Code                      
CCEWEPS   DIM       16     16       3     Episode                            
CCEWFWT   FORM      8.4    7        19    Fixed Weight                       
CCEWVWT   FORM      8.4    7        26    Variable Weight                    
CCEWTWT   FORM      8.4    7        33    Total Weight                       
CCEWSPA   DIM       80     80       40    Spare                              
.
.End of Record                      120  
.
