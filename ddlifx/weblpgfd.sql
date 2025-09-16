create table weblpgaf
(
wblplkid    char(8),
wblppgno    char(3),
wblptitl    char(50),
wblphead    char(50),
wblpclor    char(6),
wblpscod    char(1),
wblppseq    char(1),
wblpspar    char(30),
lf          char(1)
);
create unique index weblpga1 on weblpgaf
(
wblplkid,
wblppgno
);
revoke all on weblpgaf from public ; 
grant select on weblpgaf to public ; 
