 #    VEMD CONVERSION - reformat Tab delimited file to fixed length fields
 #         command line : awk -f vemdconv.awk convvemd.txt > ibavemdo.txt


BEGIN    { FS="	"     # looking for tab delimiters in file
         }
         { printf("%-4.4s",$1)                 # site identifier
           printf("%-9.9s",$2)                 # visit number
           printf("%-10.10s",$3)               # patient identifier
           printf("%-11.11s",$4)               # medicare no
           printf("%-3.3s",$5)                 # medicare suffix
           printf("%-9.9s",$6)                 # DVA number 
           printf("%-1.1s",$7)                 # sex
           printf("%-8.8s",$8)                 # date of birth
           printf("%-4.4s",$9)                 # country of birth
           printf("%-1.1s",$10)                # indigenous status
           printf("%-2.2s",$11)                # preferred language
           printf("%-22.22s",$12)              # locality
           printf("%-4.4s",$13)                # post code
           printf("%-2.2s",$14)                # arrival transport mode
           printf("%-2.2s",$15)                # referred by
           printf("%-4.4s",$16)                # transfer source
           printf("%-2.2s",$17)                # type of visit
           printf("%-1.1s",$18)                # compensable status
           printf("%-6.6s",$19)                # ambulance case no
           printf("%-8.8s",$20)                # arrival date
           printf("%-4.4s",$21)                # arrival time
           printf("%-8.8s",$22)                # triage date
           printf("%-4.4s",$23)                # triage time
           printf("%-1.1s",$24)                # triage category
           printf("%-8.8s",$25)                # f.s.b.treating nurse date
           printf("%-4.4s",$26)                # f.s.b.treating nurse time
           printf("%-8.8s",$27)                # f.s.b.treating doc date
           printf("%-4.4s",$28)                # f.s.b.treating doc time
           printf("%-89.89s",$29)              # procedures (30 x 2 + {)
           printf("%-1.1s",$30)                # Inpat bed request 
           printf("%-8.8s",$31)                # inpat bed request date
           printf("%-4.4s",$32)                # inpat bed request time
           printf("%-8.8s",$33)                # departure date (ddmmccyy)
           printf("%-4.4s",$34)                # departure time
           printf("%-1.1s",$35)                # departure status
           printf("%-4.4s",$36)                # transfer destination
           printf("%-2.2s",$37)                # referred to on depart.
           printf("%-1.1s",$38)                # ongoing care comms.
           printf("%-1.1s",$39)                # reason for transfer
           printf("%-1.1s",$40)                # escort source
           printf("%-2.2s",$41)                # departure transport mode
           printf("%-6.6s",$42)                # primary diagnosis
           printf("%-6.6s",$43)                # additional diag 1
           printf("%-6.6s",$44)                # additional diag 2
           printf("%-2.2s",$45)                # nature of main injury
           printf("%-2.2s",$46)                # body region
           printf("%-100.100s",$47)            # desc. of injury event
           printf("%-2.2s",$48)                # injury cause
           printf("%-2.2s",$49)                # human intent
           printf("%-1.1s",$50)                # where injury occured
           printf("%-1.1s\n",$51)              # activity when injured
         }

# %nd: decimal, fixed length
# %ns: alpha character, right justified
# %-ns: alpha character, left justified
# %-x.ns: alpha character, left justified, fixed length
