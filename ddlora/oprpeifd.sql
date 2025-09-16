create table oprpeiaf
(
  oppeunid    varchar2(10) default ' ' not null,
  oppetmno    varchar2(1) default ' ' not null,
  oppecode    varchar2(6) default ' ' not null,
  doppecnt    varchar2(2) default ' ' not null,
  oppequan    number(8,0) default 0 not null,
  oppechrg    varchar2(1) default ' ' not null,
  oppebrok    varchar2(1) default ' ' not null,
  oppespar    varchar2(13) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint oprpeia1 primary key( 
oppeunid,
oppetmno,
doppecnt)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index oprpeia2 on oprpeiaf
(
oppecode,
oppeunid,
oppetmno,
doppecnt
)
  tablespace pas_indx; 
