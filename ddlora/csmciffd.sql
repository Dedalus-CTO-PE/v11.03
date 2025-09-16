create table csmcifaf
(
  csifcat     varchar2(7) default ' ' not null,
  csifde01    varchar2(60) default ' ' not null,
  csifde02    varchar2(60) default ' ' not null,
  csifde03    varchar2(60) default ' ' not null,
  csifde04    varchar2(60) default ' ' not null,
  csifde05    varchar2(60) default ' ' not null,
  csifde06    varchar2(60) default ' ' not null,
  csifde07    varchar2(60) default ' ' not null,
  csifde08    varchar2(60) default ' ' not null,
  csifspa     varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint csmcifa1 primary key( 
csifcat)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
