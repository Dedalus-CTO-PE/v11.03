. *----------------------------------------------------------------------
. * Include Name  :   PMSHCGTD.INC
. *
. * Function      :   CGI variables for PMSHCGFD - pmshcgaf.dat            
. *
. * Mods          :
. *
. *       V11.00.01 16/04/2020 Tracey Nguyen TSK 0889111
. *                 Added PMHCG040, PMHCG041
. *       V10.04.02 21/03/2014 Peter Vela    CAR 287404
. *                 Added PMHCG037, PMHCG038, PMHCG039
. *       V10.04.01 06/02/2014 Ebon Clements CAR 291879
. *                 Added PMHCG036
. *----------------------------------------------------------------------
.
.Name     Type      Length Description
.----     ----      ------ -----------
PMHCG001  DIM       10     HCP Practice Code                  
PMHCG002  FORM      2      Count                              
PMHCG003  DIM       2      Type of HCP Practice               
PMHCG004  DIM       10     Senior Partner HCP Code (pmshcpaf) 
PMHCG005  DIM       80     HCP Practice Name                  
PMHCG006  DIM       60     HCP Practice Address 1             
PMHCG007  DIM       60     HCP Practice Address 2             
PMHCG008  DIM       60     HCP Practice Address 3             
PMHCG009  DIM       60     HCP Practice Address 4             
PMHCG010  DIM       60     HCP Practice Address 5             
PMHCG011  DIM       60     HPC Practice Address 6             
PMHCG012  DIM       8      HCP Practice Post Code             
PMHCG013  DIM       4      HCP Practice State                 
PMHCG014  DIM       80     HCP Practice Email Address         
PMHCG015  DIM       20     HCP Practice Telephone Number      
PMHCG016  DIM       20     HCP Practice Fax Number            
PMHCG017  DIM       30     HCP Practice Status                
PMHCG018  DIM       30     HCP Practice Preferred Contact     
PMHCG019  DIM       10     HCP Practice Provider Number       
PMHCG020  DIM       8      Formation Date of Practice ccyymmdd
PMHCG021  DIM       8      Dissolve Date of Practice ccyymmdd 
PMHCG022  DIM       5      GP Fundholder Code                 
PMHCG023  DIM       8      Date GP Fund Holder Amended        
PMHCG024  DIM       8      GP Fund Holder End Date            
PMHCG025  DIM       1      GPFH Extrct GP Prac Inc 0=INC,1=EXC
PMHCG026  DIM       1      Update Flag M=manual, A=automatic  
PMHCG027  DIM       1      Status 0=active, 1=inactive        
PMHCG028  DIM       5      Primary Care Group Code (cmscomaf) 
PMHCG029  DIM       1      Processed Record Marker 1=Processed
PMHCG030  DIM       8      Date Record Created (ccyymmdd)     
PMHCG031  DIM       8      Time Record Created (hh:mm:ss)     
PMHCG032  DIM       10     WEB User Id creator (websecaf)     
PMHCG033  DIM       8      Date Record Last Updated (ccyymmdd)
PMHCG034  DIM       8      Time Record Last Updated (hh:mm:ss)
PMHCG035  DIM       10     WEB User Id updated (websecaf)     
PMHCG036  DIM       20     HPI-O Number     
PMHCG037  DIM       1      Fax Discharge Summary 1=Yes 0=No
PMHCG038  DIM       1      Electronic Discharge Summary
.                                   1=Yes 0=No
PMHCG039  DIM       20     Practice System Clinic ID
PMHCG040  DIM       16     SMD GUID value 1          
PMHCG041  DIM       16     SMD GUID value 2           
.
. Others -
JAVPNAME  DIM       80     variables used by JAVHCG00
HCGSNAME  DIM       80
HCGENAME  DIM       80
