create table patin1af
(
  icode       varchar2(6) default ' ' not null,
  iname       varchar2(30) default ' ' not null,
  iadd1       varchar2(35) default ' ' not null,
  iadd2       varchar2(35) default ' ' not null,
  iadd3       varchar2(35) default ' ' not null,
  iadd4       varchar2(35) default ' ' not null,
  ipost       varchar2(8) default ' ' not null,
  icont       varchar2(30) default ' ' not null,
  iteleb      varchar2(20) default ' ' not null,
  ibill       number(14,2) default 0 not null,
  iaout       number(14,2) default 0 not null,
  isort       varchar2(6) default ' ' not null,
  ptinscem    varchar2(80) default ' ' not null,
  ptinscpn    varchar2(40) default ' ' not null,
  ptinscpp    varchar2(20) default ' ' not null,
  ptinactv    varchar2(1) default ' ' not null,
  ptinfaxn    varchar2(20) default ' ' not null,
  ptinemai    varchar2(80) default ' ' not null,
  ptinserv    varchar2(3) default ' ' not null,
  ptinclai    varchar2(3) default ' ' not null,
  ptinarce    varchar2(3) default ' ' not null,
  ptinspar    varchar2(51) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint patin1a1 primary key( 
icode)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index patin1a2 on patin1af
(
isort,
icode
)
  tablespace pas_indx; 
