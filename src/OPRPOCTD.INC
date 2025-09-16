. *----------------------------------------------------------------------
. * Include Name  : OPRPOCTD.INC
. *
. * Function      : CGI and Save Variables for OPRPOCFD - oprpocaf.dat (Ward
. *                 Pre-Operative/Arrival/Pre-Induction of Anaes Check List)
. *
. *                 This file stores three types of records: Pre-Operative 
. *                 Checklist records ,Arrival Checklist records and 
. *                 Pre-Induction of Anaesthesia records. As the 
. *                 data for both record types is captured on a single screen
. *                 (template), two sets of CGI variables are declared - one
. *                 for each record type, and a separate type for Pre-Induction
. *                 for Anaesthesia (OPPOPxxx - Pre-Op Checklist,
. *                 OPPOAxxx - Arrival Checklist and OPPOIxxx - Anaesthesia
. *                 Checklist). Also to allow for the use
. *                 of data from all three record types in the same server at 
. *                 the same time, three sets of 'Save' variables are declared. 
. *
. * Modifications :   
. *      V10.08.01  24/05/2016  Peter Vela     TSK 0321157
. *                 Added variables for Recovery Room Handover Checklist
. *                 Added variables for OT Sign Out Safety CheckList
. *                 Added variables for Pre-Skin Incision
. *                 Added variables for Pre-Induction of Anaes
. *                 Added new variables from FD
. *      V9.03.01   11.07.2003  Sylvek Litewka CAR 39213
. *                 Created Include
. *
. *----------------------------------------------------------------------
.
.**********************************************************************
.* CGI variables for Pre-Operative Checlist Record                    *
.**********************************************************************
.Name     Type      Length             Description
.----     ----      ------             -----------
OPPOP001  DIM       10                 * Unique ID.
OPPOP002  DIM       1                  * Record Type
OPPOP003  DIM       1                  * Patient ID Bracelet
OPPOP004  DIM       1                  * Surgical Agreement to Treat Signed
OPPOP005  DIM       1                  * Anaesthetic Agreement to Treat Sign
OPPOP006  DIM       1                  * Blood/Product Agree to Treat Signed
OPPOP007  DIM       1                  * Request Tissue/Body Part Signed
OPPOP008  DIM       8                  * Time Nil by Mouth Food (HH:MM:SS)
OPPOP009  DIM       8                  * Time Nil by Fluid (HH:MM:SS)
OPPOP010  DIM       1                  * Nil by Mouth Food Checked
OPPOP011  DIM       1                  * Nil by Fluid Checked
OPPOP012  DIM       1                  * Allergies Noted
OPPOP013  DIM       1                  * ECG Results
OPPOP014  DIM       1                  * Laboratory Results
OPPOP015  DIM       1                  * Complete Blood Form
OPPOP016  DIM       1                  * Medication Chart
OPPOP017  DIM       1                  * Drug Infusion Chart
OPPOP018  DIM       1                  * Fluid Balance Chart
OPPOP019  DIM       1                  * X-Ray/Cat Scans
OPPOP020  DIM       1                  * Diabetic Chart
OPPOP021  DIM       3                  * Dentures            (Category Oy)
OPPOP022  DIM       3                  * Valuables           (Category Oz)
OPPOP023  DIM       1                  * Shave Checked
OPPOP024  DIM       8                  * Time Urine Voided (HH:MM:SS)
OPPOP025  DIM       3                  * Interpreter Required(Category OQ)
OPPOP026  DIM       2                  * Labels Number Required
OPPOP027  DIM       3                  * User Defined Code 1 (Category oY)
OPPOP028  DIM       3                  * User Defined Code 2 (Category oZ)
OPPOP029  DIM       3                  * User Defined Code 3 (Category Oa)
OPPOP030  DIM       3                  * User Defined Code 4 (Category Ob)
OPPOP031  DIM       3                  * User Defined Code 5 (Category Oc)
OPPOP032  DIM       3                  * User Defined Code 6 (Category Od)
OPPOP033  DIM       3                  * User Defined Code 7 (Category Oe)
OPPOP034  DIM       3                  * User Defined Code 8 (Category Of)
OPPOP035  DIM       3                  * User Defined Code 9 (Category Og)
OPPOP036  DIM       3                  * User Defined Code 10(Category Oh)
OPPOP037  DIM       3                  * User Defined Code 11(Category Oi)
OPPOP038  DIM       3                  * User Defined Code 12(Category Oj)
OPPOP039  DIM       3                  * User Defined Code 13(Category Ok)
OPPOP040  DIM       3                  * User Defined Code 14(Category Ol)
OPPOP041  DIM       3                  * User Defined Code 15(Category Om)
OPPOP042  DIM       3                  * User Defined Code 16(Category On)
OPPOP043  DIM       3                  * User Defined Code 17(Category Oo)
OPPOP044  DIM       3                  * User Defined Code 18(Category Op)
OPPOP045  DIM       3                  * User Defined Code 19(Category Oq)
OPPOP046  DIM       3                  * User Defined Code 20(Category Or)
OPPOP047  DIM       1                  * User Defined Y/N 1
OPPOP048  DIM       1                  * User Defined Y/N 2
OPPOP049  DIM       1                  * User Defined Y/N 3
OPPOP050  DIM       1                  * User Defined Y/N 4
OPPOP051  DIM       1                  * User Defined Y/N 5
OPPOP052  DIM       1                  * User Defined Y/N 6
OPPOP053  DIM       1                  * User Defined Y/N 7
OPPOP054  DIM       1                  * User Defined Y/N 8
OPPOP055  DIM       1                  * User Defined Y/N 9
OPPOP056  DIM       1                  * User Defined Y/N 10
OPPOP057  DIM       8                  * User Defined Time Field 1
OPPOP058  DIM       8                  * User Defined Time Field 2
OPPOP059  DIM       8                  * User Defined Time Field 3
OPPOP060  DIM       8                  * User Defined Time Field 4
OPPOP061  DIM       8                  * User Defined Time Field 5
OPPOP062  DIM       8                  * User Defined Time Field 6
OPPOP063  DIM       8                  * User Defined Time Field 7
OPPOP064  DIM       8                  * User Defined Time Field 8
OPPOP065  DIM       8                  * User Defined Time Field 9
OPPOP066  DIM       8                  * User Defined Time Field 10
OPPOP067  DIM       6                  * User Defined Form Field 1
OPPOP068  DIM       6                  * User Defined Form Field 2
OPPOP069  DIM       6                  * User Defined Form Field 3
OPPOP070  DIM       6                  * User Defined Form Field 4
OPPOP071  DIM       6                  * User Defined Form Field 5
OPPOP072  DIM       6                  * User Defined Form Field 6
OPPOP073  DIM       6                  * User Defined Form Field 7
OPPOP074  DIM       6                  * User Defined Form Field 8
OPPOP075  DIM       6                  * User Defined Form Field 9
OPPOP076  DIM       6                  * User Defined Form Field 10
OPPOP077  DIM       10                 * User Defined Doctor Field 1
OPPOP078  DIM       10                 * User Defined Doctor Field 2
OPPOP079  DIM       10                 * User Defined Doctor Field 3
OPPOP080  DIM       10                 * User Defined Doctor Field 4
OPPOP081  DIM       10                 * User Defined Doctor Field 5
OPPOP082  DIM       10                 * User Defined Nurse Field 1
OPPOP083  DIM       10                 * User Defined Nurse Field 2
OPPOP084  DIM       10                 * User Defined Nurse Field 3
OPPOP085  DIM       10                 * User Defined Nurse Field 4
OPPOP086  DIM       10                 * User Defined Nurse Field 5
OPPOP087  DIM       8                  * User Defined Date Field 1
OPPOP088  DIM       8                  * User Defined Date Field 2
OPPOP089  DIM       8                  * User Defined Date Field 3
OPPOP090  DIM       8                  * User Defined Date Field 4
OPPOP091  DIM       8                  * User Defined Date Field 5
OPPOP092  DIM       8                  * User Defined Date Field 6
OPPOP093  DIM       8                  * User Defined Date Field 7
OPPOP094  DIM       8                  * User Defined Date Field 8
OPPOP095  DIM       8                  * User Defined Date Field 9
OPPOP096  DIM       8                  * User Defined Date Field 10
.
.**********************************************************************
.* CGI variables for Arrival Checlist Record                          *
.**********************************************************************
.Name     Type      Length             Description
.----     ----      ------             -----------
OPPOA002  DIM       1                  * Record Type                        
OPPOA003  DIM       1                  * Patient ID Bracelet                
OPPOA004  DIM       1                  * Surgical Agreement to Treat Signed 
OPPOA005  DIM       1                  * Anaesthetic Agreement to Treat Sign
OPPOA006  DIM       1                  * Blood/Product Agree to Treat Signed
OPPOA007  DIM       1                  * Request Tissue/Body Part Signed    
OPPOA008  DIM       8                  * Time Nil by Mouth Food (HH:MM:SS)  
OPPOA009  DIM       8                  * Time Nil by Fluid (HH:MM:SS)       
OPPOA010  DIM       1                  * Nil by Mouth Food Checked          
OPPOA011  DIM       1                  * Nil by Fluid Checked               
OPPOA012  DIM       1                  * Allergies Noted                    
OPPOA013  DIM       1                  * ECG Results                        
OPPOA014  DIM       1                  * Laboratory Results                 
OPPOA015  DIM       1                  * Complete Blood Form                
OPPOA016  DIM       1                  * Medication Chart                   
OPPOA017  DIM       1                  * Drug Infusion Chart                
OPPOA018  DIM       1                  * Fluid Balance Chart                
OPPOA019  DIM       1                  * X-Ray/Cat Scans                    
OPPOA020  DIM       1                  * Diabetic Chart                     
OPPOA021  DIM       3                  * Dentures            (Category Oy)     
OPPOA022  DIM       3                  * Valuables           (Category Oz)     
OPPOA023  DIM       1                  * Shave Checked                      
OPPOA024  DIM       8                  * Time Urine Voided (HH:MM:SS)       
OPPOA025  DIM       3                  * Interpreter Required(Category OQ)
OPPOA026  DIM       2                  * Labels Number Required             
OPPOA027  DIM       3                  * User Defined Code 1 (Category oY)
OPPOA028  DIM       3                  * User Defined Code 2 (Category oZ)  
OPPOA029  DIM       3                  * User Defined Code 3 (Category Oa)  
OPPOA030  DIM       3                  * User Defined Code 4 (Category Ob)  
OPPOA031  DIM       3                  * User Defined Code 5 (Category Oc)  
OPPOA032  DIM       3                  * User Defined Code 6 (Category Od)  
OPPOA033  DIM       3                  * User Defined Code 7 (Category Oe)  
OPPOA034  DIM       3                  * User Defined Code 8 (Category Of)  
OPPOA035  DIM       3                  * User Defined Code 9 (Category Og)  
OPPOA036  DIM       3                  * User Defined Code 10(Category Oh)  
OPPOA037  DIM       3                  * User Defined Code 11(Category Oi)  
OPPOA038  DIM       3                  * User Defined Code 12(Category Oj)  
OPPOA039  DIM       3                  * User Defined Code 13(Category Ok)  
OPPOA040  DIM       3                  * User Defined Code 14(Category Ol)  
OPPOA041  DIM       3                  * User Defined Code 15(Category Om)  
OPPOA042  DIM       3                  * User Defined Code 16(Category On)  
OPPOA043  DIM       3                  * User Defined Code 17(Category Oo)  
OPPOA044  DIM       3                  * User Defined Code 18(Category Op)   
OPPOA045  DIM       3                  * User Defined Code 19(Category Oq)  
OPPOA046  DIM       3                  * User Defined Code 20(Category Or)  
OPPOA047  DIM       1                  * User Defined Y/N 1                 
OPPOA048  DIM       1                  * User Defined Y/N 2                 
OPPOA049  DIM       1                  * User Defined Y/N 3                 
OPPOA050  DIM       1                  * User Defined Y/N 4                 
OPPOA051  DIM       1                  * User Defined Y/N 5                 
OPPOA052  DIM       1                  * User Defined Y/N 6                 
OPPOA053  DIM       1                  * User Defined Y/N 7                 
OPPOA054  DIM       1                  * User Defined Y/N 8                 
OPPOA055  DIM       1                  * User Defined Y/N 9                 
OPPOA056  DIM       1                  * User Defined Y/N 10                
OPPOA057  DIM       8                  * User Defined Time Field 1          
OPPOA058  DIM       8                  * User Defined Time Field 2          
OPPOA059  DIM       8                  * User Defined Time Field 3          
OPPOA060  DIM       8                  * User Defined Time Field 4          
OPPOA061  DIM       8                  * User Defined Time Field 5          
OPPOA062  DIM       8                  * User Defined Time Field 6          
OPPOA063  DIM       8                  * User Defined Time Field 7          
OPPOA064  DIM       8                  * User Defined Time Field 8          
OPPOA065  DIM       8                  * User Defined Time Field 9          
OPPOA066  DIM       8                  * User Defined Time Field 10         
OPPOA067  DIM       6                  * User Defined Form Field 1          
OPPOA068  DIM       6                  * User Defined Form Field 2          
OPPOA069  DIM       6                  * User Defined Form Field 3          
OPPOA070  DIM       6                  * User Defined Form Field 4          
OPPOA071  DIM       6                  * User Defined Form Field 5          
OPPOA072  DIM       6                  * User Defined Form Field 6          
OPPOA073  DIM       6                  * User Defined Form Field 7          
OPPOA074  DIM       6                  * User Defined Form Field 8          
OPPOA075  DIM       6                  * User Defined Form Field 9          
OPPOA076  DIM       6                  * User Defined Form Field 10         
OPPOA077  DIM       10                 * User Defined Doctor Field 1
OPPOA078  DIM       10                 * User Defined Doctor Field 2
OPPOA079  DIM       10                 * User Defined Doctor Field 3
OPPOA080  DIM       10                 * User Defined Doctor Field 4
OPPOA081  DIM       10                 * User Defined Doctor Field 5
OPPOA082  DIM       10                 * User Defined Nurse Field 1
OPPOA083  DIM       10                 * User Defined Nurse Field 2
OPPOA084  DIM       10                 * User Defined Nurse Field 3
OPPOA085  DIM       10                 * User Defined Nurse Field 4
OPPOA086  DIM       10                 * User Defined Nurse Field 5
OPPOA087  DIM       8                  * User Defined Date Field 1
OPPOA088  DIM       8                  * User Defined Date Field 2
OPPOA089  DIM       8                  * User Defined Date Field 3
OPPOA090  DIM       8                  * User Defined Date Field 4
OPPOA091  DIM       8                  * User Defined Date Field 5
OPPOA092  DIM       8                  * User Defined Date Field 6
OPPOA093  DIM       8                  * User Defined Date Field 7
OPPOA094  DIM       8                  * User Defined Date Field 8
OPPOA095  DIM       8                  * User Defined Date Field 9
OPPOA096  DIM       8                  * User Defined Date Field 10
.
.**********************************************************************
.* CGI variables for Anaesthetic Checklist Record                      *
.**********************************************************************
.Name     Type      Length             Description
.----     ----      ------             -----------
OPPOI002  DIM       1                  * Record Type
OPPOI003  DIM       1                  * Patient ID Bracelet
OPPOI004  DIM       1                  * Surgical Agreement to Treat Signed
OPPOI005  DIM       1                  * Anaesthetic Agreement to Treat Sign
OPPOI006  DIM       1                  * Blood/Product Agree to Treat Signed
OPPOI007  DIM       1                  * Request Tissue/Body Part Signed
OPPOI008  DIM       8                  * Time Nil by Mouth Food (HH:MM:SS)
OPPOI009  DIM       8                  * Time Nil by Fluid (HH:MM:SS)
OPPOI010  DIM       1                  * Nil by Mouth Food Checked
OPPOI011  DIM       1                  * Nil by Fluid Checked
OPPOI012  DIM       1                  * Allergies Noted
OPPOI013  DIM       1                  * ECG Results
OPPOI014  DIM       1                  * Laboratory Results
OPPOI015  DIM       1                  * Complete Blood Form
OPPOI016  DIM       1                  * Medication Chart
OPPOI017  DIM       1                  * Drug Infusion Chart
OPPOI018  DIM       1                  * Fluid Balance Chart
OPPOI019  DIM       1                  * X-Ray/Cat Scans
OPPOI020  DIM       1                  * Diabetic Chart
OPPOI021  DIM       3                  * Dentures            (Category Oy)
OPPOI022  DIM       3                  * Valuables           (Category Oz)
OPPOI023  DIM       1                  * Shave Checked
OPPOI024  DIM       8                  * Time Urine Voided (HH:MM:SS)
OPPOI025  DIM       3                  * Interpreter Required(Category OQ)
OPPOI026  DIM       2                  * Labels Number Required
OPPOI027  DIM       3                  * User Defined Code 1 (Category oY)
OPPOI028  DIM       3                  * User Defined Code 2 (Category oZ)
OPPOI029  DIM       3                  * User Defined Code 3 (Category Oa)
OPPOI030  DIM       3                  * User Defined Code 4 (Category Ob)
OPPOI031  DIM       3                  * User Defined Code 5 (Category Oc)
OPPOI032  DIM       3                  * User Defined Code 6 (Category Od)
OPPOI033  DIM       3                  * User Defined Code 7 (Category Oe)
OPPOI034  DIM       3                  * User Defined Code 8 (Category Of)
OPPOI035  DIM       3                  * User Defined Code 9 (Category Og)
OPPOI036  DIM       3                  * User Defined Code 10(Category Oh)
OPPOI037  DIM       3                  * User Defined Code 11(Category Oi)
OPPOI038  DIM       3                  * User Defined Code 12(Category Oj)
OPPOI039  DIM       3                  * User Defined Code 13(Category Ok)
OPPOI040  DIM       3                  * User Defined Code 14(Category Ol)
OPPOI041  DIM       3                  * User Defined Code 15(Category Om)
OPPOI042  DIM       3                  * User Defined Code 16(Category On)
OPPOI043  DIM       3                  * User Defined Code 17(Category Oo)
OPPOI044  DIM       3                  * User Defined Code 18(Category Op)
OPPOI045  DIM       3                  * User Defined Code 19(Category Oq)
OPPOI046  DIM       3                  * User Defined Code 20(Category Or)
OPPOI047  DIM       1                  * User Defined Y/N 1
OPPOI048  DIM       1                  * User Defined Y/N 2
OPPOI049  DIM       1                  * User Defined Y/N 3
OPPOI050  DIM       1                  * User Defined Y/N 4
OPPOI051  DIM       1                  * User Defined Y/N 5
OPPOI052  DIM       1                  * User Defined Y/N 6
OPPOI053  DIM       1                  * User Defined Y/N 7
OPPOI054  DIM       1                  * User Defined Y/N 8
OPPOI055  DIM       1                  * User Defined Y/N 9
OPPOI056  DIM       1                  * User Defined Y/N 10
OPPOI057  DIM       8                  * User Defined Time Field 1
OPPOI058  DIM       8                  * User Defined Time Field 2
OPPOI059  DIM       8                  * User Defined Time Field 3
OPPOI060  DIM       8                  * User Defined Time Field 4
OPPOI061  DIM       8                  * User Defined Time Field 5
OPPOI062  DIM       8                  * User Defined Time Field 6
OPPOI063  DIM       8                  * User Defined Time Field 7
OPPOI064  DIM       8                  * User Defined Time Field 8
OPPOI065  DIM       8                  * User Defined Time Field 9
OPPOI066  DIM       8                  * User Defined Time Field 10
OPPOI067  DIM       6                  * User Defined Form Field 1
OPPOI068  DIM       6                  * User Defined Form Field 2
OPPOI069  DIM       6                  * User Defined Form Field 3
OPPOI070  DIM       6                  * User Defined Form Field 4
OPPOI071  DIM       6                  * User Defined Form Field 5
OPPOI072  DIM       6                  * User Defined Form Field 6
OPPOI073  DIM       6                  * User Defined Form Field 7
OPPOI074  DIM       6                  * User Defined Form Field 8
OPPOI075  DIM       6                  * User Defined Form Field 9
OPPOI076  DIM       6                  * User Defined Form Field 10
OPPOI077  DIM       10                 * User Defined Doctor Field 1
OPPOI078  DIM       10                 * User Defined Doctor Field 2
OPPOI079  DIM       10                 * User Defined Doctor Field 3
OPPOI080  DIM       10                 * User Defined Doctor Field 4
OPPOI081  DIM       10                 * User Defined Doctor Field 5
OPPOI082  DIM       10                 * User Defined Nurse Field 1
OPPOI083  DIM       10                 * User Defined Nurse Field 2
OPPOI084  DIM       10                 * User Defined Nurse Field 3
OPPOI085  DIM       10                 * User Defined Nurse Field 4
OPPOI086  DIM       10                 * User Defined Nurse Field 5
OPPOI087  DIM       8                  * User Defined Date Field 1
OPPOI088  DIM       8                  * User Defined Date Field 2
OPPOI089  DIM       8                  * User Defined Date Field 3
OPPOI090  DIM       8                  * User Defined Date Field 4
OPPOI091  DIM       8                  * User Defined Date Field 5
OPPOI092  DIM       8                  * User Defined Date Field 6
OPPOI093  DIM       8                  * User Defined Date Field 7
OPPOI094  DIM       8                  * User Defined Date Field 8
OPPOI095  DIM       8                  * User Defined Date Field 9
OPPOI096  DIM       8                  * User Defined Date Field 10
.
.**********************************************************************
.* CGI variables for Incision Checklist Record                        *
.**********************************************************************
.Name     Type      Length             Description
.----     ----      ------             -----------
OPPOS002  DIM       1                  * Record Type
OPPOS003  DIM       1                  * Patient ID Bracelet
OPPOS004  DIM       1                  * Surgical Agreement to Treat Signed
OPPOS005  DIM       1                  * Anaesthetic Agreement to Treat Sign
OPPOS006  DIM       1                  * Blood/Product Agree to Treat Signed
OPPOS007  DIM       1                  * Request Tissue/Body Part Signed
OPPOS008  DIM       8                  * Time Nil by Mouth Food (HH:MM:SS)
OPPOS009  DIM       8                  * Time Nil by Fluid (HH:MM:SS)
OPPOS010  DIM       1                  * Nil by Mouth Food Checked
OPPOS011  DIM       1                  * Nil by Fluid Checked
OPPOS012  DIM       1                  * Allergies Noted
OPPOS013  DIM       1                  * ECG Results
OPPOS014  DIM       1                  * Laboratory Results
OPPOS015  DIM       1                  * Complete Blood Form
OPPOS016  DIM       1                  * Medication Chart
OPPOS017  DIM       1                  * Drug Infusion Chart
OPPOS018  DIM       1                  * Fluid Balance Chart
OPPOS019  DIM       1                  * X-Ray/Cat Scans
OPPOS020  DIM       1                  * Diabetic Chart
OPPOS021  DIM       3                  * Dentures            (Category Oy)
OPPOS022  DIM       3                  * Valuables           (Category Oz)
OPPOS023  DIM       1                  * Shave Checked
OPPOS024  DIM       8                  * Time Urine Voided (HH:MM:SS)
OPPOS025  DIM       3                  * Interpreter Required(Category OQ)
OPPOS026  DIM       2                  * Labels Number Required
OPPOS027  DIM       3                  * User Defined Code 1 (Category oY)
OPPOS028  DIM       3                  * User Defined Code 2 (Category oZ)
OPPOS029  DIM       3                  * User Defined Code 3 (Category Oa)
OPPOS030  DIM       3                  * User Defined Code 4 (Category Ob)
OPPOS031  DIM       3                  * User Defined Code 5 (Category Oc)
OPPOS032  DIM       3                  * User Defined Code 6 (Category Od)
OPPOS033  DIM       3                  * User Defined Code 7 (Category Oe)
OPPOS034  DIM       3                  * User Defined Code 8 (Category Of)
OPPOS035  DIM       3                  * User Defined Code 9 (Category Og)
OPPOS036  DIM       3                  * User Defined Code 10(Category Oh)
OPPOS037  DIM       3                  * User Defined Code 11(Category Oi)
OPPOS038  DIM       3                  * User Defined Code 12(Category Oj)
OPPOS039  DIM       3                  * User Defined Code 13(Category Ok)
OPPOS040  DIM       3                  * User Defined Code 14(Category Ol)
OPPOS041  DIM       3                  * User Defined Code 15(Category Om)
OPPOS042  DIM       3                  * User Defined Code 16(Category On)
OPPOS043  DIM       3                  * User Defined Code 17(Category Oo)
OPPOS044  DIM       3                  * User Defined Code 18(Category Op)
OPPOS045  DIM       3                  * User Defined Code 19(Category Oq)
OPPOS046  DIM       3                  * User Defined Code 20(Category Or)
OPPOS047  DIM       1                  * User Defined Y/N 1
OPPOS048  DIM       1                  * User Defined Y/N 2
OPPOS049  DIM       1                  * User Defined Y/N 3
OPPOS050  DIM       1                  * User Defined Y/N 4
OPPOS051  DIM       1                  * User Defined Y/N 5
OPPOS052  DIM       1                  * User Defined Y/N 6
OPPOS053  DIM       1                  * User Defined Y/N 7
OPPOS054  DIM       1                  * User Defined Y/N 8
OPPOS055  DIM       1                  * User Defined Y/N 9
OPPOS056  DIM       1                  * User Defined Y/N 10
OPPOS057  DIM       8                  * User Defined Time Field 1
OPPOS058  DIM       8                  * User Defined Time Field 2
OPPOS059  DIM       8                  * User Defined Time Field 3
OPPOS060  DIM       8                  * User Defined Time Field 4
OPPOS061  DIM       8                  * User Defined Time Field 5
OPPOS062  DIM       8                  * User Defined Time Field 6
OPPOS063  DIM       8                  * User Defined Time Field 7
OPPOS064  DIM       8                  * User Defined Time Field 8
OPPOS065  DIM       8                  * User Defined Time Field 9
OPPOS066  DIM       8                  * User Defined Time Field 10
OPPOS067  DIM       6                  * User Defined Form Field 1
OPPOS068  DIM       6                  * User Defined Form Field 2
OPPOS069  DIM       6                  * User Defined Form Field 3
OPPOS070  DIM       6                  * User Defined Form Field 4
OPPOS071  DIM       6                  * User Defined Form Field 5
OPPOS072  DIM       6                  * User Defined Form Field 6
OPPOS073  DIM       6                  * User Defined Form Field 7
OPPOS074  DIM       6                  * User Defined Form Field 8
OPPOS075  DIM       6                  * User Defined Form Field 9
OPPOS076  DIM       6                  * User Defined Form Field 10
OPPOS077  DIM       10                 * User Defined Doctor Field 1
OPPOS078  DIM       10                 * User Defined Doctor Field 2
OPPOS079  DIM       10                 * User Defined Doctor Field 3
OPPOS080  DIM       10                 * User Defined Doctor Field 4
OPPOS081  DIM       10                 * User Defined Doctor Field 5
OPPOS082  DIM       10                 * User Defined Nurse Field 1
OPPOS083  DIM       10                 * User Defined Nurse Field 2
OPPOS084  DIM       10                 * User Defined Nurse Field 3
OPPOS085  DIM       10                 * User Defined Nurse Field 4
OPPOS086  DIM       10                 * User Defined Nurse Field 5
OPPOS087  DIM       8                  * User Defined Date Field 1
OPPOS088  DIM       8                  * User Defined Date Field 2
OPPOS089  DIM       8                  * User Defined Date Field 3
OPPOS090  DIM       8                  * User Defined Date Field 4
OPPOS091  DIM       8                  * User Defined Date Field 5
OPPOS092  DIM       8                  * User Defined Date Field 6
OPPOS093  DIM       8                  * User Defined Date Field 7
OPPOS094  DIM       8                  * User Defined Date Field 8
OPPOS095  DIM       8                  * User Defined Date Field 9
OPPOS096  DIM       8                  * User Defined Date Field 10
.**********************************************************************
.* CGI variables for OT Signout Checklist Record                      *
.**********************************************************************
.Name     Type      Length             Description
.----     ----      ------             -----------
OPPOO002  DIM       1                  * Record Type
OPPOO003  DIM       1                  * Patient ID Bracelet
OPPOO004  DIM       1                  * Surgical Agreement to Treat Signed
OPPOO005  DIM       1                  * Anaesthetic Agreement to Treat Sign
OPPOO006  DIM       1                  * Blood/Product Agree to Treat Signed
OPPOO007  DIM       1                  * Request Tissue/Body Part Signed
OPPOO008  DIM       8                  * Time Nil by Mouth Food (HH:MM:SS)
OPPOO009  DIM       8                  * Time Nil by Fluid (HH:MM:SS)
OPPOO010  DIM       1                  * Nil by Mouth Food Checked
OPPOO011  DIM       1                  * Nil by Fluid Checked
OPPOO012  DIM       1                  * Allergies Noted
OPPOO013  DIM       1                  * ECG Results
OPPOO014  DIM       1                  * Laboratory Results
OPPOO015  DIM       1                  * Complete Blood Form
OPPOO016  DIM       1                  * Medication Chart
OPPOO017  DIM       1                  * Drug Infusion Chart
OPPOO018  DIM       1                  * Fluid Balance Chart
OPPOO019  DIM       1                  * X-Ray/Cat Scans
OPPOO020  DIM       1                  * Diabetic Chart
OPPOO021  DIM       3                  * Dentures            (Category Oy)
OPPOO022  DIM       3                  * Valuables           (Category Oz)
OPPOO023  DIM       1                  * Shave Checked
OPPOO024  DIM       8                  * Time Urine Voided (HH:MM:SS)
OPPOO025  DIM       3                  * Interpreter Required(Category OQ)
OPPOO026  DIM       2                  * Labels Number Required
OPPOO027  DIM       3                  * User Defined Code 1 (Category oY)
OPPOO028  DIM       3                  * User Defined Code 2 (Category oZ)
OPPOO029  DIM       3                  * User Defined Code 3 (Category Oa)
OPPOO030  DIM       3                  * User Defined Code 4 (Category Ob)
OPPOO031  DIM       3                  * User Defined Code 5 (Category Oc)
OPPOO032  DIM       3                  * User Defined Code 6 (Category Od)
OPPOO033  DIM       3                  * User Defined Code 7 (Category Oe)
OPPOO034  DIM       3                  * User Defined Code 8 (Category Of)
OPPOO035  DIM       3                  * User Defined Code 9 (Category Og)
OPPOO036  DIM       3                  * User Defined Code 10(Category Oh)
OPPOO037  DIM       3                  * User Defined Code 11(Category Oi)
OPPOO038  DIM       3                  * User Defined Code 12(Category Oj)
OPPOO039  DIM       3                  * User Defined Code 13(Category Ok)
OPPOO040  DIM       3                  * User Defined Code 14(Category Ol)
OPPOO041  DIM       3                  * User Defined Code 15(Category Om)
OPPOO042  DIM       3                  * User Defined Code 16(Category On)
OPPOO043  DIM       3                  * User Defined Code 17(Category Oo)
OPPOO044  DIM       3                  * User Defined Code 18(Category Op)
OPPOO045  DIM       3                  * User Defined Code 19(Category Oq)
OPPOO046  DIM       3                  * User Defined Code 20(Category Or)
OPPOO047  DIM       1                  * User Defined Y/N 1
OPPOO048  DIM       1                  * User Defined Y/N 2
OPPOO049  DIM       1                  * User Defined Y/N 3
OPPOO050  DIM       1                  * User Defined Y/N 4
OPPOO051  DIM       1                  * User Defined Y/N 5
OPPOO052  DIM       1                  * User Defined Y/N 6
OPPOO053  DIM       1                  * User Defined Y/N 7
OPPOO054  DIM       1                  * User Defined Y/N 8
OPPOO055  DIM       1                  * User Defined Y/N 9
OPPOO056  DIM       1                  * User Defined Y/N 10
OPPOO057  DIM       8                  * User Defined Time Field 1
OPPOO058  DIM       8                  * User Defined Time Field 2
OPPOO059  DIM       8                  * User Defined Time Field 3
OPPOO060  DIM       8                  * User Defined Time Field 4
OPPOO061  DIM       8                  * User Defined Time Field 5
OPPOO062  DIM       8                  * User Defined Time Field 6
OPPOO063  DIM       8                  * User Defined Time Field 7
OPPOO064  DIM       8                  * User Defined Time Field 8
OPPOO065  DIM       8                  * User Defined Time Field 9
OPPOO066  DIM       8                  * User Defined Time Field 10
OPPOO067  DIM       6                  * User Defined Form Field 1
OPPOO068  DIM       6                  * User Defined Form Field 2
OPPOO069  DIM       6                  * User Defined Form Field 3
OPPOO070  DIM       6                  * User Defined Form Field 4
OPPOO071  DIM       6                  * User Defined Form Field 5
OPPOO072  DIM       6                  * User Defined Form Field 6
OPPOO073  DIM       6                  * User Defined Form Field 7
OPPOO074  DIM       6                  * User Defined Form Field 8
OPPOO075  DIM       6                  * User Defined Form Field 9
OPPOO076  DIM       6                  * User Defined Form Field 10
OPPOO077  DIM       10                 * User Defined Doctor Field 1
OPPOO078  DIM       10                 * User Defined Doctor Field 2
OPPOO079  DIM       10                 * User Defined Doctor Field 3
OPPOO080  DIM       10                 * User Defined Doctor Field 4
OPPOO081  DIM       10                 * User Defined Doctor Field 5
OPPOO082  DIM       10                 * User Defined Nurse Field 1
OPPOO083  DIM       10                 * User Defined Nurse Field 2
OPPOO084  DIM       10                 * User Defined Nurse Field 3
OPPOO085  DIM       10                 * User Defined Nurse Field 4
OPPOO086  DIM       10                 * User Defined Nurse Field 5
OPPOO087  DIM       8                  * User Defined Date Field 1
OPPOO088  DIM       8                  * User Defined Date Field 2
OPPOO089  DIM       8                  * User Defined Date Field 3
OPPOO090  DIM       8                  * User Defined Date Field 4
OPPOO091  DIM       8                  * User Defined Date Field 5
OPPOO092  DIM       8                  * User Defined Date Field 6
OPPOO093  DIM       8                  * User Defined Date Field 7
OPPOO094  DIM       8                  * User Defined Date Field 8
OPPOO095  DIM       8                  * User Defined Date Field 9
OPPOO096  DIM       8                  * User Defined Date Field 10
.
.**********************************************************************
.* CGI variables for Recovery Room Handover Checklist                 *
.**********************************************************************
.Name     Type      Length             Description
.----     ----      ------             -----------
OPPOR002  DIM       1                  * Record Type
OPPOR003  DIM       1                  * Patient ID Bracelet
OPPOR004  DIM       1                  * Surgical Agreement to Treat Signed
OPPOR005  DIM       1                  * Anaesthetic Agreement to Treat Sign
OPPOR006  DIM       1                  * Blood/Product Agree to Treat Signed
OPPOR007  DIM       1                  * Request Tissue/Body Part Signed
OPPOR008  DIM       8                  * Time Nil by Mouth Food (HH:MM:SS)
OPPOR009  DIM       8                  * Time Nil by Fluid (HH:MM:SS)
OPPOR010  DIM       1                  * Nil by Mouth Food Checked
OPPOR011  DIM       1                  * Nil by Fluid Checked
OPPOR012  DIM       1                  * Allergies Noted
OPPOR013  DIM       1                  * ECG Results
OPPOR014  DIM       1                  * Laboratory Results
OPPOR015  DIM       1                  * Complete Blood Form
OPPOR016  DIM       1                  * Medication Chart
OPPOR017  DIM       1                  * Drug Infusion Chart
OPPOR018  DIM       1                  * Fluid Balance Chart
OPPOR019  DIM       1                  * X-Ray/Cat Scans
OPPOR020  DIM       1                  * Diabetic Chart
OPPOR021  DIM       3                  * Dentures            (Category Oy)
OPPOR022  DIM       3                  * Valuables           (Category Oz)
OPPOR023  DIM       1                  * Shave Checked
OPPOR024  DIM       8                  * Time Urine Voided (HH:MM:SS)
OPPOR025  DIM       3                  * Interpreter Required(Category OQ)
OPPOR026  DIM       2                  * Labels Number Required
OPPOR027  DIM       3                  * User Defined Code 1 (Category oY)
OPPOR028  DIM       3                  * User Defined Code 2 (Category oZ)
OPPOR029  DIM       3                  * User Defined Code 3 (Category Oa)
OPPOR030  DIM       3                  * User Defined Code 4 (Category Ob)
OPPOR031  DIM       3                  * User Defined Code 5 (Category Oc)
OPPOR032  DIM       3                  * User Defined Code 6 (Category Od)
OPPOR033  DIM       3                  * User Defined Code 7 (Category Oe)
OPPOR034  DIM       3                  * User Defined Code 8 (Category Of)
OPPOR035  DIM       3                  * User Defined Code 9 (Category Og)
OPPOR036  DIM       3                  * User Defined Code 10(Category Oh)
OPPOR037  DIM       3                  * User Defined Code 11(Category Oi)
OPPOR038  DIM       3                  * User Defined Code 12(Category Oj)
OPPOR039  DIM       3                  * User Defined Code 13(Category Ok)
OPPOR040  DIM       3                  * User Defined Code 14(Category Ol)
OPPOR041  DIM       3                  * User Defined Code 15(Category Om)
OPPOR042  DIM       3                  * User Defined Code 16(Category On)
OPPOR043  DIM       3                  * User Defined Code 17(Category Oo)
OPPOR044  DIM       3                  * User Defined Code 18(Category Op)
OPPOR045  DIM       3                  * User Defined Code 19(Category Oq)
OPPOR046  DIM       3                  * User Defined Code 20(Category Or)
OPPOR047  DIM       1                  * User Defined Y/N 1
OPPOR048  DIM       1                  * User Defined Y/N 2
OPPOR049  DIM       1                  * User Defined Y/N 3
OPPOR050  DIM       1                  * User Defined Y/N 4
OPPOR051  DIM       1                  * User Defined Y/N 5
OPPOR052  DIM       1                  * User Defined Y/N 6
OPPOR053  DIM       1                  * User Defined Y/N 7
OPPOR054  DIM       1                  * User Defined Y/N 8
OPPOR055  DIM       1                  * User Defined Y/N 9
OPPOR056  DIM       1                  * User Defined Y/N 10
OPPOR057  DIM       8                  * User Defined Time Field 1
OPPOR058  DIM       8                  * User Defined Time Field 2
OPPOR059  DIM       8                  * User Defined Time Field 3
OPPOR060  DIM       8                  * User Defined Time Field 4
OPPOR061  DIM       8                  * User Defined Time Field 5
OPPOR062  DIM       8                  * User Defined Time Field 6
OPPOR063  DIM       8                  * User Defined Time Field 7
OPPOR064  DIM       8                  * User Defined Time Field 8
OPPOR065  DIM       8                  * User Defined Time Field 9
OPPOR066  DIM       8                  * User Defined Time Field 10
OPPOR067  DIM       6                  * User Defined Form Field 1
OPPOR068  DIM       6                  * User Defined Form Field 2
OPPOR069  DIM       6                  * User Defined Form Field 3
OPPOR070  DIM       6                  * User Defined Form Field 4
OPPOR071  DIM       6                  * User Defined Form Field 5
OPPOR072  DIM       6                  * User Defined Form Field 6
OPPOR073  DIM       6                  * User Defined Form Field 7
OPPOR074  DIM       6                  * User Defined Form Field 8
OPPOR075  DIM       6                  * User Defined Form Field 9
OPPOR076  DIM       6                  * User Defined Form Field 10
OPPOR077  DIM       10                 * User Defined Doctor Field 1
OPPOR078  DIM       10                 * User Defined Doctor Field 2
OPPOR079  DIM       10                 * User Defined Doctor Field 3
OPPOR080  DIM       10                 * User Defined Doctor Field 4
OPPOR081  DIM       10                 * User Defined Doctor Field 5
OPPOR082  DIM       10                 * User Defined Nurse Field 1
OPPOR083  DIM       10                 * User Defined Nurse Field 2
OPPOR084  DIM       10                 * User Defined Nurse Field 3
OPPOR085  DIM       10                 * User Defined Nurse Field 4
OPPOR086  DIM       10                 * User Defined Nurse Field 5
OPPOR087  DIM       8                  * User Defined Date Field 1
OPPOR088  DIM       8                  * User Defined Date Field 2
OPPOR089  DIM       8                  * User Defined Date Field 3
OPPOR090  DIM       8                  * User Defined Date Field 4
OPPOR091  DIM       8                  * User Defined Date Field 5
OPPOR092  DIM       8                  * User Defined Date Field 6
OPPOR093  DIM       8                  * User Defined Date Field 7
OPPOR094  DIM       8                  * User Defined Date Field 8
OPPOR095  DIM       8                  * User Defined Date Field 9
OPPOR096  DIM       8                  * User Defined Date Field 10
.
.**********************************************************************
.* SAVE variables for Pre-Operative Checlist Record                   *
.**********************************************************************
.Name     Type      Length             Description
.----     ----      ------             -----------
SVPOP001  DIM       10                 * Unique ID.
SVPOP002  DIM       1                  * Record Type
SVPOP003  DIM       1                  * Patient ID Bracelet
SVPOP004  DIM       1                  * Surgical Agreement to Treat Signed
SVPOP005  DIM       1                  * Anaesthetic Agreement to Treat Sign
SVPOP006  DIM       1                  * Blood/Product Agree to Treat Signed
SVPOP007  DIM       1                  * Request Tissue/Body Part Signed
SVPOP008  DIM       8                  * Time Nil by Mouth Food (HH:MM:SS)
SVPOP009  DIM       8                  * Time Nil by Fluid (HH:MM:SS)
SVPOP010  DIM       1                  * Nil by Mouth Food Checked
SVPOP011  DIM       1                  * Nil by Fluid Checked
SVPOP012  DIM       1                  * Allergies Noted
SVPOP013  DIM       1                  * ECG Results
SVPOP014  DIM       1                  * Laboratory Results
SVPOP015  DIM       1                  * Complete Blood Form
SVPOP016  DIM       1                  * Medication Chart
SVPOP017  DIM       1                  * Drug Infusion Chart
SVPOP018  DIM       1                  * Fluid Balance Chart
SVPOP019  DIM       1                  * X-Ray/Cat Scans
SVPOP020  DIM       1                  * Diabetic Chart
SVPOP021  DIM       3                  * Dentures            (Category Oy)
SVPOP022  DIM       3                  * Valuables           (Category Oz)
SVPOP023  DIM       1                  * Shave Checked
SVPOP024  DIM       8                  * Time Urine Voided (HH:MM:SS)
SVPOP025  DIM       3                  * Interpreter Required(Category OQ)
SVPOP026  FORM      2                  * Labels Number Required
SVPOP027  DIM       3                  * User Defined Code 1 (Category oY)
SVPOP028  DIM       3                  * User Defined Code 2 (Category oZ)
SVPOP029  DIM       3                  * User Defined Code 3 (Category Oa)
SVPOP030  DIM       3                  * User Defined Code 4 (Category Ob)
SVPOP031  DIM       3                  * User Defined Code 5 (Category Oc)
SVPOP032  DIM       3                  * User Defined Code 6 (Category Od)
SVPOP033  DIM       3                  * User Defined Code 7 (Category Oe)
SVPOP034  DIM       3                  * User Defined Code 8 (Category Of)
SVPOP035  DIM       3                  * User Defined Code 9 (Category Og)
SVPOP036  DIM       3                  * User Defined Code 10(Category Oh)
SVPOP037  DIM       3                  * User Defined Code 11(Category Oi)
SVPOP038  DIM       3                  * User Defined Code 12(Category Oj)
SVPOP039  DIM       3                  * User Defined Code 13(Category Ok)
SVPOP040  DIM       3                  * User Defined Code 14(Category Ol)
SVPOP041  DIM       3                  * User Defined Code 15(Category Om)
SVPOP042  DIM       3                  * User Defined Code 16(Category On)
SVPOP043  DIM       3                  * User Defined Code 17(Category Oo)
SVPOP044  DIM       3                  * User Defined Code 18(Category Op)
SVPOP045  DIM       3                  * User Defined Code 19(Category Oq)
SVPOP046  DIM       3                  * User Defined Code 20(Category Or)
SVPOP047  DIM       1                  * User Defined Y/N 1
SVPOP048  DIM       1                  * User Defined Y/N 2
SVPOP049  DIM       1                  * User Defined Y/N 3
SVPOP050  DIM       1                  * User Defined Y/N 4
SVPOP051  DIM       1                  * User Defined Y/N 5
SVPOP052  DIM       1                  * User Defined Y/N 6
SVPOP053  DIM       1                  * User Defined Y/N 7
SVPOP054  DIM       1                  * User Defined Y/N 8
SVPOP055  DIM       1                  * User Defined Y/N 9
SVPOP056  DIM       1                  * User Defined Y/N 10
SVPOP057  DIM       8                  * User Defined Time Field 1
SVPOP058  DIM       8                  * User Defined Time Field 2
SVPOP059  DIM       8                  * User Defined Time Field 3
SVPOP060  DIM       8                  * User Defined Time Field 4
SVPOP061  DIM       8                  * User Defined Time Field 5
SVPOP062  DIM       8                  * User Defined Time Field 6
SVPOP063  DIM       8                  * User Defined Time Field 7
SVPOP064  DIM       8                  * User Defined Time Field 8
SVPOP065  DIM       8                  * User Defined Time Field 9
SVPOP066  DIM       8                  * User Defined Time Field 10
SVPOP067  FORM      6                  * User Defined Form Field 1
SVPOP068  FORM      6                  * User Defined Form Field 2
SVPOP069  FORM      6                  * User Defined Form Field 3
SVPOP070  FORM      6                  * User Defined Form Field 4
SVPOP071  FORM      6                  * User Defined Form Field 5
SVPOP072  FORM      6                  * User Defined Form Field 6
SVPOP073  FORM      6                  * User Defined Form Field 7
SVPOP074  FORM      6                  * User Defined Form Field 8
SVPOP075  FORM      6                  * User Defined Form Field 9
SVPOP076  FORM      6                  * User Defined Form Field 10
SVPOP077  DIM       10                 * User Defined Doctor Field 1
SVPOP078  DIM       10                 * User Defined Doctor Field 2
SVPOP079  DIM       10                 * User Defined Doctor Field 3
SVPOP080  DIM       10                 * User Defined Doctor Field 4
SVPOP081  DIM       10                 * User Defined Doctor Field 5
SVPOP082  DIM       10                 * User Defined Nurse Field 1
SVPOP083  DIM       10                 * User Defined Nurse Field 2
SVPOP084  DIM       10                 * User Defined Nurse Field 3
SVPOP085  DIM       10                 * User Defined Nurse Field 4
SVPOP086  DIM       10                 * User Defined Nurse Field 5
SVPOP087  DIM       8                  * User Defined Date Field 1
SVPOP088  DIM       8                  * User Defined Date Field 2
SVPOP089  DIM       8                  * User Defined Date Field 3
SVPOP090  DIM       8                  * User Defined Date Field 4
SVPOP091  DIM       8                  * User Defined Date Field 5
SVPOP092  DIM       8                  * User Defined Date Field 6
SVPOP093  DIM       8                  * User Defined Date Field 7
SVPOP094  DIM       8                  * User Defined Date Field 8
SVPOP095  DIM       8                  * User Defined Date Field 9
SVPOP096  DIM       8                  * User Defined Date Field 10
.
.**********************************************************************
.* SAVE variables for Arrival Checlist Record                         *
.**********************************************************************
.Name     Type      Length             Description
.----     ----      ------             -----------
SVPOA002  DIM       1                  * Record Type
SVPOA003  DIM       1                  * Patient ID Bracelet
SVPOA004  DIM       1                  * Surgical Agreement to Treat Signed
SVPOA005  DIM       1                  * Anaesthetic Agreement to Treat Sign
SVPOA006  DIM       1                  * Blood/Product Agree to Treat Signed
SVPOA007  DIM       1                  * Request Tissue/Body Part Signed
SVPOA008  DIM       8                  * Time Nil by Mouth Food (HH:MM:SS)
SVPOA009  DIM       8                  * Time Nil by Fluid (HH:MM:SS)
SVPOA010  DIM       1                  * Nil by Mouth Food Checked
SVPOA011  DIM       1                  * Nil by Fluid Checked
SVPOA012  DIM       1                  * Allergies Noted
SVPOA013  DIM       1                  * ECG Results
SVPOA014  DIM       1                  * Laboratory Results
SVPOA015  DIM       1                  * Complete Blood Form
SVPOA016  DIM       1                  * Medication Chart
SVPOA017  DIM       1                  * Drug Infusion Chart
SVPOA018  DIM       1                  * Fluid Balance Chart
SVPOA019  DIM       1                  * X-Ray/Cat Scans
SVPOA020  DIM       1                  * Diabetic Chart
SVPOA021  DIM       3                  * Dentures            (Category Oy)
SVPOA022  DIM       3                  * Valuables           (Category Oz)
SVPOA023  DIM       1                  * Shave Checked
SVPOA024  DIM       8                  * Time Urine Voided (HH:MM:SS)
SVPOA025  DIM       3                  * Interpreter Required(Category OQ)
SVPOA026  FORM      2                  * Labels Number Required
SVPOA027  DIM       3                  * User Defined Code 1 (Category oY)
SVPOA028  DIM       3                  * User Defined Code 2 (Category oZ)
SVPOA029  DIM       3                  * User Defined Code 3 (Category Oa)
SVPOA030  DIM       3                  * User Defined Code 4 (Category Ob)
SVPOA031  DIM       3                  * User Defined Code 5 (Category Oc)
SVPOA032  DIM       3                  * User Defined Code 6 (Category Od)
SVPOA033  DIM       3                  * User Defined Code 7 (Category Oe)
SVPOA034  DIM       3                  * User Defined Code 8 (Category Of)
SVPOA035  DIM       3                  * User Defined Code 9 (Category Og)
SVPOA036  DIM       3                  * User Defined Code 10(Category Oh)
SVPOA037  DIM       3                  * User Defined Code 11(Category Oi)
SVPOA038  DIM       3                  * User Defined Code 12(Category Oj)
SVPOA039  DIM       3                  * User Defined Code 13(Category Ok)
SVPOA040  DIM       3                  * User Defined Code 14(Category Ol)
SVPOA041  DIM       3                  * User Defined Code 15(Category Om)
SVPOA042  DIM       3                  * User Defined Code 16(Category On)
SVPOA043  DIM       3                  * User Defined Code 17(Category Oo)
SVPOA044  DIM       3                  * User Defined Code 18(Category Op)
SVPOA045  DIM       3                  * User Defined Code 19(Category Oq)
SVPOA046  DIM       3                  * User Defined Code 20(Category Or)
SVPOA047  DIM       1                  * User Defined Y/N 1
SVPOA048  DIM       1                  * User Defined Y/N 2
SVPOA049  DIM       1                  * User Defined Y/N 3
SVPOA050  DIM       1                  * User Defined Y/N 4
SVPOA051  DIM       1                  * User Defined Y/N 5
SVPOA052  DIM       1                  * User Defined Y/N 6
SVPOA053  DIM       1                  * User Defined Y/N 7
SVPOA054  DIM       1                  * User Defined Y/N 8
SVPOA055  DIM       1                  * User Defined Y/N 9
SVPOA056  DIM       1                  * User Defined Y/N 10
SVPOA057  DIM       8                  * User Defined Time Field 1
SVPOA058  DIM       8                  * User Defined Time Field 2
SVPOA059  DIM       8                  * User Defined Time Field 3
SVPOA060  DIM       8                  * User Defined Time Field 4
SVPOA061  DIM       8                  * User Defined Time Field 5
SVPOA062  DIM       8                  * User Defined Time Field 6
SVPOA063  DIM       8                  * User Defined Time Field 7
SVPOA064  DIM       8                  * User Defined Time Field 8
SVPOA065  DIM       8                  * User Defined Time Field 9
SVPOA066  DIM       8                  * User Defined Time Field 10
SVPOA067  FORM      6                  * User Defined Form Field 1
SVPOA068  FORM      6                  * User Defined Form Field 2
SVPOA069  FORM      6                  * User Defined Form Field 3
SVPOA070  FORM      6                  * User Defined Form Field 4
SVPOA071  FORM      6                  * User Defined Form Field 5
SVPOA072  FORM      6                  * User Defined Form Field 6
SVPOA073  FORM      6                  * User Defined Form Field 7
SVPOA074  FORM      6                  * User Defined Form Field 8
SVPOA075  FORM      6                  * User Defined Form Field 9
SVPOA076  FORM      6                  * User Defined Form Field 10
SVPOA077  DIM       10                 * User Defined Doctor Field 1
SVPOA078  DIM       10                 * User Defined Doctor Field 2
SVPOA079  DIM       10                 * User Defined Doctor Field 3
SVPOA080  DIM       10                 * User Defined Doctor Field 4
SVPOA081  DIM       10                 * User Defined Doctor Field 5
SVPOA082  DIM       10                 * User Defined Nurse Field 1
SVPOA083  DIM       10                 * User Defined Nurse Field 2
SVPOA084  DIM       10                 * User Defined Nurse Field 3
SVPOA085  DIM       10                 * User Defined Nurse Field 4
SVPOA086  DIM       10                 * User Defined Nurse Field 5
SVPOA087  DIM       8                  * User Defined Date Field 1
SVPOA088  DIM       8                  * User Defined Date Field 2
SVPOA089  DIM       8                  * User Defined Date Field 3
SVPOA090  DIM       8                  * User Defined Date Field 4
SVPOA091  DIM       8                  * User Defined Date Field 5
SVPOA092  DIM       8                  * User Defined Date Field 6
SVPOA093  DIM       8                  * User Defined Date Field 7
SVPOA094  DIM       8                  * User Defined Date Field 8
SVPOA095  DIM       8                  * User Defined Date Field 9
SVPOA096  DIM       8                  * User Defined Date Field 10
.
.**********************************************************************
.* SAVE variables for Anaesthetic Checklist Record                    *
.**********************************************************************
.Name     Type      Length             Description
.----     ----      ------             -----------
SVPOI002  DIM       1                  * Record Type
SVPOI003  DIM       1                  * Patient ID Bracelet
SVPOI004  DIM       1                  * Surgical Agreement to Treat Signed
SVPOI005  DIM       1                  * Anaesthetic Agreement to Treat Sign
SVPOI006  DIM       1                  * Blood/Product Agree to Treat Signed
SVPOI007  DIM       1                  * Request Tissue/Body Part Signed
SVPOI008  DIM       8                  * Time Nil by Mouth Food (HH:MM:SS)
SVPOI009  DIM       8                  * Time Nil by Fluid (HH:MM:SS)
SVPOI010  DIM       1                  * Nil by Mouth Food Checked
SVPOI011  DIM       1                  * Nil by Fluid Checked
SVPOI012  DIM       1                  * Allergies Noted
SVPOI013  DIM       1                  * ECG Results
SVPOI014  DIM       1                  * Laboratory Results
SVPOI015  DIM       1                  * Complete Blood Form
SVPOI016  DIM       1                  * Medication Chart
SVPOI017  DIM       1                  * Drug Infusion Chart
SVPOI018  DIM       1                  * Fluid Balance Chart
SVPOI019  DIM       1                  * X-Ray/Cat Scans
SVPOI020  DIM       1                  * Diabetic Chart
SVPOI021  DIM       3                  * Dentures            (Category Oy)
SVPOI022  DIM       3                  * Valuables           (Category Oz)
SVPOI023  DIM       1                  * Shave Checked
SVPOI024  DIM       8                  * Time Urine Voided (HH:MM:SS)
SVPOI025  DIM       3                  * Interpreter Required(Category OQ)
SVPOI026  FORM      2                  * Labels Number Required
SVPOI027  DIM       3                  * User Defined Code 1 (Category oY)
SVPOI028  DIM       3                  * User Defined Code 2 (Category oZ)
SVPOI029  DIM       3                  * User Defined Code 3 (Category Oa)
SVPOI030  DIM       3                  * User Defined Code 4 (Category Ob)
SVPOI031  DIM       3                  * User Defined Code 5 (Category Oc)
SVPOI032  DIM       3                  * User Defined Code 6 (Category Od)
SVPOI033  DIM       3                  * User Defined Code 7 (Category Oe)
SVPOI034  DIM       3                  * User Defined Code 8 (Category Of)
SVPOI035  DIM       3                  * User Defined Code 9 (Category Og)
SVPOI036  DIM       3                  * User Defined Code 10(Category Oh)
SVPOI037  DIM       3                  * User Defined Code 11(Category Oi)
SVPOI038  DIM       3                  * User Defined Code 12(Category Oj)
SVPOI039  DIM       3                  * User Defined Code 13(Category Ok)
SVPOI040  DIM       3                  * User Defined Code 14(Category Ol)
SVPOI041  DIM       3                  * User Defined Code 15(Category Om)
SVPOI042  DIM       3                  * User Defined Code 16(Category On)
SVPOI043  DIM       3                  * User Defined Code 17(Category Oo)
SVPOI044  DIM       3                  * User Defined Code 18(Category Op)
SVPOI045  DIM       3                  * User Defined Code 19(Category Oq)
SVPOI046  DIM       3                  * User Defined Code 20(Category Or)
SVPOI047  DIM       1                  * User Defined Y/N 1
SVPOI048  DIM       1                  * User Defined Y/N 2
SVPOI049  DIM       1                  * User Defined Y/N 3
SVPOI050  DIM       1                  * User Defined Y/N 4
SVPOI051  DIM       1                  * User Defined Y/N 5
SVPOI052  DIM       1                  * User Defined Y/N 6
SVPOI053  DIM       1                  * User Defined Y/N 7
SVPOI054  DIM       1                  * User Defined Y/N 8
SVPOI055  DIM       1                  * User Defined Y/N 9
SVPOI056  DIM       1                  * User Defined Y/N 10
SVPOI057  DIM       8                  * User Defined Time Field 1
SVPOI058  DIM       8                  * User Defined Time Field 2
SVPOI059  DIM       8                  * User Defined Time Field 3
SVPOI060  DIM       8                  * User Defined Time Field 4
SVPOI061  DIM       8                  * User Defined Time Field 5
SVPOI062  DIM       8                  * User Defined Time Field 6
SVPOI063  DIM       8                  * User Defined Time Field 7
SVPOI064  DIM       8                  * User Defined Time Field 8
SVPOI065  DIM       8                  * User Defined Time Field 9
SVPOI066  DIM       8                  * User Defined Time Field 10
SVPOI067  FORM      6                  * User Defined Form Field 1
SVPOI068  FORM      6                  * User Defined Form Field 2
SVPOI069  FORM      6                  * User Defined Form Field 3
SVPOI070  FORM      6                  * User Defined Form Field 4
SVPOI071  FORM      6                  * User Defined Form Field 5
SVPOI072  FORM      6                  * User Defined Form Field 6
SVPOI073  FORM      6                  * User Defined Form Field 7
SVPOI074  FORM      6                  * User Defined Form Field 8
SVPOI075  FORM      6                  * User Defined Form Field 9
SVPOI076  FORM      6                  * User Defined Form Field 10
SVPOI077  DIM       10                 * User Defined Doctor Field 1
SVPOI078  DIM       10                 * User Defined Doctor Field 2
SVPOI079  DIM       10                 * User Defined Doctor Field 3
SVPOI080  DIM       10                 * User Defined Doctor Field 4
SVPOI081  DIM       10                 * User Defined Doctor Field 5
SVPOI082  DIM       10                 * User Defined Nurse Field 1
SVPOI083  DIM       10                 * User Defined Nurse Field 2
SVPOI084  DIM       10                 * User Defined Nurse Field 3
SVPOI085  DIM       10                 * User Defined Nurse Field 4
SVPOI086  DIM       10                 * User Defined Nurse Field 5
SVPOI087  DIM       8                  * User Defined Date Field 1
SVPOI088  DIM       8                  * User Defined Date Field 2
SVPOI089  DIM       8                  * User Defined Date Field 3
SVPOI090  DIM       8                  * User Defined Date Field 4
SVPOI091  DIM       8                  * User Defined Date Field 5
SVPOI092  DIM       8                  * User Defined Date Field 6
SVPOI093  DIM       8                  * User Defined Date Field 7
SVPOI094  DIM       8                  * User Defined Date Field 8
SVPOI095  DIM       8                  * User Defined Date Field 9
SVPOI096  DIM       8                  * User Defined Date Field 10
.
.**********************************************************************
.* SAVE variables for Incision Checklist Record                       *
.**********************************************************************
.Name     Type      Length             Description
.----     ----      ------             -----------
SVPOS002  DIM       1                  * Record Type
SVPOS003  DIM       1                  * Patient ID Bracelet
SVPOS004  DIM       1                  * Surgical Agreement to Treat Signed
SVPOS005  DIM       1                  * Anaesthetic Agreement to Treat Sign
SVPOS006  DIM       1                  * Blood/Product Agree to Treat Signed
SVPOS007  DIM       1                  * Request Tissue/Body Part Signed
SVPOS008  DIM       8                  * Time Nil by Mouth Food (HH:MM:SS)
SVPOS009  DIM       8                  * Time Nil by Fluid (HH:MM:SS)
SVPOS010  DIM       1                  * Nil by Mouth Food Checked
SVPOS011  DIM       1                  * Nil by Fluid Checked
SVPOS012  DIM       1                  * Allergies Noted
SVPOS013  DIM       1                  * ECG Results
SVPOS014  DIM       1                  * Laboratory Results
SVPOS015  DIM       1                  * Complete Blood Form
SVPOS016  DIM       1                  * Medication Chart
SVPOS017  DIM       1                  * Drug Infusion Chart
SVPOS018  DIM       1                  * Fluid Balance Chart
SVPOS019  DIM       1                  * X-Ray/Cat Scans
SVPOS020  DIM       1                  * Diabetic Chart
SVPOS021  DIM       3                  * Dentures            (Category Oy)
SVPOS022  DIM       3                  * Valuables           (Category Oz)
SVPOS023  DIM       1                  * Shave Checked
SVPOS024  DIM       8                  * Time Urine Voided (HH:MM:SS)
SVPOS025  DIM       3                  * Interpreter Required(Category OQ)
SVPOS026  FORM      2                  * Labels Number Required
SVPOS027  DIM       3                  * User Defined Code 1 (Category oY)
SVPOS028  DIM       3                  * User Defined Code 2 (Category oZ)
SVPOS029  DIM       3                  * User Defined Code 3 (Category Oa)
SVPOS030  DIM       3                  * User Defined Code 4 (Category Ob)
SVPOS031  DIM       3                  * User Defined Code 5 (Category Oc)
SVPOS032  DIM       3                  * User Defined Code 6 (Category Od)
SVPOS033  DIM       3                  * User Defined Code 7 (Category Oe)
SVPOS034  DIM       3                  * User Defined Code 8 (Category Of)
SVPOS035  DIM       3                  * User Defined Code 9 (Category Og)
SVPOS036  DIM       3                  * User Defined Code 10(Category Oh)
SVPOS037  DIM       3                  * User Defined Code 11(Category Oi)
SVPOS038  DIM       3                  * User Defined Code 12(Category Oj)
SVPOS039  DIM       3                  * User Defined Code 13(Category Ok)
SVPOS040  DIM       3                  * User Defined Code 14(Category Ol)
SVPOS041  DIM       3                  * User Defined Code 15(Category Om)
SVPOS042  DIM       3                  * User Defined Code 16(Category On)
SVPOS043  DIM       3                  * User Defined Code 17(Category Oo)
SVPOS044  DIM       3                  * User Defined Code 18(Category Op)
SVPOS045  DIM       3                  * User Defined Code 19(Category Oq)
SVPOS046  DIM       3                  * User Defined Code 20(Category Or)
SVPOS047  DIM       1                  * User Defined Y/N 1
SVPOS048  DIM       1                  * User Defined Y/N 2
SVPOS049  DIM       1                  * User Defined Y/N 3
SVPOS050  DIM       1                  * User Defined Y/N 4
SVPOS051  DIM       1                  * User Defined Y/N 5
SVPOS052  DIM       1                  * User Defined Y/N 6
SVPOS053  DIM       1                  * User Defined Y/N 7
SVPOS054  DIM       1                  * User Defined Y/N 8
SVPOS055  DIM       1                  * User Defined Y/N 9
SVPOS056  DIM       1                  * User Defined Y/N 10
SVPOS057  DIM       8                  * User Defined Time Field 1
SVPOS058  DIM       8                  * User Defined Time Field 2
SVPOS059  DIM       8                  * User Defined Time Field 3
SVPOS060  DIM       8                  * User Defined Time Field 4
SVPOS061  DIM       8                  * User Defined Time Field 5
SVPOS062  DIM       8                  * User Defined Time Field 6
SVPOS063  DIM       8                  * User Defined Time Field 7
SVPOS064  DIM       8                  * User Defined Time Field 8
SVPOS065  DIM       8                  * User Defined Time Field 9
SVPOS066  DIM       8                  * User Defined Time Field 10
SVPOS067  FORM      6                  * User Defined Form Field 1
SVPOS068  FORM      6                  * User Defined Form Field 2
SVPOS069  FORM      6                  * User Defined Form Field 3
SVPOS070  FORM      6                  * User Defined Form Field 4
SVPOS071  FORM      6                  * User Defined Form Field 5
SVPOS072  FORM      6                  * User Defined Form Field 6
SVPOS073  FORM      6                  * User Defined Form Field 7
SVPOS074  FORM      6                  * User Defined Form Field 8
SVPOS075  FORM      6                  * User Defined Form Field 9
SVPOS076  FORM      6                  * User Defined Form Field 10
SVPOS077  DIM       10                 * User Defined Doctor Field 1
SVPOS078  DIM       10                 * User Defined Doctor Field 2
SVPOS079  DIM       10                 * User Defined Doctor Field 3
SVPOS080  DIM       10                 * User Defined Doctor Field 4
SVPOS081  DIM       10                 * User Defined Doctor Field 5
SVPOS082  DIM       10                 * User Defined Nurse Field 1
SVPOS083  DIM       10                 * User Defined Nurse Field 2
SVPOS084  DIM       10                 * User Defined Nurse Field 3
SVPOS085  DIM       10                 * User Defined Nurse Field 4
SVPOS086  DIM       10                 * User Defined Nurse Field 5
SVPOS087  DIM       8                  * User Defined Date Field 1
SVPOS088  DIM       8                  * User Defined Date Field 2
SVPOS089  DIM       8                  * User Defined Date Field 3
SVPOS090  DIM       8                  * User Defined Date Field 4
SVPOS091  DIM       8                  * User Defined Date Field 5
SVPOS092  DIM       8                  * User Defined Date Field 6
SVPOS093  DIM       8                  * User Defined Date Field 7
SVPOS094  DIM       8                  * User Defined Date Field 8
SVPOS095  DIM       8                  * User Defined Date Field 9
SVPOS096  DIM       8                  * User Defined Date Field 10
.**********************************************************************
.* SAVE variables for OT Signout Checklist Record                     *
.**********************************************************************
.Name     Type      Length             Description
.----     ----      ------             -----------
SVPOO002  DIM       1                  * Record Type
SVPOO003  DIM       1                  * Patient ID Bracelet
SVPOO004  DIM       1                  * Surgical Agreement to Treat Signed
SVPOO005  DIM       1                  * Anaesthetic Agreement to Treat Sign
SVPOO006  DIM       1                  * Blood/Product Agree to Treat Signed
SVPOO007  DIM       1                  * Request Tissue/Body Part Signed
SVPOO008  DIM       8                  * Time Nil by Mouth Food (HH:MM:SS)
SVPOO009  DIM       8                  * Time Nil by Fluid (HH:MM:SS)
SVPOO010  DIM       1                  * Nil by Mouth Food Checked
SVPOO011  DIM       1                  * Nil by Fluid Checked
SVPOO012  DIM       1                  * Allergies Noted
SVPOO013  DIM       1                  * ECG Results
SVPOO014  DIM       1                  * Laboratory Results
SVPOO015  DIM       1                  * Complete Blood Form
SVPOO016  DIM       1                  * Medication Chart
SVPOO017  DIM       1                  * Drug Infusion Chart
SVPOO018  DIM       1                  * Fluid Balance Chart
SVPOO019  DIM       1                  * X-Ray/Cat Scans
SVPOO020  DIM       1                  * Diabetic Chart
SVPOO021  DIM       3                  * Dentures            (Category Oy)
SVPOO022  DIM       3                  * Valuables           (Category Oz)
SVPOO023  DIM       1                  * Shave Checked
SVPOO024  DIM       8                  * Time Urine Voided (HH:MM:SS)
SVPOO025  DIM       3                  * Interpreter Required(Category OQ)
SVPOO026  FORM      2                  * Labels Number Required
SVPOO027  DIM       3                  * User Defined Code 1 (Category oY)
SVPOO028  DIM       3                  * User Defined Code 2 (Category oZ)
SVPOO029  DIM       3                  * User Defined Code 3 (Category Oa)
SVPOO030  DIM       3                  * User Defined Code 4 (Category Ob)
SVPOO031  DIM       3                  * User Defined Code 5 (Category Oc)
SVPOO032  DIM       3                  * User Defined Code 6 (Category Od)
SVPOO033  DIM       3                  * User Defined Code 7 (Category Oe)
SVPOO034  DIM       3                  * User Defined Code 8 (Category Of)
SVPOO035  DIM       3                  * User Defined Code 9 (Category Og)
SVPOO036  DIM       3                  * User Defined Code 10(Category Oh)
SVPOO037  DIM       3                  * User Defined Code 11(Category Oi)
SVPOO038  DIM       3                  * User Defined Code 12(Category Oj)
SVPOO039  DIM       3                  * User Defined Code 13(Category Ok)
SVPOO040  DIM       3                  * User Defined Code 14(Category Ol)
SVPOO041  DIM       3                  * User Defined Code 15(Category Om)
SVPOO042  DIM       3                  * User Defined Code 16(Category On)
SVPOO043  DIM       3                  * User Defined Code 17(Category Oo)
SVPOO044  DIM       3                  * User Defined Code 18(Category Op)
SVPOO045  DIM       3                  * User Defined Code 19(Category Oq)
SVPOO046  DIM       3                  * User Defined Code 20(Category Or)
SVPOO047  DIM       1                  * User Defined Y/N 1
SVPOO048  DIM       1                  * User Defined Y/N 2
SVPOO049  DIM       1                  * User Defined Y/N 3
SVPOO050  DIM       1                  * User Defined Y/N 4
SVPOO051  DIM       1                  * User Defined Y/N 5
SVPOO052  DIM       1                  * User Defined Y/N 6
SVPOO053  DIM       1                  * User Defined Y/N 7
SVPOO054  DIM       1                  * User Defined Y/N 8
SVPOO055  DIM       1                  * User Defined Y/N 9
SVPOO056  DIM       1                  * User Defined Y/N 10
SVPOO057  DIM       8                  * User Defined Time Field 1
SVPOO058  DIM       8                  * User Defined Time Field 2
SVPOO059  DIM       8                  * User Defined Time Field 3
SVPOO060  DIM       8                  * User Defined Time Field 4
SVPOO061  DIM       8                  * User Defined Time Field 5
SVPOO062  DIM       8                  * User Defined Time Field 6
SVPOO063  DIM       8                  * User Defined Time Field 7
SVPOO064  DIM       8                  * User Defined Time Field 8
SVPOO065  DIM       8                  * User Defined Time Field 9
SVPOO066  DIM       8                  * User Defined Time Field 10
SVPOO067  FORM      6                  * User Defined Form Field 1
SVPOO068  FORM      6                  * User Defined Form Field 2
SVPOO069  FORM      6                  * User Defined Form Field 3
SVPOO070  FORM      6                  * User Defined Form Field 4
SVPOO071  FORM      6                  * User Defined Form Field 5
SVPOO072  FORM      6                  * User Defined Form Field 6
SVPOO073  FORM      6                  * User Defined Form Field 7
SVPOO074  FORM      6                  * User Defined Form Field 8
SVPOO075  FORM      6                  * User Defined Form Field 9
SVPOO076  FORM      6                  * User Defined Form Field 10
SVPOO077  DIM       10                 * User Defined Doctor Field 1
SVPOO078  DIM       10                 * User Defined Doctor Field 2
SVPOO079  DIM       10                 * User Defined Doctor Field 3
SVPOO080  DIM       10                 * User Defined Doctor Field 4
SVPOO081  DIM       10                 * User Defined Doctor Field 5
SVPOO082  DIM       10                 * User Defined Nurse Field 1
SVPOO083  DIM       10                 * User Defined Nurse Field 2
SVPOO084  DIM       10                 * User Defined Nurse Field 3
SVPOO085  DIM       10                 * User Defined Nurse Field 4
SVPOO086  DIM       10                 * User Defined Nurse Field 5
SVPOO087  DIM       8                  * User Defined Date Field 1
SVPOO088  DIM       8                  * User Defined Date Field 2
SVPOO089  DIM       8                  * User Defined Date Field 3
SVPOO090  DIM       8                  * User Defined Date Field 4
SVPOO091  DIM       8                  * User Defined Date Field 5
SVPOO092  DIM       8                  * User Defined Date Field 6
SVPOO093  DIM       8                  * User Defined Date Field 7
SVPOO094  DIM       8                  * User Defined Date Field 8
SVPOO095  DIM       8                  * User Defined Date Field 9
SVPOO096  DIM       8                  * User Defined Date Field 10
.

.**********************************************************************
.* SAVE variables for Rec Room Handover Checklist Record              *
.**********************************************************************
.Name     Type      Length             Description
.----     ----      ------             -----------
SVPOR002  DIM       1                  * Record Type
SVPOR003  DIM       1                  * Patient ID Bracelet
SVPOR004  DIM       1                  * Surgical Agreement to Treat Signed
SVPOR005  DIM       1                  * Anaesthetic Agreement to Treat Sign
SVPOR006  DIM       1                  * Blood/Product Agree to Treat Signed
SVPOR007  DIM       1                  * Request Tissue/Body Part Signed
SVPOR008  DIM       8                  * Time Nil by Mouth Food (HH:MM:SS)
SVPOR009  DIM       8                  * Time Nil by Fluid (HH:MM:SS)
SVPOR010  DIM       1                  * Nil by Mouth Food Checked
SVPOR011  DIM       1                  * Nil by Fluid Checked
SVPOR012  DIM       1                  * Allergies Noted
SVPOR013  DIM       1                  * ECG Results
SVPOR014  DIM       1                  * Laboratory Results
SVPOR015  DIM       1                  * Complete Blood Form
SVPOR016  DIM       1                  * Medication Chart
SVPOR017  DIM       1                  * Drug Infusion Chart
SVPOR018  DIM       1                  * Fluid Balance Chart
SVPOR019  DIM       1                  * X-Ray/Cat Scans
SVPOR020  DIM       1                  * Diabetic Chart
SVPOR021  DIM       3                  * Dentures            (Category Oy)
SVPOR022  DIM       3                  * Valuables           (Category Oz)
SVPOR023  DIM       1                  * Shave Checked
SVPOR024  DIM       8                  * Time Urine Voided (HH:MM:SS)
SVPOR025  DIM       3                  * Interpreter Required(Category OQ)
SVPOR026  FORM      2                  * Labels Number Required
SVPOR027  DIM       3                  * User Defined Code 1 (Category oY)
SVPOR028  DIM       3                  * User Defined Code 2 (Category oZ)
SVPOR029  DIM       3                  * User Defined Code 3 (Category Oa)
SVPOR030  DIM       3                  * User Defined Code 4 (Category Ob)
SVPOR031  DIM       3                  * User Defined Code 5 (Category Oc)
SVPOR032  DIM       3                  * User Defined Code 6 (Category Od)
SVPOR033  DIM       3                  * User Defined Code 7 (Category Oe)
SVPOR034  DIM       3                  * User Defined Code 8 (Category Of)
SVPOR035  DIM       3                  * User Defined Code 9 (Category Og)
SVPOR036  DIM       3                  * User Defined Code 10(Category Oh)
SVPOR037  DIM       3                  * User Defined Code 11(Category Oi)
SVPOR038  DIM       3                  * User Defined Code 12(Category Oj)
SVPOR039  DIM       3                  * User Defined Code 13(Category Ok)
SVPOR040  DIM       3                  * User Defined Code 14(Category Ol)
SVPOR041  DIM       3                  * User Defined Code 15(Category Om)
SVPOR042  DIM       3                  * User Defined Code 16(Category On)
SVPOR043  DIM       3                  * User Defined Code 17(Category Oo)
SVPOR044  DIM       3                  * User Defined Code 18(Category Op)
SVPOR045  DIM       3                  * User Defined Code 19(Category Oq)
SVPOR046  DIM       3                  * User Defined Code 20(Category Or)
SVPOR047  DIM       1                  * User Defined Y/N 1
SVPOR048  DIM       1                  * User Defined Y/N 2
SVPOR049  DIM       1                  * User Defined Y/N 3
SVPOR050  DIM       1                  * User Defined Y/N 4
SVPOR051  DIM       1                  * User Defined Y/N 5
SVPOR052  DIM       1                  * User Defined Y/N 6
SVPOR053  DIM       1                  * User Defined Y/N 7
SVPOR054  DIM       1                  * User Defined Y/N 8
SVPOR055  DIM       1                  * User Defined Y/N 9
SVPOR056  DIM       1                  * User Defined Y/N 10
SVPOR057  DIM       8                  * User Defined Time Field 1
SVPOR058  DIM       8                  * User Defined Time Field 2
SVPOR059  DIM       8                  * User Defined Time Field 3
SVPOR060  DIM       8                  * User Defined Time Field 4
SVPOR061  DIM       8                  * User Defined Time Field 5
SVPOR062  DIM       8                  * User Defined Time Field 6
SVPOR063  DIM       8                  * User Defined Time Field 7
SVPOR064  DIM       8                  * User Defined Time Field 8
SVPOR065  DIM       8                  * User Defined Time Field 9
SVPOR066  DIM       8                  * User Defined Time Field 10
SVPOR067  FORM      6                  * User Defined Form Field 1
SVPOR068  FORM      6                  * User Defined Form Field 2
SVPOR069  FORM      6                  * User Defined Form Field 3
SVPOR070  FORM      6                  * User Defined Form Field 4
SVPOR071  FORM      6                  * User Defined Form Field 5
SVPOR072  FORM      6                  * User Defined Form Field 6
SVPOR073  FORM      6                  * User Defined Form Field 7
SVPOR074  FORM      6                  * User Defined Form Field 8
SVPOR075  FORM      6                  * User Defined Form Field 9
SVPOR076  FORM      6                  * User Defined Form Field 10
SVPOR077  DIM       10                 * User Defined Doctor Field 1
SVPOR078  DIM       10                 * User Defined Doctor Field 2
SVPOR079  DIM       10                 * User Defined Doctor Field 3
SVPOR080  DIM       10                 * User Defined Doctor Field 4
SVPOR081  DIM       10                 * User Defined Doctor Field 5
SVPOR082  DIM       10                 * User Defined Nurse Field 1
SVPOR083  DIM       10                 * User Defined Nurse Field 2
SVPOR084  DIM       10                 * User Defined Nurse Field 3
SVPOR085  DIM       10                 * User Defined Nurse Field 4
SVPOR086  DIM       10                 * User Defined Nurse Field 5
SVPOR087  DIM       8                  * User Defined Date Field 1
SVPOR088  DIM       8                  * User Defined Date Field 2
SVPOR089  DIM       8                  * User Defined Date Field 3
SVPOR090  DIM       8                  * User Defined Date Field 4
SVPOR091  DIM       8                  * User Defined Date Field 5
SVPOR092  DIM       8                  * User Defined Date Field 6
SVPOR093  DIM       8                  * User Defined Date Field 7
SVPOR094  DIM       8                  * User Defined Date Field 8
SVPOR095  DIM       8                  * User Defined Date Field 9
SVPOR096  DIM       8                  * User Defined Date Field 10
.
