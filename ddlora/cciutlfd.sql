create table cciutlaf
(
  ccutdate    varchar2(8) default ' ' not null,
  ccutdept    varchar2(3) default ' ' not null,
  dccutevn    varchar2(8) default ' ' not null,
  ccutproc    varchar2(7) default ' ' not null,
  ccuturno    varchar2(8) default ' ' not null,
  ccutqunt    number(8,0) default 0 not null,
  ccutptyp    varchar2(4) default ' ' not null,
  ccutfsyr    varchar2(4) default ' ' not null,
  ccutfspr    varchar2(2) default ' ' not null,
  ccutcomm    varchar2(30) default ' ' not null,
  ccutsent    varchar2(1) default ' ' not null,
  dccutbat    varchar2(8) default ' ' not null,
  ccutchrg    number(10,2) default 0 not null,
  ccutorig    varchar2(3) default ' ' not null,
  ccuthpre    varchar2(1) default ' ' not null,
  ccutsiba    varchar2(1) default ' ' not null,
  ccutordd    varchar2(6) default ' ' not null,
  ccutserv    varchar2(1) default ' ' not null,
  ccutspar    varchar2(39) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint cciutll1 primary key( 
ccutdate,
ccutdept,
dccutevn,
ccutproc,
ccuturno,
dccutbat)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index cciutll2 on cciutlaf
(
ccutdate,
ccutdept,
ccuturno,
dccutevn,
ccutproc,
dccutbat
)
  tablespace pas_indx; 
create unique index cciutll3 on cciutlaf
(
dccutevn,
ccutdate,
ccutdept,
ccuturno,
ccutproc,
dccutbat
)
  tablespace pas_indx; 
create unique index cciutll4 on cciutlaf
(
dccutbat,
ccutdate,
ccutdept,
ccuturno,
dccutevn,
ccutproc
)
  tablespace pas_indx; 
create unique index cciutll5 on cciutlaf
(
ccuturno,
ccutdate,
ccutdept,
dccutevn,
ccutproc,
dccutbat
)
  tablespace pas_indx; 
