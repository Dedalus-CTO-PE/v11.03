create table pcpediaf
(
  dpcedtyp    varchar2(2) default ' ' not null,
  pcedcode    varchar2(9) default ' ' not null,
  pcedsub     varchar2(9) default ' ' not null,
  pcedspar    varchar2(10) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint pcpedia1 primary key( 
dpcedtyp,
pcedcode,
pcedsub)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
