create table debauddb
(
  dbdbaudd    varchar2(8) default ' ' not null,
  dbdbaudt    varchar2(8) default ' ' not null,
  dbdbaudp    varchar2(2) default ' ' not null,
  dbdbaudr    varchar2(1) default ' ' not null,
  dbdbauds    number(1,0) default 0 not null,
  dbdbaudo    varchar2(4) default ' ' not null,
  dbdbdeb     varchar2(8) default ' ' not null,
  dbdbna1     varchar2(35) default ' ' not null,
  dbdbna2     varchar2(35) default ' ' not null,
  dbdbad1     varchar2(35) default ' ' not null,
  dbdbad2     varchar2(35) default ' ' not null,
  dbdbad3     varchar2(35) default ' ' not null,
  dbdbad4     varchar2(35) default ' ' not null,
  dbdbpc      varchar2(8) default ' ' not null,
  dbdbph1     varchar2(20) default ' ' not null,
  dbdbph2     varchar2(20) default ' ' not null,
  dbdbph3     varchar2(20) default ' ' not null,
  dbdbcon     varchar2(30) default ' ' not null,
  dbdbact     number(1,0) default 0 not null,
  dbdbsta     number(1,0) default 0 not null,
  dbdbtex     number(1,0) default 0 not null,
  dbdbter     varchar2(3) default ' ' not null,
  dbdbwrn     varchar2(3) default ' ' not null,
  dbdblin     varchar2(8) default ' ' not null,
  dbdbpur     varchar2(8) default ' ' not null,
  dbdbbad     number(1,0) default 0 not null,
  dbdbclm     number(14,2) default 0 not null,
  dbdbsort    varchar2(25) default ' ' not null,
  dbdbur2     varchar2(25) default ' ' not null,
  dbdbud1     varchar2(8) default ' ' not null,
  dbdbud2     varchar2(8) default ' ' not null,
  dbdbuy1     varchar2(1) default ' ' not null,
  dbdbuy2     varchar2(1) default ' ' not null,
  dbdbuc1     varchar2(3) default ' ' not null,
  dbdbuc2     varchar2(3) default ' ' not null,
  dbdbuc3     varchar2(3) default ' ' not null,
  dbdbuc4     varchar2(3) default ' ' not null,
  dbdbdiss    varchar2(5) default ' ' not null,
  dbdbspa     varchar2(15) default ' ' not null,
  lf          varchar2(1) default ' ' not null
)
tablespace pas_data; 
create index debauddb on debauddb
(
dbdbaudd,
dbdbaudt,
dbdbaudp,
dbdbaudr
)
tablespace pas_indx; 
create table debdbtaf
(
  dbdbdeb     varchar2(8) default ' ' not null,
  dbdbna1     varchar2(35) default ' ' not null,
  dbdbna2     varchar2(35) default ' ' not null,
  dbdbad1     varchar2(35) default ' ' not null,
  dbdbad2     varchar2(35) default ' ' not null,
  dbdbad3     varchar2(35) default ' ' not null,
  dbdbad4     varchar2(35) default ' ' not null,
  dbdbpc      varchar2(8) default ' ' not null,
  dbdbph1     varchar2(20) default ' ' not null,
  dbdbph2     varchar2(20) default ' ' not null,
  dbdbph3     varchar2(20) default ' ' not null,
  dbdbcon     varchar2(30) default ' ' not null,
  dbdbact     number(1,0) default 0 not null,
  dbdbsta     number(1,0) default 0 not null,
  dbdbtex     number(1,0) default 0 not null,
  dbdbter     varchar2(3) default ' ' not null,
  dbdbwrn     varchar2(3) default ' ' not null,
  dbdblin     varchar2(8) default ' ' not null,
  dbdbpur     varchar2(8) default ' ' not null,
  dbdbbad     number(1,0) default 0 not null,
  dbdbclm     number(14,2) default 0 not null,
  dbdbsort    varchar2(25) default ' ' not null,
  dbdbur2     varchar2(25) default ' ' not null,
  dbdbud1     varchar2(8) default ' ' not null,
  dbdbud2     varchar2(8) default ' ' not null,
  dbdbuy1     varchar2(1) default ' ' not null,
  dbdbuy2     varchar2(1) default ' ' not null,
  dbdbuc1     varchar2(3) default ' ' not null,
  dbdbuc2     varchar2(3) default ' ' not null,
  dbdbuc3     varchar2(3) default ' ' not null,
  dbdbuc4     varchar2(3) default ' ' not null,
  dbdbdiss    varchar2(5) default ' ' not null,
  dbdbspa     varchar2(15) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint debdbta1 primary key( 
dbdbdeb)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index debdbta2 on debdbtaf
(
dbdbna1,
dbdbdeb
)
  tablespace pas_indx; 
create unique index debdbta3 on debdbtaf
(
dbdbsort,
dbdbdeb
)
  tablespace pas_indx; 
create unique index debdbta4 on debdbtaf
(
dbdbpur,
dbdbdeb
)
  tablespace pas_indx; 
