create table patrasaf
(
  ptrainvn    varchar2(8) default ' ' not null,
  ptracntn    varchar2(2) default ' ' not null,
  ptrasyst    varchar2(1) default ' ' not null,
  ptraoust    number(14,2) default 0 not null,
  ptrarmov    varchar2(3) default ' ' not null,
  ptrappor    number(14,2) default 0 not null,
  ptraibal    varchar2(8) default ' ' not null,
  ptradele    varchar2(1) default ' ' not null,
  ptracdat    varchar2(8) default ' ' not null,
  ptractim    varchar2(8) default ' ' not null,
  ptracuid    varchar2(10) default ' ' not null,
  ptraudat    varchar2(8) default ' ' not null,
  ptrautim    varchar2(8) default ' ' not null,
  ptrauuid    varchar2(10) default ' ' not null,
  ptradbag    varchar2(3) default ' ' not null,
  ptraspar    varchar2(97) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint patrasa1 primary key( 
ptrainvn,
ptracntn)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
