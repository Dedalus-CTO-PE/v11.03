create table bokletrf
(
  dbletno     varchar2(3) default ' ' not null,
  dblinno     varchar2(3) default ' ' not null,
  bltext      varchar2(70) default ' ' not null,
  blvar       number(1,0) default 0 not null,
  bletpbot    number(2,0) default 0 not null,
  bletptop    number(2,0) default 0 not null,
  bletppag    number(3,0) default 0 not null,
  bletptab    number(2,0) default 0 not null,
  bletactv    varchar2(1) default ' ' not null,
  bletcomm    varchar2(1) default ' ' not null,
  bletspar    varchar2(11) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint bokletr1 primary key( 
dbletno,
dblinno)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index bokletr2 on bokletrf
(
dblinno,
dbletno
)
  tablespace pas_indx; 
