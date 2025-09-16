. 23/11/1993  Glenn Berry      Hawkes Bay Changes            
.             Added "2 = Special (if OPCNSPET=1)" to OPITINDC      
. V9.02.01  08.01.2002 Ashwin Add Index 4
. V9.04.001 16/02/2005 LV  Added to FD Generator. Added new fields CAR 56404
. *----------------------------------------------------------------------
. * Include Name  :   OPRITEFD.INC
. *
. * Function      :   File Def'n Include for Theatre System                     
. *                   Operating Rooms Item Table         
. *
. * File Type     :   SQL
. *
. * File Name     :   opriteaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
OPRITEA1   IFILE    SQL, FIXED=659, KEY="U1-15"                                 
OPRITEA2   IFILE    SQL, FIXED=659, KEY="U16-65,1-15"                           
OPRITEA3   IFILE    SQL, FIXED=659, KEY="U67-69,1-15"                           
OPRITEA4   IFILE    SQL, FIXED=659, KEY="U66-66,16-65,1-15"                     
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
OPITCODE  DIM       15     15       1     Item Code/Unique Number            
OPITDESC  DIM       50     50       16    Item Description                   
OPITINDC  DIM       1      1        66    Item Type                          
.                                         0 = Normal,
.                                         1 = Disposable,
.                                         2 = Special (if OPCNSPET=1)
.                                         3 = Diathermy
OPITGRPG  DIM       3      3        67    Grouping/Use Count (Cat OE)        
OPITUCSS  DIM       2      2        70    Use Count Since Sterilisation      
OPITCCBN  DIM       15     15       72    Current CSD Batch Number           
OPITCATN  DIM       7      7        87    Catalog Number                     
OPITDIPD  DIM       8      8        94    Disposal Date (CCYYMMDD)           
OPITSCAT  DIM       15     15       102   Supplier Catalog Number            
OPITSDES  DIM       50     50       117   Supplier Details                   
OPITLMAD  DIM       8      8        167   Last Maintenance Date (CCYYMMDD)   
OPITCRST  DIM       1      1        175   Current Status  
.                                         1 = Available  
.                                         2 = Used  
.                                         3 = Requires Maintenance  
.                                         4 = Expired                   
OPITSTDT  DIM       8      8        176   Date Status Changed (CCYYMMDD)     
OPITNOTE  DIM       50     50       184   Notes/Comments                     
OPITUSLO  DIM       15     15       234   Usual Location/Tray                
OPITCULO  DIM       15     15       249   Current Location/Tray              
OPITUDT1  DIM       50     50       264   User Defined Text 1                
OPITUDT2  DIM       50     50       314   User Defined Text 2                
OPITUDT3  DIM       50     50       364   User Defined Text 3                
OPITUDT4  DIM       50     50       414   User Defined Text 4                
OPITUDT5  DIM       50     50       464   User Defined Text 5                
OPITUDF1  DIM       3      3        514   User Defined Cat 1 (Category o1)   
OPITUDF2  DIM       3      3        517   User Defined Cat 2 (Category o2)   
OPITUDF3  DIM       3      3        520   User Defined Cat 3 (Category o3)   
OPITUDF4  DIM       3      3        523   User Defined Cat 4 (Category o4)   
OPITUDF5  DIM       3      3        526   User Defined Cat 5 (Category o5)   
OPITDTE1  DIM       8      8        529   User Defined Date 1 (CCYYMMDD)     
OPITDTE2  DIM       8      8        537   User Defined Date 2 (CCYYMMDD)     
OPITDTE3  DIM       8      8        545   User Defined Date 3 (CCYYMMDD)     
OPITDTE4  DIM       8      8        553   User Defined Date 4 (CCYYMMDD)     
OPITDTE5  DIM       8      8        561   User Defined Date 5 (CCYYMMDD)     
OPITTME1  DIM       8      8        569   User Defined Time 1 (HH:MM:SS)     
OPITTME2  DIM       8      8        577   User Defined Time 2 (HH:MM:SS)     
OPITTME3  DIM       8      8        585   User Defined Time 3 (HH:MM:SS)     
OPITTME4  DIM       8      8        593   User Defined Time 4 (HH:MM:SS)     
OPITTME5  DIM       8      8        601   User Defined Time 5 (HH:MM:SS)     
OPITSPAR  DIM       50     50       609   Spare Variable                     
.
.End of Record                      659  
.
