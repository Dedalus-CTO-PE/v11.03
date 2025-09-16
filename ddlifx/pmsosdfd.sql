create table pmsosdaf
(
pmodurno    char(8),
pmodwebu    char(10),
pmodspar    char(70),
lf          char(1)
);
create unique index pmsosda1 on pmsosdaf
(
pmodurno
);
revoke all on pmsosdaf from public ; 
grant select on pmsosdaf to public ; 
