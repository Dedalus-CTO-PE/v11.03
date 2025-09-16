create table pmsnewaf
(
  pmnwfiel    varchar2(8) default ' ' not null,
  pmnwflno    varchar2(3) default ' ' not null,
  pmnwdeft    varchar2(1) default ' ' not null,
  pmnwcode    varchar2(10) default ' ' not null,
  pmnwfree    varchar2(40) default ' ' not null,
  pmnwspar    varchar2(10) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint pmsnewa1 primary key( 
pmnwfiel)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index pmsnewa2 on pmsnewaf
(
pmnwflno
)
  tablespace pas_indx; 
