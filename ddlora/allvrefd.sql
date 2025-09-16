create table allvreaf
(
  alvrstat    varchar2(1) default ' ' not null,
  alvrurno    varchar2(8) default ' ' not null,
  alvrvisn    varchar2(8) default ' ' not null,
  alvrmtyp    varchar2(7) default ' ' not null,
  alvrecod    varchar2(4) default ' ' not null,
  alvrcont    varchar2(8) default ' ' not null,
  alvrspar    varchar2(32) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint allvrea1 primary key( 
alvrstat,
alvrurno,
alvrvisn)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
