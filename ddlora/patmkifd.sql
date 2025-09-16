create table patmkiaf
(
  ptmkcode    varchar2(26) default ' ' not null,
  ptmkkkwd    varchar2(30) default ' ' not null,
  ptmkdclm    varchar2(3) default ' ' not null,
  ptmkspar    varchar2(27) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint patmkia1 primary key( 
ptmkcode,
ptmkkkwd)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index patmkia2 on patmkiaf
(
ptmkkkwd,
ptmkcode
)
  tablespace pas_indx; 
create unique index patmkia3 on patmkiaf
(
ptmkdclm,
ptmkkkwd,
ptmkcode
)
  tablespace pas_indx; 
