. v9.12.001 30/07/2009 ML  Increase RD & LS count fields to 5 characters     
. V9.11.001 08/01/2009 ML  New Table for PRIMHD                                 
. *----------------------------------------------------------------------
. * Include Name  :   MEHPTFFD.INC
. *
. * Function      :   File Def'n Include for Mental Health                      
. *                   PRIMHD Transmission Files (Batches)
. *
. * File Type     :   SQL
. *
. * File Name     :   mehptfaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
MEHPTFA1   IFILE    SQL, FIXED=100, KEY="U1-8,9-11"                             
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
MHPFXDAT  DIM       8      8        1     Extract Date                       
MHPFXNUM  DIM       3      3        9     Extract Run No. for this date      
MHPFSORG  DIM       8      8        12    Submitting Org.Id. (MHCNORID)      
MHPFSTAT  DIM       1      1        20    Transmission Status                
.                                         1=Sent, 2=Errors, 3=Accepted  
MHPFFDAT  DIM       8      8        21    Extracted From Date                
MHPFTDAT  DIM       8      8        29    Extracted To Date                  
MHPFRDNO  DIM       5      5        37    No. of RD records sent             
MHPFRDER  DIM       5      5        42    No. of RD Errors returned          
MHPFRDWN  DIM       5      5        47    No. of RD Warnings returned        
MHPFLSNO  DIM       5      5        52    No. of LS records sent             
MHPFLSER  DIM       5      5        57    No. of LS Errors returned          
MHPFLSWN  DIM       5      5        62    No. of LS Warnings returned        
MHPFSPAR  DIM       33     33       67    Spare                              
.
.End of Record                      100  
.
