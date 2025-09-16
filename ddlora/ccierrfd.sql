create table ccierraf
(
  ccerdate    varchar2(8) default ' ' not null,
  ccerdept    varchar2(3) default ' ' not null,
  ccerurno    varchar2(8) default ' ' not null,
  ccerptyp    varchar2(4) default ' ' not null,
  ccerfsyr    varchar2(4) default ' ' not null,
  ccerfspr    varchar2(2) default ' ' not null,
  ccerecnu    varchar2(12) default ' ' not null,
  ccerrtyp    varchar2(3) default ' ' not null,
  ccerspar    varchar2(5) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint ccierra1 primary key( 
ccerdate,
ccerdept,
ccerurno,
ccerptyp)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index ccierra2 on ccierraf
(
ccerurno,
ccerdate,
ccerdept,
ccerptyp
)
  tablespace pas_indx; 
