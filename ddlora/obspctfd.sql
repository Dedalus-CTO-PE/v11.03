create table obspctaf
(
  obptslid    varchar2(4) default ' ' not null,
  obptsdir    varchar2(80) default ' ' not null,
  obpturlp    varchar2(80) default ' ' not null,
  obptroly    number(1,0) default 0 not null,
  obptcrdt    varchar2(8) default ' ' not null,
  obptcldt    varchar2(8) default ' ' not null,
  obptspar    varchar2(30) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint obspcta1 primary key( 
obptslid)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
