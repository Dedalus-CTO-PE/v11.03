create table amsaudin
(
  aminaudd    varchar2(8) default ' ' not null,
  aminaudt    varchar2(8) default ' ' not null,
  aminaudp    varchar2(2) default ' ' not null,
  aminaudr    varchar2(1) default ' ' not null,
  aminauds    number(1,0) default 0 not null,
  aminaudo    varchar2(4) default ' ' not null,
  aminreg     varchar2(2) default ' ' not null,
  aminass     varchar2(12) default ' ' not null,
  amincom     varchar2(5) default ' ' not null,
  amincod     varchar2(30) default ' ' not null,
  aminref     varchar2(30) default ' ' not null,
  amincon     varchar2(30) default ' ' not null,
  amindat     varchar2(8) default ' ' not null,
  aminval     number(14,2) default 0 not null,
  aminapr     number(14,2) default 0 not null,
  aminua1     number(14,2) default 0 not null,
  aminua2     number(14,2) default 0 not null,
  aminur1     varchar2(30) default ' ' not null,
  aminur2     varchar2(30) default ' ' not null,
  aminud1     varchar2(8) default ' ' not null,
  aminud2     varchar2(8) default ' ' not null,
  aminuy1     varchar2(1) default ' ' not null,
  aminuy2     varchar2(1) default ' ' not null,
  aminspa     varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null
)
tablespace pas_data; 
create index amsaudin on amsaudin
(
aminaudd,
aminaudt,
aminaudp,
aminaudr
)
tablespace pas_indx; 
create table amsinsaf
(
  aminreg     varchar2(2) default ' ' not null,
  aminass     varchar2(12) default ' ' not null,
  amincom     varchar2(5) default ' ' not null,
  amincod     varchar2(30) default ' ' not null,
  aminref     varchar2(30) default ' ' not null,
  amincon     varchar2(30) default ' ' not null,
  amindat     varchar2(8) default ' ' not null,
  aminval     number(14,2) default 0 not null,
  aminapr     number(14,2) default 0 not null,
  aminua1     number(14,2) default 0 not null,
  aminua2     number(14,2) default 0 not null,
  aminur1     varchar2(30) default ' ' not null,
  aminur2     varchar2(30) default ' ' not null,
  aminud1     varchar2(8) default ' ' not null,
  aminud2     varchar2(8) default ' ' not null,
  aminuy1     varchar2(1) default ' ' not null,
  aminuy2     varchar2(1) default ' ' not null,
  aminspa     varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint amsinsa1 primary key( 
aminreg,
aminass)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index amsinsa2 on amsinsaf
(
amincom,
aminref,
aminreg,
aminass
)
  tablespace pas_indx; 
create unique index amsinsa3 on amsinsaf
(
amindat,
aminreg,
aminass
)
  tablespace pas_indx; 
create unique index amsinsa4 on amsinsaf
(
aminref,
amincod,
aminreg,
aminass
)
  tablespace pas_indx; 
