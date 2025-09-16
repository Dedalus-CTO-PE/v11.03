create table legmmbsf
(
  lmmcode     char(9) default ' ' not null,
  dlmmadmn    char(8) default ' ' not null,
  dlmmrecn    char(2) default ' ' not null,
  lmmdate     char(8) default ' ' not null,
  lmmstim     char(5) default ' ' not null,
  lmmetim     char(5) default ' ' not null,
  lmmspare    char(6) default ' ' not null,
  lf          char(1)
);
create unique index legmmbs2 on legmmbsf
(
lmmcode,
dlmmadmn,
dlmmrecn
);
create unique index legmmbs1 on legmmbsf
(
dlmmadmn,
dlmmrecn
);
revoke all on legmmbsf from public ; 
grant select on legmmbsf to public ; 
