create table sincseaf
(
  sicsuid     varchar2(4) default ' ' not null,
  sicscst     varchar2(5) default ' ' not null,
  sicslev     number(1,0) default 0 not null,
  sicsspa     varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint sincsea1 primary key( 
sicsuid,
sicscst)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index sincsea2 on sincseaf
(
sicscst,
sicsuid
)
  tablespace pas_indx; 
