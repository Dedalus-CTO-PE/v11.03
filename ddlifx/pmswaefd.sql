create table pmswaeaf
(
  pmwahosp    char(3) default ' ' not null,
  pmwaprog    char(8) default ' ' not null,
  pmwasdat    char(8) default ' ' not null,
  pmwaedat    char(8) default ' ' not null,
  pmwacdat    char(8) default ' ' not null,
  pmwactim    char(8) default ' ' not null,
  pmwawebc    char(10) default ' ' not null,
  pmwaspar    char(100) default ' ' not null,
  lf          char(1)
);
create unique index pmswaea1 on pmswaeaf
(
pmwahosp,
pmwaprog,
pmwasdat,
pmwaedat
);
revoke all on pmswaeaf from public ; 
grant select on pmswaeaf to public ; 
