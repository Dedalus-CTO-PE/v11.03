create table compolaf
(
  cmplstat    char(1) default ' ' not null,
  cmpltype    char(3) default ' ' not null,
  cmpluniq    char(20) default ' ' not null,
  cmplfiln    char(120) default ' ' not null,
  cmplspar    char(100) default ' ' not null,
  lf          char(1)
);
create unique index compola1 on compolaf
(
cmplstat,
cmpltype,
cmpluniq
);
create unique index compola2 on compolaf
(
cmpltype,
cmpluniq
);
create unique index compola3 on compolaf
(
cmpltype,
cmplstat,
cmpluniq
);
revoke all on compolaf from public ; 
grant select on compolaf to public ; 
