. V11.01.01 25/05/2021 JP C-0900650 Added comment type = 012                    
. V10.11.01 13/07/2017 TNG C-0834684 FD Created                                 
. *----------------------------------------------------------------------
. * Include Name  :   VISUCMFD.INC
. *
. * Function      :   File Def'n Include for Visit System                       
. *                   Multiple Visit Based Comments      
. *
. * File Type     :   SQL
. *
. * File Name     :   visucmaf.dat
. *
. * Index Values  :   KEY17                                                  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
VISUCMA1   IFILE    SQL, FIXED=200, KEY="U1-8,9-11,12-14,15-17"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
VSUCVISN  DIM       8      8        1     Visit Number                       
VSUCCTYP  DIM       3      3        9     Comment Type                       
.                                         007 - Transport Comments             
.                                         011 - Return Transport Comments      
.                                         012 - Leave register notes           
VSUCUCNT  DIM       3      3        12    Unique Count Number (R-Justified)  
VSUCLNUM  DIM       3      3        15    Line Number (R-Justified)          
VSUCLINE  DIM       100    100      18    Line Comment                       
VSUCCDAT  DIM       8      8        118   Record Created Date (ccyymmdd)     
VSUCCTIM  DIM       8      8        126   Record Created Time (hh:mm:ss)     
VSUCCUID  DIM       10     10       134   Record Created by webPAS User ID   
.                                         (websecaf)                           
VSUCUDAT  DIM       8      8        144   Record Updated Date (ccyymmdd)     
VSUCUTIM  DIM       8      8        152   Record Updated Time (hh:mm:ss)     
VSUCUUID  DIM       10     10       160   Record Updated by webPAS User ID   
.                                         (websecaf)                           
VSUCSPAR  DIM       30     30       170   Spare Variable                     
.
.End of Record                      200  
.
