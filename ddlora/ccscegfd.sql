create table ccscegaf
(
  cceglv1     varchar2(10) default ' ' not null,
  cceghcd     varchar2(2) default ' ' not null,
  ccegdpt     varchar2(8) default ' ' not null,
  ccegpcd     varchar2(8) default ' ' not null,
  ccegqty     number(14,2) default 0 not null,
  ccegftc     number(14,2) default 0 not null,
  ccegttc     number(14,2) default 0 not null,
  ccegspa     varchar2(30) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint ccscega1 primary key( 
cceglv1,
cceghcd,
ccegdpt,
ccegpcd)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index ccscega2 on ccscegaf
(
cceghcd,
ccegdpt,
ccegpcd,
cceglv1
)
  tablespace pas_indx; 
