create table syscomaf
(
  sycmsys     char(2) default ' ' not null,
  sycmfil     char(2) default ' ' not null,
  sycmfld     char(4) default ' ' not null,
  dsycmuni    char(2) default ' ' not null,
  sycmtext    char(37) default ' ' not null,
  sycmspar    char(27) default ' ' not null,
  lf          char(1)
);
create unique index syscoma1 on syscomaf
(
sycmsys,
sycmfil,
sycmfld,
dsycmuni
);
revoke all on syscomaf from public ; 
grant select on syscomaf to public ; 
