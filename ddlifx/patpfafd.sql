create table patpfaaf
(
ptpfinvn    char(8),
ptpfifdt    char(8),
ptpfplan    char(8),
ptpfstat    char(3),
ptpfmodr    char(3),
ptpfwebc    char(10),
ptpfdatc    char(8),
ptpftimc    char(8),
ptpfwebu    char(10),
ptpfdatu    char(8),
ptpftimu    char(8),
ptpfspar    char(60),
lf          char(1)
);
create unique index patpfaa1 on patpfaaf
(
ptpfinvn
);
revoke all on patpfaaf from public ; 
grant select on patpfaaf to public ; 
