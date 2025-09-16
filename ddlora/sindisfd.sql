create table sindisaf
(
  sidswar     varchar2(5) default ' ' not null,
  sidscat     varchar2(7) default ' ' not null,
  sidsdat     varchar2(8) default ' ' not null,
  sidsdis     number(14,2) default 0 not null,
  sidsval     number(14,2) default 0 not null,
  sidsspa     varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint sindisa1 primary key( 
sidswar,
sidscat,
sidsdat)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
