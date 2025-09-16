create table pmsxmlaf
(
  pmxmtype    varchar2(3) default ' ' not null,
  pmxmxtag    varchar2(80) default ' ' not null,
  pmxmxcgi    varchar2(8) default ' ' not null,
  pmxmspar    varchar2(200) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint pmsxmla1 primary key( 
pmxmtype,
pmxmxtag)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index pmsxmla2 on pmsxmlaf
(
pmxmtype,
pmxmxcgi,
pmxmxtag
)
  tablespace pas_indx; 
