create table pmsigraf
(
  pmigcode    char(3) default ' ' not null,
  pmigdesc    char(80) default ' ' not null,
  pmigeati    decimal(8,3) default 0 not null,
  pmigroom    decimal(8,3) default 0 not null,
  pmigbath    decimal(8,3) default 0 not null,
  pmigupbd    decimal(8,3) default 0 not null,
  pmiglwbd    decimal(8,3) default 0 not null,
  pmigtoil    decimal(8,3) default 0 not null,
  pmigblad    decimal(8,3) default 0 not null,
  pmigbowe    decimal(8,3) default 0 not null,
  pmigtbed    decimal(8,3) default 0 not null,
  pmigttoi    decimal(8,3) default 0 not null,
  pmigttub    decimal(8,3) default 0 not null,
  pmigwalk    decimal(8,3) default 0 not null,
  pmigstai    decimal(8,3) default 0 not null,
  pmigspar    char(30) default ' ' not null,
  lf          char(1)
);
create unique index pmsigra1 on pmsigraf
(
pmigcode
);
revoke all on pmsigraf from public ; 
grant select on pmsigraf to public ; 
