create table prirasaf
(
  prrainvn    varchar2(8) default ' ' not null,
  prracntn    varchar2(2) default ' ' not null,
  prraoust    number(14,2) default 0 not null,
  prrarmov    varchar2(3) default ' ' not null,
  prrappor    number(14,2) default 0 not null,
  prradele    varchar2(1) default ' ' not null,
  prradbag    varchar2(3) default ' ' not null,
  prracdat    varchar2(8) default ' ' not null,
  prractim    varchar2(8) default ' ' not null,
  prracuid    varchar2(10) default ' ' not null,
  prraudat    varchar2(8) default ' ' not null,
  prrautim    varchar2(8) default ' ' not null,
  prrauuid    varchar2(10) default ' ' not null,
  prraspar    varchar2(100) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint prirasa1 primary key( 
prrainvn,
prracntn)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
