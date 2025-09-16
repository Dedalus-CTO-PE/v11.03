create table paticddf
(
dpcode      char(9),
dgpcode     char(4),
dkeywd      char(10),
ddesc       char(70),
dflag       char(1),
dagegp      char(1),
dlow        decimal(2,0),
dhigh       decimal(2,0),
dsex        char(1),
ddagger     char(1),
darea       char(1),
ddigits     char(10),
dicd10cd    char(9),
icdspare    char(21),
lf          char(1)
);
create unique index paticdd1 on paticddf
(
dpcode
);
create unique index paticdd2 on paticddf
(
dgpcode,
dpcode
);
create unique index paticdd3 on paticddf
(
ddesc,
dpcode
);
revoke all on paticddf from public ; 
grant select on paticddf to public ; 
