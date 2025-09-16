create table patprvaf
(
ptpvcode    char(6),
ptpvdesc    char(40),
ptpvspar    char(23),
lf          char(1)
);
create unique index patprva1 on patprvaf
(
ptpvcode
);
revoke all on patprvaf from public ; 
grant select on patprvaf to public ; 
