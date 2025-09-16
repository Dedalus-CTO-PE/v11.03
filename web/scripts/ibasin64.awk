BEGIN    { FS="*"
           date=substr(FILENAME,2,6)
           number=substr(FILENAME,9,3)
         }
/^BAK/   { orderno=$4
         }
/^PO1/   { lineno=$2
           orderqty=$3
           sellunit=$4
           untprice=$5
           custcode=$8
           custcpad="             "
           suppcode=$10
         }
/^ACK/   { acktype=$2
           ackqty=$3
################################################################################
#
# The following print string should be used for Numeric catalog codes
#
################################################################################
           printf("%s%s%20s%3s%7s%-15s%14.4f%7s%13s%-20s%2s%7s\n",date,number,orderno,lineno,orderqty,sellunit,untprice,custcode,custcpad,suppcode,acktype,ackqty)
################################################################################
#
# The following print string should be used for Alphanumeric catalog codes
#
################################################################################
#           printf("%s%s%20s%3s%7s%-15s%14.4f%-7s%13s%-20s%2s%7s\n",date,number,orderno,lineno,orderqty,sellunit,untprice,custcode,custcpad,suppcode,acktype,ackqty)
         }
           
