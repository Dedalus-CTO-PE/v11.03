create table alledtaf
(
  aledurno    varchar2(8) default ' ' not null,
  aledloan    varchar2(8) default ' ' not null,
  aledtype    varchar2(3) default ' ' not null,
  alednote    varchar2(6) default ' ' not null,
  aleddate    varchar2(8) default ' ' not null,
  aledtime    varchar2(8) default ' ' not null,
  aleduser    varchar2(10) default ' ' not null,
  aledoccg    varchar2(3) default ' ' not null,
  aleddelt    varchar2(1) default ' ' not null,
  aledddat    varchar2(8) default ' ' not null,
  aleddtim    varchar2(8) default ' ' not null,
  aledduse    varchar2(10) default ' ' not null,
  aleddocc    varchar2(3) default ' ' not null,
  aledspar    varchar2(30) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint alledta1 primary key( 
aledurno,
aledloan,
aledtype,
alednote)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
