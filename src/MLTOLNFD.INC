. V11.01.01 27/05/2021 EC C-0900650 Increased MLOLMIN to 4 characters           
. V11.01.01 13/05/2021 EC C-0900650 Created FD                                  
. *----------------------------------------------------------------------
. * Include Name  :   MLTOLNFD.INC
. *
. * Function      :   File Def'n Include for Multi Hospital                     
. *                   Overdue Leave Notifications        
. *
. * File Type     :   SQL
. *
. * File Name     :   mltolnaf.dat
. *
. * Index Values  :   KEY13                                                  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
MLTOLNA1   IFILE    SQL, FIXED=258, KEY="U1-3,4-6,7-9,10-13"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
MLOLHOSP  DIM       3      3        1     Hospital Id (pathspaf)             
MLOLWARD  DIM       3      3        4     Ward (patwr1af)                    
.                                         " " = All/Default                    
MLOLLTYP  DIM       3      3        7     Type of Leave (Cat TL)             
.                                         " " = All/Default                    
MLOLOMIN  DIM       4      4        10    Overdue Minutes (1 to 9999)        
MLOLGOVM  DIM       1      1        14    Greater than Overdue Minutes Value 
.                                         "0" = "No", "1" = Yes                
MLOLSMSM  DIM       3      3        15    SMS to Send (patletrf)             
MLOLREMN  DIM       2      2        18    Reminder Number                    
.                                         Right justified number
MLOLSNPC  DIM       1      1        20    Send to Patient and Carer          
.                                         If on Leave. "0" = No, "1" = Yes     
MLOLSTWS  DIM       1      1        21    Send to Ward Staff                 
.                                         "0" = No, "1" = Yes                  
MLOLWSMN  DIM       20     20       22    Ward Staff Mobile Number           
MLOLSNDS  DIM       1      1        42    Send to Supervisor                 
.                                         "0" = "No", "1" = Yes                
MLOLSPMN  DIM       20     20       43    Supervisor Mobile Number           
.                                         "0" = No, "1" = Yes                  
MLOLSNDM  DIM       1      1        63    Send to Manager                    
.                                         "0" = No, "1" = Yes                  
MLOLMAMN  DIM       20     20       64    Manager Mobile Number              
MLOLSNDO  DIM       1      1        84    Send to Other                      
.                                         "0" = No, "1" = Yes                  
MLOLOTMN  DIM       20     20       85    Other Mobile Number                
MLOLIACT  DIM       1      1        105   Record Inactive                    
.                                         "0" = No, "1" = Yes                  
MLOLCDAT  DIM       8      8        106   Date Record Created (CCYYMMDD)     
MLOLCTIM  DIM       8      8        114   Time Record Created (HH:MM:SS)     
MLOLCUID  DIM       10     10       122   WEB User ID Created (websecaf)     
MLOLUDAT  DIM       8      8        132   Update Date (CCYYMMDD)             
MLOLUTIM  DIM       8      8        140   Update Time (HH:MM:SS)             
MLOLUUID  DIM       10     10       148   WEB User ID Updated (websecaf)     
MLOLSPAR  DIM       100    100      158   Spare                              
.
.End of Record                      258  
.
