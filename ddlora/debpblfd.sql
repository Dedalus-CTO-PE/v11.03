create table debpblaf
(
  dbpbdeb     varchar2(8) default ' ' not null,
  dbpbuni     varchar2(3) default ' ' not null,
  dbpbtyp     varchar2(3) default ' ' not null,
  dbpbitm     varchar2(8) default ' ' not null,
  dbpbdref    varchar2(50) default ' ' not null,
  dbpboref    varchar2(50) default ' ' not null,
  dbpbqty     number(10,2) default 0 not null,
  dbpbpri     number(16,4) default 0 not null,
  dbpbtot     number(14,2) default 0 not null,
  dbpbtrt     number(6,2) default 0 not null,
  dbpbtax     number(14,2) default 0 not null,
  dbpbur1     varchar2(25) default ' ' not null,
  dbpbur2     varchar2(25) default ' ' not null,
  dbpbud1     varchar2(8) default ' ' not null,
  dbpbud2     varchar2(8) default ' ' not null,
  dbpbuy1     varchar2(1) default ' ' not null,
  dbpbuy2     varchar2(1) default ' ' not null,
  dbpbuc1     varchar2(3) default ' ' not null,
  dbpbuc2     varchar2(3) default ' ' not null,
  dbpbuc3     varchar2(3) default ' ' not null,
  dbpbuc4     varchar2(3) default ' ' not null,
  dbpbgst     varchar2(6) default ' ' not null,
  dbpbspa     varchar2(14) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint debpbla1 primary key( 
dbpbdeb,
dbpbuni)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
