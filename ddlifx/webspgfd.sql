create table webspgaf
(
wbspprg     char(8),
wbspnam     char(40),
wbspfifo    char(40),
wbspoutd    char(40),
wbspdeft    char(40),
wbspur1     char(30),
wbspur2     char(30),
wbspud1     char(8),
wbspud2     char(8),
wbspuy1     char(1),
wbspuy2     char(1),
wbspspa     char(20),
lf          char(1)
);
create unique index webspga1 on webspgaf
(
wbspprg
);
revoke all on webspgaf from public ; 
grant select on webspgaf to public ; 
