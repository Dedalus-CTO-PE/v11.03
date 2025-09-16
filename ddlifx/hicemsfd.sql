create table hicemsaf
(
  hcemcode    char(3) default ' ' not null,
  hcemdesc    char(70) default ' ' not null,
  hcemspar    char(50) default ' ' not null,
  lf          char(1)
);
create unique index hicemsa1 on hicemsaf
(
hcemcode
);
create unique index hicemsa2 on hicemsaf
(
hcemdesc,
hcemcode
);
revoke all on hicemsaf from public ; 
grant select on hicemsaf to public ; 
