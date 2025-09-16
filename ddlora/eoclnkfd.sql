create table eoclnkaf
(
  eclnurno    varchar2(8) default ' ' not null,
  declnepn    varchar2(5) default ' ' not null,
  declnhos    varchar2(2) default ' ' not null,
  declnvis    varchar2(8) default ' ' not null,
  eclnspar    varchar2(30) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint eoclnka1 primary key( 
eclnurno,
declnepn,
declnhos,
declnvis)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index eoclnka2 on eoclnkaf
(
declnhos,
declnvis
)
  tablespace pas_indx; 
create unique index eoclnka3 on eoclnkaf
(
declnvis,
eclnurno,
declnepn,
declnhos
)
  tablespace pas_indx; 
