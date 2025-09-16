create table emrgrcaf
(
  emrccode    char(2) default ' ' not null,
  emrcdesc    char(20) default ' ' not null,
  emrcflag    char(1) default ' ' not null,
  emrcspar    char(26) default ' ' not null,
  lf          char(1)
);
create unique index emrgrca1 on emrgrcaf
(
emrccode
);
revoke all on emrgrcaf from public ; 
grant select on emrgrcaf to public ; 
