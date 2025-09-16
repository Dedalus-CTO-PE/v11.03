create table ccsdcoaf
(
  ccdchcd     varchar2(2) default ' ' not null,
  ccdcdpt     varchar2(8) default ' ' not null,
  ccdcyear    varchar2(4) default ' ' not null,
  ccdcper     varchar2(2) default ' ' not null,
  ccdccty     varchar2(4) default ' ' not null,
  ccdcdir     number(14,2) default 0 not null,
  ccdcind     number(14,2) default 0 not null,
  ccdccal     number(14,2) default 0 not null,
  ccdcdbu     number(14,2) default 0 not null,
  ccdcibu     number(14,2) default 0 not null,
  ccdccbu     number(14,2) default 0 not null,
  ccdcfbu     number(14,2) default 0 not null,
  ccdcspa     varchar2(30) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint ccsdcoa1 primary key( 
ccdchcd,
ccdcdpt,
ccdcyear,
ccdcper,
ccdccty)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index ccsdcoa2 on ccsdcoaf
(
ccdchcd,
ccdcdpt,
ccdccty,
ccdcyear,
ccdcper
)
  tablespace pas_indx; 
