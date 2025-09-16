create table ibaextaf
(
  ibexextn    char(4) default ' ' not null,
  ibexdesc    char(20) default ' ' not null,
  ibexchrg    char(3) default ' ' not null,
  ibexetyp    decimal(2,0) default 0 not null,
  ibexdebt    char(8) default ' ' not null,
  ibexptyp    char(3) default ' ' not null,
  ibexlevl    char(3) default ' ' not null,
  ibexsrvl    char(3) default ' ' not null,
  dibexten    char(2) default ' ' not null,
  ibexlvld    char(3) default ' ' not null,
  ibexspar    char(17) default ' ' not null,
  lf          char(1)
);
create unique index ibaexta1 on ibaextaf
(
ibexextn
);
create unique index ibaexta2 on ibaextaf
(
ibexdebt,
ibexextn
);
revoke all on ibaextaf from public ; 
grant select on ibaextaf to public ; 
