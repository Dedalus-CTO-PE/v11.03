. V11.00.01 16/04/2020 TN C-0889111 Added PMHGSMD1/2 from SPARE                 
. V10.05.01 08/08/2014 SA C-304731 Moved PMHGFXDS, PMHGELDS & PMHGPSCI into FD  
. V                                from SPARE.                                  
. V10.04.02 21/03/2014 PV  C-287404                                             
. V                         Added PMHGFXDS - Fax Discharge Summary 1=Yes 0=No   
. V                         Added PMHGELDS - Electronic Discharge Summary       
. V                                          1=Yes 0=No                         
. V                         Added PMHGPSCI - Practice System Clinic ID          
. V10.04.01 05/02/2014 EC C-291879 Added PMHGHPIO - HPI-O Number                
. V5.10.001 05/04/2001 SB  Created FD                                           
. V5.10.002 10/04/2001 EC  Created FD                                           
. V9.04.001 07/10/2005 DS  Added index 2                                        
. V9.04.002 27/10/2005 EC  Changed description of PMHGPPCN CAR 79067            
. *----------------------------------------------------------------------
. * Include Name  :   PMSHCGFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   HCP Practice was patgppaf          
. *
. * File Type     :   SQL
. *
. * File Name     :   pmshcgaf.dat
. *
. * Index Values  :   KEY12   KEY72                                          
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PMSHCGA1   IFILE    SQL, FIXED=885, KEY="U1-10,11-12"
PMSHCGA2   IFILE    SQL, FIXED=885, KEY="U105-164,1-10,11-12"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMHGPRAC  DIM       10     10       1     HCP Practice Code                  
PMHGCNTR  DIM       2      2        11    Count                              
PMHGTYPE  DIM       2      2        13    Type of HCP Practice               
PMHGSPCD  DIM       10     10       15    Senior Partner HCP Code (pmshcpaf) 
PMHGPNAM  DIM       80     80       25    HCP Practice Name                  
PMHGADD1  DIM       60     60       105   HCP Practice Address 1             
PMHGADD2  DIM       60     60       165   HCP Practice Address 2             
PMHGADD3  DIM       60     60       225   HCP Practice Address 3             
PMHGADD4  DIM       60     60       285   HCP Practice Address 4             
PMHGADD5  DIM       60     60       345   HCP Practice Address 5             
PMHGADD6  DIM       60     60       405   HPC Practice Address 6             
PMHGPOST  DIM       8      8        465   HCP Practice Post Code             
PMHGSTAT  DIM       4      4        473   HCP Practice State                 
PMHGPEML  DIM       80     80       477   HCP Practice Email Address         
PMHGPTEL  DIM       20     20       557   HCP Practice Telephone Number      
PMHGPFAX  DIM       20     20       577   HCP Practice Fax Number            
PMHGPSTT  DIM       30     30       597   HCP Practice Status                
PMHGPPCN  DIM       30     30       627   HCP Practice Preferred Contact     
.                                         NZ - Healthlink Mailbox              
PMHGPPNO  DIM       10     10       657   HCP Practice Provider Number       
PMHGFMDT  DIM       8      8        667   Formation Date of Practice ccyymmdd
PMHGDSDT  DIM       8      8        675   Dissolve Date of Practice ccyymmdd 
PMHGGPFH  DIM       5      5        683   GP Fundholder Code                 
PMHGDTFA  DIM       8      8        688   Date GP Fund Holder Amended        
PMHGDTFE  DIM       8      8        696   GP Fund Holder End Date            
PMHGGPPI  DIM       1      1        704   GPFH Extrct GP Prac Inc 0=INC,1=EXC
PMHGUPFL  DIM       1      1        705   Update Flag M=manual, A=automatic  
PMHGSTTS  DIM       1      1        706   Status 0=active, 1=inactive        
PMHGPCGC  DIM       5      5        707   Primary Care Group Code (cmscomaf) 
PMHGPRMK  DIM       1      1        712   Processed Record Marker 1=Processed
PMHGCDTE  DIM       8      8        713   Date Record Created (ccyymmdd)     
PMHGCTIM  DIM       8      8        721   Time Record Created (hh:mm:ss)     
PMHGWEBC  DIM       10     10       729   WEB User Id creator (websecaf)     
PMHGLUPD  DIM       8      8        739   Date Record Last Updated (ccyymmdd)
PMHGLUPT  DIM       8      8        747   Time Record Last Updated (hh:mm:ss)
PMHGWEBU  DIM       10     10       755   WEB User Id updated (websecaf)     
PMHGHPIO  DIM       20     20       765   HPI-O Number                       
PMHGFXDS  DIM       1      1        785   Fax Discharge Summary 1=Yes 0=No   
PMHGELDS  DIM       1      1        786   Electronic Discharge Summary       
.                                         1=Yes 0=No                           
PMHGPSCI  DIM       20     20       787   Practice System Clinic ID          
PMHGSMD1  DIM       16     16       807   SMD GUID value 1                   
PMHGSMD2  DIM       16     16       823   SMD GUID value 2                   
PMHGSPAR  DIM       46     46       839   Spare Variable                     
.
.End of Record                      885  
.
