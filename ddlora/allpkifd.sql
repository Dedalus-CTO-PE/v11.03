create table allpkiaf
(
  alpkdept    varchar2(3) default ' ' not null,
  alpkprob    varchar2(9) default ' ' not null,
  alpkkkwd    varchar2(40) default ' ' not null,
  alpkspar    varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint allpkia1 primary key( 
alpkdept,
alpkprob,
alpkkkwd)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index allpkia2 on allpkiaf
(
alpkdept,
alpkkkwd,
alpkprob
)
  tablespace pas_indx; 
