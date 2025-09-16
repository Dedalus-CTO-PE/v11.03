create table patkicaf
(
  ptkicode    varchar2(6) default ' ' not null,
  ptkikwrd    varchar2(15) default ' ' not null,
  ptkispar    varchar2(29) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint patkica1 primary key( 
ptkicode,
ptkikwrd)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index patkica2 on patkicaf
(
ptkikwrd,
ptkicode
)
  tablespace pas_indx; 
