create table sincceaf
(
  sicecst     varchar2(5) default ' ' not null,
  sicecom     varchar2(6) default ' ' not null,
  sicedat     varchar2(6) default ' ' not null,
  siceamt     number(14,2) default 0 not null,
  sicebud     number(14,2) default 0 not null,
  sicespar    varchar2(17) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint sinccea1 primary key( 
sicecst,
sicedat,
sicecom)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index sinccea2 on sincceaf
(
sicecst,
sicecom,
sicedat
)
  tablespace pas_indx; 
