create table paticddf
(
  dpcode      varchar2(9) default ' ' not null,
  dgpcode     varchar2(4) default ' ' not null,
  dkeywd      varchar2(10) default ' ' not null,
  ddesc       varchar2(70) default ' ' not null,
  dflag       varchar2(1) default ' ' not null,
  dagegp      varchar2(1) default ' ' not null,
  dlow        number(2,0) default 0 not null,
  dhigh       number(2,0) default 0 not null,
  dsex        varchar2(1) default ' ' not null,
  ddagger     varchar2(1) default ' ' not null,
  darea       varchar2(1) default ' ' not null,
  ddigits     varchar2(10) default ' ' not null,
  dicd10cd    varchar2(9) default ' ' not null,
  icdspare    varchar2(21) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint paticdd1 primary key( 
dpcode)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index paticdd2 on paticddf
(
dgpcode,
dpcode
)
  tablespace pas_indx; 
create unique index paticdd3 on paticddf
(
ddesc,
dpcode
)
  tablespace pas_indx; 
