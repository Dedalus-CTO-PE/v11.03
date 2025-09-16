create table debcreaf
(
  dbcrdeb     varchar2(8) default ' ' not null,
  dbcrrec     varchar2(12) default ' ' not null,
  dbcrtyp     varchar2(1) default ' ' not null,
  dbcrrst     varchar2(1) default ' ' not null,
  dbcrddt     varchar2(8) default ' ' not null,
  dbcrdtm     varchar2(6) default ' ' not null,
  dbcrdrw     varchar2(30) default ' ' not null,
  dbcrchq     varchar2(8) default ' ' not null,
  dbcrbnk     varchar2(6) default ' ' not null,
  dbcrbra     varchar2(25) default ' ' not null,
  dbcramt     number(14,2) default 0 not null,
  dbcrdat     varchar2(8) default ' ' not null,
  dbcrusr     varchar2(4) default ' ' not null,
  dbcridt     varchar2(8) default ' ' not null,
  dbcritm     varchar2(6) default ' ' not null,
  dbcrur1     varchar2(25) default ' ' not null,
  dbcrur2     varchar2(25) default ' ' not null,
  dbcrud1     varchar2(8) default ' ' not null,
  dbcrud2     varchar2(8) default ' ' not null,
  dbcruy1     varchar2(1) default ' ' not null,
  dbcruy2     varchar2(1) default ' ' not null,
  dbcruc1     varchar2(3) default ' ' not null,
  dbcruc2     varchar2(3) default ' ' not null,
  dbcrspa     varchar2(18) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint debcrea1 primary key( 
dbcrrec)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index debcrea2 on debcreaf
(
dbcrrst,
dbcrrec
)
  tablespace pas_indx; 
create unique index debcrea3 on debcreaf
(
dbcrddt,
dbcrdtm,
dbcrrec
)
  tablespace pas_indx; 
