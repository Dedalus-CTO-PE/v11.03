create table nhidmcaf
(
  nhdmdom     char(4) default ' ' not null,
  nhdmdes     char(50) default ' ' not null,
  nhdmdhb     char(3) default ' ' not null,
  nhdmspa     char(17) default ' ' not null,
  lf          char(1)
);
create unique index nhidmca1 on nhidmcaf
(
nhdmdom
);
create unique index nhidmca2 on nhidmcaf
(
nhdmdes,
nhdmdom
);
revoke all on nhidmcaf from public ; 
grant select on nhidmcaf to public ; 
