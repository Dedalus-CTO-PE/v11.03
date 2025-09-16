. *----------------------------------------------------------------------
. * Include Name  :   PATBDETD.INC
. *
. * Function      :   CGI variables for PATBDEFD - patbdeaf.dat
. *                   Billing Default Details            
. *
. * Modifications :   
. *
. * V11.00.01 14/10/2020  Tracey Nguyen         TSK 0888079
. *                       Created include
. *
. *----------------------------------------------------------------------
.
.Name     Type      Length Description
.----     ----      ------ -----------
PTBDE001  DIM       3      Hospital (pathspaf)                
PTBDE002  DIM       8      Effective Start Date               
PTBDE003  DIM       8      Effective End Date                 
PTBDE004  DIM       30     Value Set ID Code                  
.                          (pmsvscaf.pmvccode where pmvcsid=BRA 
.                          Billing Reason for Admission)        
PTBDE005  DIM       3      Claim Type (Category CL)           
PTBDE006  DIM       6      Health Fund (patfn1af.hcode)       
PTBDE007  DIM       8      Health Fund Level (patfn1af.hftabl)
PTBDE008  DIM       3      Intended Length of Stay (Catg VI)  
PTBDE009  FORM      3      Target Length of Stay (TLOS)       
PTBDE010  DIM       9      Casemix Code (patcmcaf.ptcacode)   
PTBDE011  DIM       1      Casemix Payment (Y/N)              
PTBDE012  DIM       4      Provisional DRG (patdgwaf.ptdwdrgc)
PTBDE013  DIM       3      Provisional DRG Version (patdgwaf.ptdwdrgv)
PTBDE014  DIM       3      Admission Type (Category A)        
PTBDE015  DIM       3      Care Type (Category CC)            
PTBDE016  DIM       8      Program Code (pmsprgaf.pmpgcode)   
PTBDE017  DIM       3      OEC Presenting Illness Code (Category il)
PTBDE018  DIM       9      OEC MBS Item (patitemn.itemno)     
PTBDE019  DIM       3      Billing Default Alerts (Category az)        
.
