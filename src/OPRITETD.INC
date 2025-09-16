. *----------------------------------------------------------------------
. * Include Name  :   OPRITEFD.INC
. *
. * Function      :   CGI variables for OPRITEFD -opriteaf                      
. *
. * File Name     :   opriteaf.dat
. *
. * Modifications :
. * V9.04.00 17/02/2005 Lina Vo                  CAR 56404
. *          Created include
. *----------------------------------------------------------------------
.
.Name     Type      Length Description
.----     ----      ------ -----------
OPRIT001  DIM       15     Item Code/Unique Number            
OPRIT002  DIM       50     Item Description                   
OPRIT003  DIM       1      Item Type                          
.                          0 = Normal,
.                          1 = Disposable,
.                          2 = Special (if OPCNSPET=1)
.                          3 = Diathermy
OPRIT004  DIM       3      Grouping/Use Count (Cat OE)        
OPRIT005  DIM       2      Use Count Since Sterilisation      
OPRIT006  DIM       15     Current CSD Batch Number           
OPRIT007  DIM       7      Catalog Number                     
OPRIT008  DIM       8      Disposal Date (CCYYMMDD)           
OPRIT009  DIM       15     Supplier Catalog Number            
OPRIT010  DIM       50     Supplier Details                   
OPRIT011  DIM       8      Last Maintenance Date (CCYYMMDD)   
OPRIT012  DIM       1      Current Status  
.                          1 = Available  
.                          2 = Used  
.                          3 = Requires Maintenance  
.                          4 = Expired                   
OPRIT013  DIM       8      Date Status Changed (CCYYMMDD)     
OPRIT014  DIM       50     Notes/Comments                     
OPRIT015  DIM       15     Usual Location/Tray                
OPRIT016  DIM       15     Current Location/Tray              
OPRIT017  DIM       50     User Defined Text 1                
OPRIT018  DIM       50     User Defined Text 2                
OPRIT019  DIM       50     User Defined Text 3                
OPRIT020  DIM       50     User Defined Text 4                
OPRIT021  DIM       50     User Defined Text 5                
OPRIT022  DIM       3      User Defined Cat 1 (Category o1)   
OPRIT023  DIM       3      User Defined Cat 2 (Category o2)   
OPRIT024  DIM       3      User Defined Cat 3 (Category o3)   
OPRIT025  DIM       3      User Defined Cat 4 (Category o4)   
OPRIT026  DIM       3      User Defined Cat 5 (Category o5)   
OPRIT027  DIM       8      User Defined Date 1 (CCYYMMDD)     
OPRIT028  DIM       8      User Defined Date 2 (CCYYMMDD)     
OPRIT029  DIM       8      User Defined Date 3 (CCYYMMDD)     
OPRIT030  DIM       8      User Defined Date 4 (CCYYMMDD)     
OPRIT031  DIM       8      User Defined Date 5 (CCYYMMDD)     
OPRIT032  DIM       8      User Defined Time 1 (HH:MM:SS)     
OPRIT033  DIM       8      User Defined Time 2 (HH:MM:SS)     
OPRIT034  DIM       8      User Defined Time 3 (HH:MM:SS)     
OPRIT035  DIM       8      User Defined Time 4 (HH:MM:SS)     
OPRIT036  DIM       8      User Defined Time 5 (HH:MM:SS)     
.
