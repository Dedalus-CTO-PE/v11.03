create table pmsincaf
(
  pminuniq    char(10) default ' ' not null,
  pminspar    char(100) default ' ' not null,
  lf          char(1)
);
create unique index pmsinca1 on pmsincaf
(
pminuniq
);
revoke all on pmsincaf from public ; 
grant select on pmsincaf to public ; 
