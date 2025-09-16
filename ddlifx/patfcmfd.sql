create table patfcmmf
(
fundcod     char(6),
dfcount     char(2),
ftext       char(70),
fspares     char(20),
lf          char(1)
);
create unique index patfcmm1 on patfcmmf
(
fundcod,
dfcount
);
revoke all on patfcmmf from public ; 
grant select on patfcmmf to public ; 
