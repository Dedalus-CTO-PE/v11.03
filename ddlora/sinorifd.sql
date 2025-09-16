create table sinaudor
(
  sioraudd    varchar2(8) default ' ' not null,
  sioraudt    varchar2(8) default ' ' not null,
  sioraudp    varchar2(2) default ' ' not null,
  sioraudr    varchar2(1) default ' ' not null,
  siorauds    number(1,0) default 0 not null,
  sioraudo    varchar2(4) default ' ' not null,
  siororig    varchar2(3) default ' ' not null,
  siorname    varchar2(20) default ' ' not null,
  siorhosp    varchar2(20) default ' ' not null,
  siordel     number(1,0) default 0 not null,
  siormess    varchar2(3) default ' ' not null,
  siorext     varchar2(10) default ' ' not null,
  siorcon     varchar2(3) default ' ' not null,
  siorur1     varchar2(15) default ' ' not null,
  siorur2     varchar2(15) default ' ' not null,
  siorud1     varchar2(8) default ' ' not null,
  siorud2     varchar2(8) default ' ' not null,
  sioruc1     varchar2(3) default ' ' not null,
  sioruc2     varchar2(3) default ' ' not null,
  sioruy1     varchar2(1) default ' ' not null,
  sioruy2     varchar2(1) default ' ' not null,
  siorspa     varchar2(18) default ' ' not null,
  lf          varchar2(1) default ' ' not null
)
tablespace pas_data; 
create index sinaudor on sinaudor
(
sioraudd,
sioraudt,
sioraudp,
sioraudr
)
tablespace pas_indx; 
create table sinoriaf
(
  siororig    varchar2(3) default ' ' not null,
  siorname    varchar2(20) default ' ' not null,
  siorhosp    varchar2(20) default ' ' not null,
  siordel     number(1,0) default 0 not null,
  siormess    varchar2(3) default ' ' not null,
  siorext     varchar2(10) default ' ' not null,
  siorcon     varchar2(3) default ' ' not null,
  siorur1     varchar2(15) default ' ' not null,
  siorur2     varchar2(15) default ' ' not null,
  siorud1     varchar2(8) default ' ' not null,
  siorud2     varchar2(8) default ' ' not null,
  sioruc1     varchar2(3) default ' ' not null,
  sioruc2     varchar2(3) default ' ' not null,
  sioruy1     varchar2(1) default ' ' not null,
  sioruy2     varchar2(1) default ' ' not null,
  siorspa     varchar2(18) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint sinoria1 primary key( 
siororig)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
