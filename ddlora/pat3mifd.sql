create table pat3miaf
(
  pt3mtype    varchar2(1) default ' ' not null,
  pt3mcode    varchar2(9) default ' ' not null,
  pt3mmap     varchar2(9) default ' ' not null,
  pt3mspar    varchar2(10) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint pat3mia1 primary key( 
pt3mtype,
pt3mcode)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index pat3mia2 on pat3miaf
(
pt3mmap,
pt3mtype,
pt3mcode
)
  tablespace pas_indx; 
