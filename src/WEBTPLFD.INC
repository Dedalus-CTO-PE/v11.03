. V10.07.01 23/10/2015 BGA C-999999 New Menu Generation Changes                 
. *----------------------------------------------------------------------
. * Include Name  :   WEBTPLFD.INC
. *
. * Function      :   File Def'n Include for Web System Table                   
. *                   Template Master Details            
. *
. * File Type     :   SQL
. *
. * File Name     :   webtplaf.dat
. *
. * Index Values  :   KEY13                                                  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
WEBTPLA1   IFILE    SQL, FIXED=159, KEY="U1-8,9-10,11-13"                       
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
WBTPPRG   DIM       8      8        1     Server Program ID                  
WBTPOPT   DIM       2      2        9     Server Option                      
WBTPTPL   DIM       3      3        11    Business Server Page               
WBTPDES   DIM       25     25       14    Description                        
WBTPFIL   DIM       40     40       39    File Name                          
WBTPLEV   DIM       2      2        79    Security Level                     
WBTPMSC   DIM       1      1        81    Menu Secured (Y/N) 0=No 1=Yes      
WBTPMTY   DIM       1      1        82    Menu Link Type                     
.                                            0-Not Menu Item                   
.                                            1-Application                     
.                                            2-Patient                         
.                                            3-Report                          
WBTPTAR   DIM       1      1        83    Menu target                        
.                                             0-Not Applicable                 
.                                             1-Content iframe                 
.                                             2-Pop Up iframe                  
.                                             3-New Window                     
WBTPWID   DIM       5      5        84    Open Width Default                 
WBTPHIG   DIM       5      5        89    Open Height Default                
WBTPLP1   DIM       8      8        94    Additional Link Parameter 1        
WBTPLP2   DIM       8      8        102   Additional Link Parameter 2        
WBTPLP3   DIM       8      8        110   Additional Link Parameter 3        
WBTPLP4   DIM       8      8        118   Additional Link Parameter 4        
WBTPSPA   DIM       33     33       126   Spare                              
.
.End of Record                      159  
.
