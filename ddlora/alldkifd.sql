create table alldkiaf
(
  aldkdept    varchar2(3) default ' ' not null,
  aldkdiag    varchar2(9) default ' ' not null,
  aldkkkwd    varchar2(15) default ' ' not null,
  aldkspar    varchar2(25) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint alldkia1 primary key( 
aldkdept,
aldkdiag,
aldkkkwd)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index alldkia2 on alldkiaf
(
aldkdept,
aldkkkwd,
aldkdiag
)
  tablespace pas_indx; 
