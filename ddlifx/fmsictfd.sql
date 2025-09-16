create table fmsictaf
(
  fmicicd     char(3) default ' ' not null,
  fmictty     char(1) default ' ' not null,
  fmictfl     char(2) default ' ' not null,
  fmictfa     char(12) default ' ' not null,
  fmicttl     char(2) default ' ' not null,
  fmictta     char(12) default ' ' not null,
  fmicspa     char(30) default ' ' not null,
  lf          char(1)
);
create unique index fmsicta1 on fmsictaf
(
fmicicd,
fmictty,
fmictfl,
fmictfa
);
revoke all on fmsictaf from public ; 
grant select on fmsictaf to public ; 
