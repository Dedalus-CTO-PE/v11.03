create table ccibtraf
(
  dccbtbat    varchar2(8) default ' ' not null,
  ccbtuniq    varchar2(4) default ' ' not null,
  ccbtsdat    varchar2(8) default ' ' not null,
  ccbtdept    varchar2(3) default ' ' not null,
  ccbtevnt    varchar2(8) default ' ' not null,
  ccbtproc    varchar2(7) default ' ' not null,
  ccbturno    varchar2(8) default ' ' not null,
  ccbtqnty    number(8,0) default 0 not null,
  ccbtptyp    varchar2(3) default ' ' not null,
  ccbtwarn    number(1,0) default 0 not null,
  ccbtcomm    varchar2(50) default ' ' not null,
  ccbtfsyr    varchar2(4) default ' ' not null,
  ccbtfspr    varchar2(2) default ' ' not null,
  ccbtordd    varchar2(6) default ' ' not null,
  ccbtserv    varchar2(1) default ' ' not null,
  ccbtspar    varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint ccibtra1 primary key( 
dccbtbat,
ccbtuniq,
ccbtsdat,
ccbtdept,
ccbtevnt,
ccbtproc,
ccbturno)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index ccibtra2 on ccibtraf
(
ccbtsdat,
ccbtdept,
ccbturno,
dccbtbat,
ccbtuniq,
ccbtevnt,
ccbtproc
)
  tablespace pas_indx; 
create unique index ccibtra3 on ccibtraf
(
ccbturno,
ccbtsdat,
ccbtdept,
dccbtbat,
ccbtuniq,
ccbtevnt,
ccbtproc
)
  tablespace pas_indx; 
