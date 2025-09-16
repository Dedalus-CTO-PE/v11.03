. V10.02.01 08/06/2011 DS C-240723 Added fields PROV to ACTV                    
. V9.12.001 08/09/2009 PV  Added HSRI Hospital Supplier Ref Id CAR 185999       
. V9.05.001 14/03/2006 EC  Created FD CAR 78533                                 
. *----------------------------------------------------------------------
. * Include Name  :   MLTHCPFD.INC
. *
. * Function      :   File Def'n Include for Multi Hospital                     
. *                   HCP Codes                          
. *
. * File Type     :   SQL
. *
. * File Name     :   mlthcpaf.dat
. *
. * Index Values  :   KEY13   KEY13                                          
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
MLTHCPA1   IFILE    SQL, FIXED=116, KEY="U1-3,4-13"                             
MLTHCPA2   IFILE    SQL, FIXED=116, KEY="U4-13,1-3"                             
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
MLHCHOSP  DIM       3      3        1     Hospital ID (pathspaf)             
MLHCHCPC  DIM       10     10       4     HCP Code                           
MLHCHSRI  DIM       11     11       14    Hospital Supplier Ref Id           
MLHCPROV  DIM       10     10       25    Provider Number                    
MLHCSTAT  FORM      2      2        35    Status                             
.                                         0 - Attending Doctor                 
.                                         1 - Referring Doctor                 
.                                         2 - Attending & Referring Doctor     
.                                         3 - GP                               
.                                         4 - Attending Doctor & GP            
.                                         5 - Referring Doctor & GP            
.                                         6 - Attending, Referring & GP        
.                                         7 - Other                            
.                                         8 - Other Attending                  
.                                         9 - Other Referring                  
.                                         10 - Other Attending & Referring     
MLHCOSLV  DIM       3      3        37    Operating Supervision Levl (Cat DL)
MLHCSDAT  DIM       8      8        40    Start Date (ccyymmdd)              
MLHCEDAT  DIM       8      8        48    End Date (ccyymmdd)                
MLHCATYP  DIM       3      3        56    Accreditation Type (Cat AT)        
MLHCDFAC  DIM       8      8        59    Date of First Accred. (ccyymmdd)   
MLHCDLAC  DIM       8      8        67    Date of Last Accred. (ccyymmdd)    
MLHCYACC  FORM      2      2        75    Years Of Accreditation             
MLHCDEAC  DIM       8      8        77    Accred. Expiry Date (ccyymmdd)     
MLHCACTV  DIM       1      1        85    Active (0=Active/1=Inactive)       
MLHCSPAR  DIM       30     30       86    Spare                              
.
.End of Record                      116  
.
