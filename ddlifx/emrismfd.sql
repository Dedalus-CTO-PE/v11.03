create table emrismaf
(
  emistype    char(1) default ' ' not null,
  emiscode    char(10) default ' ' not null,
  emisnoin    decimal(10,0) default 0 not null,
  emisspar    char(80) default ' ' not null,
  lf          char(1)
);
create unique index emrisma1 on emrismaf
(
emistype,
emiscode
);
revoke all on emrismaf from public ; 
grant select on emrismaf to public ; 
