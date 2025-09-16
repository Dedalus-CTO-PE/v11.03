create table ccsrbdaf
(
  ccrbhcd     varchar2(2) default ' ' not null,
  ccrbeps     varchar2(16) default ' ' not null,
  ccrbmid     varchar2(3) default ' ' not null,
  ccrbfdr     number(14,2) default 0 not null,
  ccrbfid     number(14,2) default 0 not null,
  ccrbvdr     number(14,2) default 0 not null,
  ccrbvid     number(14,2) default 0 not null,
  ccrbspa     varchar2(30) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint ccsrbda1 primary key( 
ccrbhcd,
ccrbeps,
ccrbmid)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
