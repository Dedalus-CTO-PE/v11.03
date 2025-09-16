create table amsaudle
(
  amleaudd    varchar2(8) default ' ' not null,
  amleaudt    varchar2(8) default ' ' not null,
  amleaudp    varchar2(2) default ' ' not null,
  amleaudr    varchar2(1) default ' ' not null,
  amleauds    number(1,0) default 0 not null,
  amleaudo    varchar2(4) default ' ' not null,
  amlereg     varchar2(2) default ' ' not null,
  amleass     varchar2(12) default ' ' not null,
  amlecom     varchar2(5) default ' ' not null,
  amlecnm     varchar2(30) default ' ' not null,
  amleref     varchar2(30) default ' ' not null,
  amlecon     varchar2(30) default ' ' not null,
  amledat     varchar2(8) default ' ' not null,
  amleper     number(4,0) default 0 not null,
  amleedt     varchar2(8) default ' ' not null,
  amleins     number(14,2) default 0 not null,
  amlepmt     varchar2(3) default ' ' not null,
  amleres     number(14,2) default 0 not null,
  amleua1     number(14,2) default 0 not null,
  amleua2     number(14,2) default 0 not null,
  amleur1     varchar2(30) default ' ' not null,
  amleur2     varchar2(30) default ' ' not null,
  amleud1     varchar2(8) default ' ' not null,
  amleud2     varchar2(8) default ' ' not null,
  amleuy1     varchar2(1) default ' ' not null,
  amleuy2     varchar2(1) default ' ' not null,
  amlespa     varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null
)
tablespace pas_data; 
create index amsaudle on amsaudle
(
amleaudd,
amleaudt,
amleaudp,
amleaudr
)
tablespace pas_indx; 
create table amsleaaf
(
  amlereg     varchar2(2) default ' ' not null,
  amleass     varchar2(12) default ' ' not null,
  amlecom     varchar2(5) default ' ' not null,
  amlecnm     varchar2(30) default ' ' not null,
  amleref     varchar2(30) default ' ' not null,
  amlecon     varchar2(30) default ' ' not null,
  amledat     varchar2(8) default ' ' not null,
  amleper     number(4,0) default 0 not null,
  amleedt     varchar2(8) default ' ' not null,
  amleins     number(14,2) default 0 not null,
  amlepmt     varchar2(3) default ' ' not null,
  amleres     number(14,2) default 0 not null,
  amleua1     number(14,2) default 0 not null,
  amleua2     number(14,2) default 0 not null,
  amleur1     varchar2(30) default ' ' not null,
  amleur2     varchar2(30) default ' ' not null,
  amleud1     varchar2(8) default ' ' not null,
  amleud2     varchar2(8) default ' ' not null,
  amleuy1     varchar2(1) default ' ' not null,
  amleuy2     varchar2(1) default ' ' not null,
  amlespa     varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint amsleaa1 primary key( 
amlereg,
amleass)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index amsleaa2 on amsleaaf
(
amlecom,
amleref,
amlereg,
amleass
)
  tablespace pas_indx; 
create unique index amsleaa3 on amsleaaf
(
amleref,
amlecom,
amlereg,
amleass
)
  tablespace pas_indx; 
create unique index amsleaa4 on amsleaaf
(
amledat,
amlereg,
amleass
)
  tablespace pas_indx; 
create unique index amsleaa5 on amsleaaf
(
amleedt,
amlereg,
amleass
)
  tablespace pas_indx; 
