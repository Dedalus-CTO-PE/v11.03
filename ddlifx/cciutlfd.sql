create table cciutlaf
(
  ccutdate    char(8) default ' ' not null,
  ccutdept    char(3) default ' ' not null,
  dccutevn    char(8) default ' ' not null,
  ccutproc    char(7) default ' ' not null,
  ccuturno    char(8) default ' ' not null,
  ccutqunt    decimal(8,0) default 0 not null,
  ccutptyp    char(4) default ' ' not null,
  ccutfsyr    char(4) default ' ' not null,
  ccutfspr    char(2) default ' ' not null,
  ccutcomm    char(30) default ' ' not null,
  ccutsent    char(1) default ' ' not null,
  dccutbat    char(8) default ' ' not null,
  ccutchrg    decimal(10,2) default 0 not null,
  ccutorig    char(3) default ' ' not null,
  ccuthpre    char(1) default ' ' not null,
  ccutsiba    char(1) default ' ' not null,
  ccutordd    char(6) default ' ' not null,
  ccutserv    char(1) default ' ' not null,
  ccutspar    char(39) default ' ' not null,
  lf          char(1)
);
create unique index cciutll1 on cciutlaf
(
ccutdate,
ccutdept,
dccutevn,
ccutproc,
ccuturno,
dccutbat
);
create unique index cciutll2 on cciutlaf
(
ccutdate,
ccutdept,
ccuturno,
dccutevn,
ccutproc,
dccutbat
);
create unique index cciutll3 on cciutlaf
(
dccutevn,
ccutdate,
ccutdept,
ccuturno,
ccutproc,
dccutbat
);
create unique index cciutll4 on cciutlaf
(
dccutbat,
ccutdate,
ccutdept,
ccuturno,
dccutevn,
ccutproc
);
create unique index cciutll5 on cciutlaf
(
ccuturno,
ccutdate,
ccutdept,
dccutevn,
ccutproc,
dccutbat
);
revoke all on cciutlaf from public ; 
grant select on cciutlaf to public ; 
