create table aaegtcaf
(
  aetccode    char(4) default ' ' not null,
  aetcdesc    char(20) default ' ' not null,
  aetcsuba    char(1) default ' ' not null,
  aetcspar    char(24) default ' ' not null,
  lf          char(1)
);
create unique index aaegtca1 on aaegtcaf
(
aetccode
);
revoke all on aaegtcaf from public ; 
grant select on aaegtcaf to public ; 
