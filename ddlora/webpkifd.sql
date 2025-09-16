create table webpkiaf
(
  wbpkcode    varchar2(3) default ' ' not null,
  wbpkkkwd    varchar2(50) default ' ' not null,
  wbpkspar    varchar2(100) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint webpkia1 primary key( 
wbpkcode,
wbpkkkwd)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index webpkia2 on webpkiaf
(
wbpkkkwd,
wbpkcode
)
  tablespace pas_indx; 
