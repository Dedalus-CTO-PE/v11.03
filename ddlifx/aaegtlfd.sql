create table aaegtlaf
(
  aetlmain    char(4) default ' ' not null,
  aetlcode    char(2) default ' ' not null,
  aetldesc    char(20) default ' ' not null,
  aetlspar    char(23) default ' ' not null,
  lf          char(1)
);
create unique index aaegtla1 on aaegtlaf
(
aetlmain,
aetlcode
);
revoke all on aaegtlaf from public ; 
grant select on aaegtlaf to public ; 
