create table oprsiuaf
(
  opsiitem    varchar2(6) default ' ' not null,
  opsidate    varchar2(8) default ' ' not null,
  opsiuniq    varchar2(10) default ' ' not null,
  opsispar    varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint oprsiua1 primary key( 
opsiitem,
opsidate,
opsiuniq)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index oprsiua2 on oprsiuaf
(
opsiuniq,
opsidate,
opsiitem
)
  tablespace pas_indx; 
