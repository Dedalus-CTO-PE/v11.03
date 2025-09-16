. V11.01.02 19/04/2021 PVL C-0902857 Fixed Fund Reference ID length             
. V11.01.01 13/04/2021 PVL C-0902857 Created FD                                 
. *----------------------------------------------------------------------
. * Include Name  :   WEBIHGFD.INC
. *
. * Function      :   File Def'n Include for Web System Table                   
. *                   WebServices IHCW Service Assessment
. *
. * File Type     :   SQL
. *
. * File Name     :   webihgaf.dat
. *
. * Index Values  :   KEY43   KEY67   KEY79                                  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
WEBIHGA1   IFILE    SQL, FIXED=332, KEY="U1-3,4-23,24-38,39-41,42-43"
WEBIHGA2   IFILE    SQL, FIXED=332, KEY="U172-195,1-3,4-23,24-38,39-41,42-43"
WEBIHGA3   IFILE    SQL, FIXED=332, KEY="U196-231,1-3,4-23,24-38,39-41,42-43"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
WBIOFBID  DIM       3      3        1     Fund Brand ID (Participant Code)   
WBIOARID  DIM       20     20       4     Account Reference ID               
WBIOFRID  DIM       15     15       24    Fund Reference ID                  
WBIORPTC  DIM       3      3        39    Report counter (right justified)   
WBIOSECN  DIM       2      2        42    Service Counter (right justified)  
WBIOCAMT  DIM       9      9        44    Charge Amount                      
WBIOSCOD  DIM       4      4        53    Service Code                       
WBIOSDSC  DIM       80     80       57    Service Description                
WBIOFDTE  DIM       8      8        137   From Date                          
WBIONOSV  DIM       2      2        145   Number of Services                 
WBIOFBAM  DIM       9      9        147   Fund Benefit Amount                
WBIOSDTE  DIM       8      8        156   Service Date                       
WBIOTDTE  DIM       8      8        164   To Date                            
WBIOTRID  DIM       24     24       172   Transaction ID                     
WBIOMSID  DIM       36     36       196   Message ID                         
WBIOSPAR  DIM       100    100      232   Spare Variable                     
.
.End of Record                      332  
.
