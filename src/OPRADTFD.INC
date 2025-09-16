. V10.11.01 25/09/2017 DS C-0837479 Added audit type 021                        
. V10.08.01 11/10/2016 EC C-0318770 Added audit type 020                        
. V10.06.01 22/04/2015 DN C-299117 Added new Audit Types - 018 & 019            
. V10.05.01 12/08/2014 JP C-299980 Created                                      
. *----------------------------------------------------------------------
. * Include Name  :   OPRADTFD.INC
. *
. * Function      :   File Def'n Include for Theatre System                     
. *                   Theatre Audit Details              
. *
. * File Type     :   SQL
. *
. * File Name     :   opradtaf.dat
. *
. * Index Values  :   KEY39   KEY47                                          
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
OPRADTA1   IFILE    SQL, FIXED=329, KEY="U1-10,27-34,35-42,53-55,43-52"
OPRADTA2   IFILE    SQL, FIXED=329, KEY="U11-18,1-10,27-34,35-42,53-55,43-52"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
OPADUNIQ  DIM       10     10       1     Theatre Unique ID                  
OPADURNO  DIM       8      8        11    UR Number                          
OPADVISN  DIM       8      8        19    Booking/Visit Number               
OPADADAT  DIM       8      8        27    Audit Date CCYYMMDD                
OPADATIM  DIM       8      8        35    Audit Time hh:mm:ss                
OPADWEBU  DIM       10     10       43    Web User Id (websecaf)             
OPADATYP  DIM       3      3        53    Audit Type                         
.                                         001=Booking Created                  
.                                         002=Booking Updated                  
.                                         003=Cancelled                        
.                                         004=Transferred                      
.                                         005=Case Reorded                     
.                                         006=Adjusted Start Time              
.                                         007=Merged Booking                   
.                                         008=Changed UR                       
.                                         009=Reinstated Booking               
.                                         010=Day Surgery Details Updated      
.                                         011=Arrival Details Updated          
.                                         012=Anaesthetic Details Updated      
.                                         013=Surgery Details Updated          
.                                         014=Subsequent Team Added            
.                                         015=Recovery Details Updated         
.                                         016=Confirmed Adm Date Updated       
.                                         017=Theatre Items Updated            
.                                         018=Theatre Case Completed           
.                                         019=Theatre Case Flagged Incomplete  
.                                         020=Booking Updated With Ward/Bed    
.                                             Information From The Bed Board   
.                                         021=S14 Inbound Message              
OPADCODF  DIM       3      3        56    Coded Field                        
OPADORIG  DIM       100    100      59    Original Value                     
OPADCHAN  DIM       100    100      159   Changed Value                      
OPADSPAR  DIM       70     70       259   Spare                              
.
.End of Record                      329  
.
