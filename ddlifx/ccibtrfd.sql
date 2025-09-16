create table ccibtraf
(
  dccbtbat    char(8) default ' ' not null,
  ccbtuniq    char(4) default ' ' not null,
  ccbtsdat    char(8) default ' ' not null,
  ccbtdept    char(3) default ' ' not null,
  ccbtevnt    char(8) default ' ' not null,
  ccbtproc    char(7) default ' ' not null,
  ccbturno    char(8) default ' ' not null,
  ccbtqnty    decimal(8,0) default 0 not null,
  ccbtptyp    char(3) default ' ' not null,
  ccbtwarn    decimal(1,0) default 0 not null,
  ccbtcomm    char(50) default ' ' not null,
  ccbtfsyr    char(4) default ' ' not null,
  ccbtfspr    char(2) default ' ' not null,
  ccbtordd    char(6) default ' ' not null,
  ccbtserv    char(1) default ' ' not null,
  ccbtspar    char(20) default ' ' not null,
  lf          char(1)
);
create unique index ccibtra1 on ccibtraf
(
dccbtbat,
ccbtuniq,
ccbtsdat,
ccbtdept,
ccbtevnt,
ccbtproc,
ccbturno
);
create unique index ccibtra2 on ccibtraf
(
ccbtsdat,
ccbtdept,
ccbturno,
dccbtbat,
ccbtuniq,
ccbtevnt,
ccbtproc
);
create unique index ccibtra3 on ccibtraf
(
ccbturno,
ccbtsdat,
ccbtdept,
dccbtbat,
ccbtuniq,
ccbtevnt,
ccbtproc
);
revoke all on ccibtraf from public ; 
grant select on ccibtraf to public ; 
