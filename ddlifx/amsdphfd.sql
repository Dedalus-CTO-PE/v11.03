create table amsdphaf
(
  amdhreg     char(2) default ' ' not null,
  amdhass     char(12) default ' ' not null,
  amdhdat     char(8) default ' ' not null,
  amdhfdpt    char(3) default ' ' not null,
  amdhtdpt    char(3) default ' ' not null,
  amdhcom     char(30) default ' ' not null,
  amdhua1     decimal(14,2) default 0 not null,
  amdhua2     decimal(14,2) default 0 not null,
  amdhur1     char(30) default ' ' not null,
  amdhur2     char(30) default ' ' not null,
  amdhuy1     char(1) default ' ' not null,
  amdhuy2     char(1) default ' ' not null,
  amdhspa     char(20) default ' ' not null,
  lf          char(1)
);
create unique index amsdpha1 on amsdphaf
(
amdhreg,
amdhass,
amdhdat
);
revoke all on amsdphaf from public ; 
grant select on amsdphaf to public ; 
