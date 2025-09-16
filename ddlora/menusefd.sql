create table menuserf
(
  meusmenu    varchar2(8) default ' ' not null,
  meusk2      varchar2(3) default ' ' not null,
  meusk3      varchar2(2) default ' ' not null,
  meusk4      varchar2(2) default ' ' not null,
  meusd1      varchar2(64) default ' ' not null,
  meusd2      varchar2(100) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint menuser1 primary key( 
meusmenu,
meusk2,
meusk3,
meusk4)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
