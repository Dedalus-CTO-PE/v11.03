create table prithdaf
(
prthtmid    char(4),
prthdesc    char(35),
prthindc    char(1),
prthspre    char(40),
lf          char(1)
);
create unique index prithda1 on prithdaf
(
prthtmid
);
revoke all on prithdaf from public ; 
grant select on prithdaf to public ; 
