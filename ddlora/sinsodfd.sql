create table sinsodaf
(
  siodsid     varchar2(3) default ' ' not null,
  siodwar     varchar2(5) default ' ' not null,
  siodcat     varchar2(7) default ' ' not null,
  siodsup     varchar2(5) default ' ' not null,
  siodcst     number(16,4) default 0 not null,
  siodgsta    number(16,4) default 0 not null,
  siodqty     number(14,2) default 0 not null,
  siodsut     varchar2(15) default ' ' not null,
  siodcon     varchar2(10) default ' ' not null,
  siodcdt     varchar2(8) default ' ' not null,
  siodedt     varchar2(8) default ' ' not null,
  siodgst     varchar2(6) default ' ' not null,
  siodspa     varchar2(22) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint sinsoda1 primary key( 
siodwar,
siodcat)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index sinsoda2 on sinsodaf
(
siodsid,
siodsup,
siodwar,
siodcat
)
  tablespace pas_indx; 
