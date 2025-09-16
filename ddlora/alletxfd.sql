create table alletxaf
(
  aleturno    varchar2(8) default ' ' not null,
  aletloan    varchar2(8) default ' ' not null,
  alettype    varchar2(3) default ' ' not null,
  aletnote    varchar2(6) default ' ' not null,
  aletuniq    varchar2(3) default ' ' not null,
  aletcmnt    varchar2(100) default ' ' not null,
  aletspar    varchar2(30) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint alletxa1 primary key( 
aleturno,
aletloan,
alettype,
aletnote,
aletuniq)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
