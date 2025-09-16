create table allritaf
(
  alrtvisn    varchar2(8) default ' ' not null,
  alrtitmc    varchar2(2) default ' ' not null,
  alrtiflg    varchar2(2) default ' ' not null,
  alrtitmn    varchar2(9) default ' ' not null,
  alrtsubn    varchar2(3) default ' ' not null,
  alrtcdat    varchar2(8) default ' ' not null,
  alrtctim    varchar2(8) default ' ' not null,
  alrtcuid    varchar2(10) default ' ' not null,
  alrtudat    varchar2(8) default ' ' not null,
  alrtutim    varchar2(8) default ' ' not null,
  alrtuuid    varchar2(10) default ' ' not null,
  alrtpuse    varchar2(20) default ' ' not null,
  alrtspar    varchar2(50) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint allrita1 primary key( 
alrtvisn,
alrtitmc)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
