create table pat3miaf
(
pt3mtype    char(1),
pt3mcode    char(9),
pt3mmap     char(9),
pt3mspar    char(10),
lf          char(1)
);
create unique index pat3mia1 on pat3miaf
(
pt3mtype,
pt3mcode
);
create unique index pat3mia2 on pat3miaf
(
pt3mmap,
pt3mtype,
pt3mcode
);
revoke all on pat3miaf from public ; 
grant select on pat3miaf to public ; 
