create table emrincaf
(
  emipadmn    char(8) default ' ' not null,
  emipdcom    char(1) default ' ' not null,
  emipncom    char(1) default ' ' not null,
  emipccom    char(1) default ' ' not null,
  emipdoct    char(10) default ' ' not null,
  emipnurs    char(10) default ' ' not null,
  emipspar    char(80) default ' ' not null,
  lf          char(1)
);
create unique index emrinca1 on emrincaf
(
emipadmn
);
create unique index emrinca2 on emrincaf
(
emipdoct,
emipadmn
);
create unique index emrinca3 on emrincaf
(
emipnurs,
emipadmn
);
revoke all on emrincaf from public ; 
grant select on emrincaf to public ; 
