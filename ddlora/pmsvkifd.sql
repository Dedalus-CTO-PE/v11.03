create table pmsvkiaf
(
  pmvkcode    varchar2(5) default ' ' not null,
  pmvkkkwd    varchar2(30) default ' ' not null,
  pmvkspar    varchar2(25) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint pmsvkia1 primary key( 
pmvkcode,
pmvkkkwd)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index pmsvkia2 on pmsvkiaf
(
pmvkkkwd,
pmvkcode
)
  tablespace pas_indx; 
