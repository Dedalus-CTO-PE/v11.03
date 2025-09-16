create table comewdaf
(
  cmewdstr    varchar2(3) default ' ' not null,
  cmewcntn    varchar2(8) default ' ' not null,
  cmewobjt    varchar2(3) default ' ' not null,
  cmewokey    varchar2(90) default ' ' not null,
  cmewtext    varchar2(900) default ' ' not null,
  cmewsdat    varchar2(8) default ' ' not null,
  cmewrtyp    varchar2(1) default ' ' not null,
  cmewscdt    varchar2(8) default ' ' not null,
  cmewsctm    varchar2(8) default ' ' not null,
  cmewmddt    varchar2(8) default ' ' not null,
  cmewmdtm    varchar2(8) default ' ' not null,
  cmewspar    varchar2(60) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint comewda1 primary key( 
cmewdstr,
cmewcntn,
cmewobjt,
cmewokey)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index comewda2 on comewdaf
(
cmewdstr,
cmewobjt,
cmewokey,
cmewsdat,
cmewcntn
)
  tablespace pas_indx; 
