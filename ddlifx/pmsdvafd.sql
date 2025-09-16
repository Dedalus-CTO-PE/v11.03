create table pmsdvaaf
(
  pmdvacat    char(2) default ' ' not null,
  pmdvacod    char(3) default ' ' not null,
  pmdvserv    char(9) default ' ' not null,
  pmdvspar    char(50) default ' ' not null,
  lf          char(1)
);
create unique index pmsdvaa1 on pmsdvaaf
(
pmdvacat,
pmdvacod
);
revoke all on pmsdvaaf from public ; 
grant select on pmsdvaaf to public ; 
