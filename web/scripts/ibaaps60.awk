#-----------------------------------------------
# Awk Script to extact the creditors name 
# from the remittance advice spool file.
#-----------------------------------------------
/Fax    : / { print substr($0,10,35)
              exit
            }
