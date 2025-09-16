create table watletrf
(
  dwletno     varchar2(3) default ' ' not null,
  dwlinno     varchar2(3) default ' ' not null,
  wltext      varchar2(70) default ' ' not null,
  wlvar       number(1,0) default 0 not null,
  wletpbot    number(2,0) default 0 not null,
  wletptop    number(2,0) default 0 not null,
  wletppag    number(3,0) default 0 not null,
  wletptab    number(2,0) default 0 not null,
  wletmmfn    varchar2(8) default ' ' not null,
  wletvald    varchar2(1) default ' ' not null,
  wletaudl    varchar2(1) default ' ' not null,
  wletactv    varchar2(1) default ' ' not null,
  wletcomm    varchar2(1) default ' ' not null,
  wletconf    varchar2(1) default ' ' not null,
  wletspar    varchar2(47) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint watletr1 primary key( 
dwletno,
dwlinno)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index watletr2 on watletrf
(
dwlinno,
dwletno
)
  tablespace pas_indx; 
create unique index watletr3 on watletrf
(
dwlinno,
wltext,
dwletno
)
  tablespace pas_indx; 
