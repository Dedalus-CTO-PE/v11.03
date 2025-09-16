. *----------------------------------------------------------------------
. * Include Name  :   MRTAUCTD.INC
. *
. * Function      :   CGI variables for MRTAUCFD - mrtaucaf
. *
. * Modifications :
. *
. *V11.00.01 12/03/2020 Tracey Nguyen            TSK 0889496
. *          Added MRAUC025 - Doctor Did Not Respond
. *          Added MRAUC026 - HCP Code        
. *          Added MRAUC027 - Outcome of Change          
. *          Added MRAUC028 - Outcome Date               
. *----------------------------------------------------------------------
. *V10.04.01 27/03/2014 Peter Vela               CAR 294526
. *          Added MRAUC022 - Original Dollar Value
. *          Added MRAUC023 - New Dollar Value
. *          Added MRAUC024 - Difference in Dollar Value
. * V9.04.00 19/11/2004 Lina Vo                  CAR 34301
. *          Created include
. *----------------------------------------------------------------------
.
.Name     Type      Length Description
.----     ----      ------ -----------
MRAUC001  DIM       8      Visit Number                       
MRAUC002  DIM       2      Episode Number                     
MRAUC003  DIM       8      Audit Date (CCYYMMDD)              
MRAUC004  DIM       4      Original DRG                       
MRAUC005  DIM       11     Original WIES                      
MRAUC006  DIM       4      New DRG                            
MRAUC007  DIM       11     New WIES                           
MRAUC008  DIM       11     WIES Difference                    
MRAUC009  DIM       10     Clinician                          
MRAUC010  DIM       3      Type of Audit (CAT YA)             
MRAUC011  DIM       3      Reason for Change (CAT YB)         
MRAUC012  DIM       1      No Change (Y/N)                    
MRAUC013  DIM       100    Comments                           
MRAUC014  DIM       8      Date Record Created (CCYYMMDD)     
MRAUC015  DIM       8      Time Record Created (HH:MM:SS)               
MRAUC016  DIM       10     Web User Created (websecaf)        
MRAUC017  DIM       30     User Created Description           
MRAUC018  DIM       8      Date Last Updated (CCYYMMDD)     
MRAUC019  DIM       8      Time Last Updated (HH:MM:SS)               
MRAUC020  DIM       10     Web User Updated (websecaf)        
MRAUC021  DIM       30     User Updated Description           
MRAUC022  DIM       15     Original Dollar Value
MRAUC023  DIM       15     New Dollar Value
MRAUC024  DIM       15     Difference in Dollar Value
MRAUC025  DIM       1      Doctor Did Not Respond
MRAUC026  DIM       10     HCP Code           
MRAUC027  DIM       3      Outcome of Change (CAT aO)
MRAUC028  DIM       8      Outcome Date (CCYYMMDD)
