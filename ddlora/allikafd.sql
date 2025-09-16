create table allikaaf
(
  alikdept    varchar2(3) default ' ' not null,
  alikcode    varchar2(9) default ' ' not null,
  alikkwrd    varchar2(50) default ' ' not null,
  alikspar    varchar2(50) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint allikaa1 primary key( 
alikdept,
alikcode,
alikkwrd)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index allikaa2 on allikaaf
(
alikdept,
alikkwrd,
alikcode
)
  tablespace pas_indx; 
