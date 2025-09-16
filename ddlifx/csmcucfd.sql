create table csmcucaf
(
cscudbs     char(3),
cscucrd     char(5),
cscutyp     decimal(2,0),
cscuspa     char(20),
lf          char(1)
);
create unique index csmcuca1 on csmcucaf
(
cscudbs,
cscucrd
);
revoke all on csmcucaf from public ; 
grant select on csmcucaf to public ; 
