create table emruseaf
(
  emuseus     varchar2(10) default ' ' not null,
  emusdes     varchar2(35) default ' ' not null,
  emuspas     varchar2(10) default ' ' not null,
  emuslev     varchar2(2) default ' ' not null,
  emusact     varchar2(1) default ' ' not null,
  emusedt     varchar2(8) default ' ' not null,
  emusspa     varchar2(60) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint emrusea1 primary key( 
emuseus)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index emrusea2 on emruseaf
(
emusdes,
emuseus
)
  tablespace pas_indx; 
