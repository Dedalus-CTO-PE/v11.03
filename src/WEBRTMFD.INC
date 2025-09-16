. 5.09 .001 21/07/2000 WEB                                                   
. *----------------------------------------------------------------------
. * Include Name  :   WEBRTMFD.INC
. *
. * Function      :   File Def'n Include for Web Reporting                      
. *                   Report template Master             
. *
. * File Type     :   SQL
. *
. * File Name     :   webrtmaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
WEBRTMA1   IFILE    SQL, FIXED=177, KEY="U1-8,9-11"                             
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
WBRTPRID  DIM       8      8        1     Program ID                         
WBRTTMNM  DIM       3      3        9     Template Number                    
WBRTDESC  DIM       35     35       12    Description                        
WBRTSPID  DIM       50     50       47    Last Spool File ID                 
WBRTSPAR  DIM       80     80       97    Spare                              
.
.End of Record                      177  
.
