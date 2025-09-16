create table patwbhaf
(
  wbhward     varchar2(3) default ' ' not null,
  wbhbed      varchar2(3) default ' ' not null,
  wbhdate     varchar2(8) default ' ' not null,
  wbhrtyp     varchar2(3) default ' ' not null,
  wbhactv     number(1,0) default 0 not null,
  wbhnocc     number(3,0) default 0 not null,
  wbhclas     varchar2(3) default ' ' not null,
  wbhdchg     varchar2(8) default ' ' not null,
  wbhtchg     varchar2(8) default ' ' not null,
  wbhtime     varchar2(8) default ' ' not null,
  wbhupid     varchar2(10) default ' ' not null,
  wbhifst     varchar2(3) default ' ' not null,
  wbhcrdt     varchar2(8) default ' ' not null,
  wbhcrtm     varchar2(8) default ' ' not null,
  wbhcrid     varchar2(10) default ' ' not null,
  wbhspar     varchar2(46) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint patwbha1 primary key( 
wbhward,
wbhbed,
wbhdate)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index patwbha2 on patwbhaf
(
wbhcrdt,
wbhcrtm,
wbhward,
wbhbed,
wbhdate
)
  tablespace pas_indx; 
