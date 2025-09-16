create table sinkctaf
(
  sikckwd     varchar2(15) default ' ' not null,
  sikccat     varchar2(7) default ' ' not null,
  sikcspa     varchar2(10) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint sinkcta1 primary key( 
sikckwd,
sikccat)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index sinkcta2 on sinkctaf
(
sikccat,
sikckwd
)
  tablespace pas_indx; 
