create table amslohaf
(
  amlhreg     varchar2(2) default ' ' not null,
  amlhass     varchar2(12) default ' ' not null,
  amlhdat     varchar2(8) default ' ' not null,
  amlhfbld    varchar2(3) default ' ' not null,
  amlhfloc    varchar2(6) default ' ' not null,
  amlhtbld    varchar2(3) default ' ' not null,
  amlhtloc    varchar2(6) default ' ' not null,
  amlhcom     varchar2(30) default ' ' not null,
  amlhua1     number(14,2) default 0 not null,
  amlhua2     number(14,2) default 0 not null,
  amlhur1     varchar2(30) default ' ' not null,
  amlhur2     varchar2(30) default ' ' not null,
  amlhuy1     varchar2(1) default ' ' not null,
  amlhuy2     varchar2(1) default ' ' not null,
  amlhspa     varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint amsloha1 primary key( 
amlhreg,
amlhass,
amlhdat)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
