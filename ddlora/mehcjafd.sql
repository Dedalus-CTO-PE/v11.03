create table mehcjaaf
(
  dmhcjadm    varchar2(8) default ' ' not null,
  mhcjdate    varchar2(8) default ' ' not null,
  mhcjtime    varchar2(5) default ' ' not null,
  mhcjstat    varchar2(3) default ' ' not null,
  mhcjspar    varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint mehcjaa1 primary key( 
dmhcjadm,
mhcjdate,
mhcjtime)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index mehcjaa2 on mehcjaaf
(
mhcjdate,
mhcjtime,
dmhcjadm
)
  tablespace pas_indx; 
