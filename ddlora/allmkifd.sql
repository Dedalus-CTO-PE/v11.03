create table allmkiaf
(
  almkcode    varchar2(20) default ' ' not null,
  almkkwrd    varchar2(60) default ' ' not null,
  almkspar    varchar2(30) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint allmkia1 primary key( 
almkcode,
almkkwrd)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index allmkia2 on allmkiaf
(
almkkwrd,
almkcode
)
  tablespace pas_indx; 
