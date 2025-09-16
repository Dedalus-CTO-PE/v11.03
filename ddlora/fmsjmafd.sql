create table fmsjmaaf
(
  fmjmjty     varchar2(1) default ' ' not null,
  fmjmjid     varchar2(6) default ' ' not null,
  fmjmdesc    varchar2(35) default ' ' not null,
  fmjmdent    varchar2(8) default ' ' not null,
  fmjmledg    varchar2(2) default ' ' not null,
  fmjmstat    varchar2(1) default ' ' not null,
  fmjmcash    number(1,0) default 0 not null,
  fmjmrev     number(1,0) default 0 not null,
  fmjmrpos    varchar2(8) default ' ' not null,
  fmjmcpos    varchar2(8) default ' ' not null,
  fmjmppos    varchar2(8) default ' ' not null,
  fmjmpdat    varchar2(8) default ' ' not null,
  fmjmpbat    varchar2(5) default ' ' not null,
  fmjmrdat    varchar2(8) default ' ' not null,
  fmjmrbat    varchar2(5) default ' ' not null,
  fmjmsper    number(1,0) default 0 not null,
  fmjmfper    varchar2(6) default ' ' not null,
  fmjmlper    varchar2(6) default ' ' not null,
  fmjmprof    varchar2(4) default ' ' not null,
  fmjmspar    varchar2(14) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint fmsjmaa1 primary key( 
fmjmjty,
fmjmjid)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index fmsjmaa2 on fmsjmaaf
(
fmjmjty,
fmjmstat,
fmjmjid
)
  tablespace pas_indx; 
create unique index fmsjmaa3 on fmsjmaaf
(
fmjmjty,
fmjmdent,
fmjmjid
)
  tablespace pas_indx; 
