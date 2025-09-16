create table ccsoapaf
(
  ccoacid     varchar2(6) default ' ' not null,
  ccoadep     varchar2(3) default ' ' not null,
  ccoavty     varchar2(3) default ' ' not null,
  ccoapri     number(14,2) default 0 not null,
  ccoaspa     varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint ccsoapa1 primary key( 
ccoacid,
ccoadep,
ccoavty)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
