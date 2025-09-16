create table patpkiaf
(
ptpkcode    char(3),
ptpkkkwd    char(50),
ptpkspar    char(50),
lf          char(1)
);
create unique index patpkia1 on patpkiaf
(
ptpkcode,
ptpkkkwd
);
create unique index patpkia2 on patpkiaf
(
ptpkkkwd,
ptpkcode
);
revoke all on patpkiaf from public ; 
grant select on patpkiaf to public ; 
