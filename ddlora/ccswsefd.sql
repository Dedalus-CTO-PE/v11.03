create table ccswseaf
(
  ccwseid     varchar2(4) default ' ' not null,
  ccwswpc     varchar2(10) default ' ' not null,
  ccwsslv     varchar2(1) default ' ' not null,
  ccwsscd     varchar2(10) default ' ' not null,
  ccwstem     varchar2(3) default ' ' not null,
  ccwsspa     varchar2(50) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint ccswsea1 primary key( 
ccwseid,
ccwswpc)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index ccswsea2 on ccswseaf
(
ccwswpc,
ccwseid
)
  tablespace pas_indx; 
