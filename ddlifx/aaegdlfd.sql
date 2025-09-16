create table aaegdlaf
(
  aedlmain    char(2) default ' ' not null,
  aedlcode    char(1) default ' ' not null,
  aedldesc    char(20) default ' ' not null,
  aedlspar    char(26) default ' ' not null,
  lf          char(1)
);
create unique index aaegdla1 on aaegdlaf
(
aedlmain,
aedlcode
);
revoke all on aaegdlaf from public ; 
grant select on aaegdlaf to public ; 
