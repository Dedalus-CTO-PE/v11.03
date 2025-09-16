#"Version"  : "V10.03.00"
#"Home"     : "/opt/iba/bin"-->
#    POSTCODE CONVERSION - reformat Tab delimited file to fixed length fields
#    Command line : awk -f convpost.awk postcode.txt > postoutp.txt


BEGIN    { FS="\t" }
         { printf("%4s%-45s%5s%4s%5s%4s",$1,$2,$3,$4,$5,$6) 
           printf("%5s%4s%5s%4s%5s%4s%-3s",$7,$8,$9,$10,$11,$12,$13)
           printf("%-9s%-5s\n",$14,$15) }

# %nd: decimal, fixed length
# %ns: alpha character, right justified
# %-ns: alpha character, left justified
# %-x.ns: alpha character, left justified, fixed length
