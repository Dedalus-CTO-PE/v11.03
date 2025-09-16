create table ceanbmaf
(
  cenbaty     varchar2(3) default ' ' not null,
  cenbwrd     varchar2(3) default ' ' not null,
  cenbfc1     number(10,4) default 0 not null,
  cenbfc2     number(10,4) default 0 not null,
  cenbfc3     number(10,4) default 0 not null,
  cenbfc4     number(10,4) default 0 not null,
  cenbfc5     number(10,4) default 0 not null,
  cenbspa     varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint ceanbma1 primary key( 
cenbaty,
cenbwrd)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index ceanbma2 on ceanbmaf
(
cenbwrd,
cenbaty
)
  tablespace pas_indx; 
