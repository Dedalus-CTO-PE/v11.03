create table pmscdmaf
(
pmdmurno    char(8),
pmdmstat    char(1),
pmdmpw01    char(5),
pmdmpw02    char(5),
pmdmpw03    char(5),
pmdmpw04    char(5),
pmdmpw05    char(5),
pmdmpw06    char(5),
pmdmpw07    char(5),
pmdmpw08    char(5),
pmdmpw09    char(5),
pmdmpw10    char(5),
pmdmspar    char(50),
lf          char(1)
);
create unique index pmscdma1 on pmscdmaf
(
pmdmurno
);
revoke all on pmscdmaf from public ; 
grant select on pmscdmaf to public ; 
