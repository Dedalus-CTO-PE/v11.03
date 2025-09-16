create table aaegdcaf
(
  aedccode    char(2) default ' ' not null,
  aedcdesc    char(20) default ' ' not null,
  aedcsuba    char(1) default ' ' not null,
  aedcspar    char(26) default ' ' not null,
  lf          char(1)
);
create unique index aaegdca1 on aaegdcaf
(
aedccode
);
revoke all on aaegdcaf from public ; 
grant select on aaegdcaf to public ; 
