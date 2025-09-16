create table pmsmctaf
(
  pmmcinvn    char(8) default ' ' not null,
  pmmcsnam    char(40) default ' ' not null,
  pmmcfnam    char(40) default ' ' not null,
  pmmccdob    char(8) default ' ' not null,
  pmmcmnum    char(10) default ' ' not null,
  pmmcrnum    char(1) default ' ' not null,
  pmmcadd1    char(35) default ' ' not null,
  pmmcadd2    char(35) default ' ' not null,
  pmmcadd3    char(35) default ' ' not null,
  pmmcadd4    char(35) default ' ' not null,
  pmmcpcod    char(8) default ' ' not null,
  pmmcspar    char(50) default ' ' not null,
  lf          char(1)
);
create unique index pmsmcta1 on pmsmctaf
(
pmmcinvn
);
revoke all on pmsmctaf from public ; 
grant select on pmsmctaf to public ; 
