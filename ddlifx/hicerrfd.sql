create table hicerraf
(
  hcerbtch    char(5) default ' ' not null,
  hcerlcnt    char(3) default ' ' not null,
  hcerpmci    char(8) default ' ' not null,
  hcerpyee    char(10) default ' ' not null,
  hcerpsrv    char(10) default ' ' not null,
  hcerclmn    char(8) default ' ' not null,
  hcervpos    char(2) default ' ' not null,
  hcermedi    char(10) default ' ' not null,
  hcerfnam    char(12) default ' ' not null,
  hceritmn    char(5) default ' ' not null,
  hceridat    char(8) default ' ' not null,
  hcerbass    decimal(14,2) default 0 not null,
  hcerbpad    decimal(14,2) default 0 not null,
  hcerecod    char(3) default ' ' not null,
  hcersurn    char(18) default ' ' not null,
  hcerdesc    char(50) default ' ' not null,
  hcerspar    char(31) default ' ' not null,
  lf          char(1)
);
create unique index hicerra1 on hicerraf
(
hcerbtch,
hcerlcnt
);
revoke all on hicerraf from public ; 
grant select on hicerraf to public ; 
