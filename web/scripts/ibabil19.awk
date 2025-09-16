BEGIN   {
        }
        {if (substr($0,24,15)==0)      # Skip lines where amount = zero
         next
        }
        {
###############################################################################
#                                                                             #
#             Fees Invoice Journal in GLI Format for Integra                  #
#        Journal Type PAS1 and source code WP must exist in Integra           #
#                                                                             #
###############################################################################
        jref=substr($0,120,8)     # Journal Ref set to = file name (ffinMMYY)
        scod="WP"                  # Source code, must be set up in Integra
        year="    "                # Set in interface parameters in Integra
        perd="  "                  # Set in interface parameters in Integra
        jtyp="PAS1"                # Journal Type, must exist in Integra
        jdat=substr($0,15,8)       # Journal date
        Cmp=substr($0,1,2)         # Company or Ledger number`
        DRacc=substr($0,3,12)      # Account code for debit line
        CRacc=substr($0,105,12)    # Account code for credit line
        accfill=" "                # 10 Spaces
        desc=substr($0,39,30)      # Description
        ref1=" "                   # 10 Spaces
        ref2=" "                   # 10 Spaces
        ref3=" "                   # 10 Spaces
        val=substr($0,24,15)
        DRVal=val                  # Value for Debit Line
        CRVal=val*-1               # Value for Credit Line
        Ent2=" "                   # 12 Spaces
        Ent3=" "                   # 12 Spaces
        Ent4=" "                   # 12 Spaces
        Ent5=" "                   # 12 Spaces
        Ent6=" "                   # 12 Spaces
        Ent7=" "                   # 12 Spaces
        Ent8=" "                   # 12 Spaces
        usr=" "                    # 250 Spaces
        }
        {
printf("%-10s%-2s%-4s%-2s%-4s%-8s%-2s%-22s%-40s%-10s%-10s%-10s%12.2f%12.2f%12.2f%12.2f%12.2f%12.2f%12.2f%12.2f%-250s\n",jref,scod,year,perd,jtyp,jdat,Cmp,DRacc,desc,ref1,ref2,ref3,DRVal,Ent2,Ent3,Ent4,Ent5,Ent6,Ent7,Ent8,usr)
printf("%-10s%-2s%-4s%-2s%-4s%-8s%-2s%-22s%-40s%-10s%-10s%-10s%12.2f%12.2f%12.2f%12.2f%12.2f%12.2f%12.2f%12.2f%-250s\n",jref,scod,year,perd,jtyp,jdat,Cmp,CRacc,desc,ref1,ref2,ref3,CRVal,Ent2,Ent3,Ent4,Ent5,Ent6,Ent7,Ent8,usr)
}
