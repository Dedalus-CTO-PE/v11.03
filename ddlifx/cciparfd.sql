create table cciparaf
(
  dccpatyp    char(3) default ' ' not null,
  ccpaauto    decimal(1,0) default 0 not null,
  ccpapcd1    decimal(3,0) default 0 not null,
  ccpapcd2    decimal(3,0) default 0 not null,
  ccpapcd3    decimal(3,0) default 0 not null,
  ccpadcd1    decimal(3,0) default 0 not null,
  ccpadcd2    decimal(3,0) default 0 not null,
  ccpaspar    char(30) default ' ' not null,
  lf          char(1)
);
create unique index ccipara1 on cciparaf
(
dccpatyp
);
revoke all on cciparaf from public ; 
grant select on cciparaf to public ; 
