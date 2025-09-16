create table sintrnaf
(
  sitrpurc    varchar2(7) default ' ' not null,
  sitrstat    varchar2(1) default ' ' not null,
  sitruser    varchar2(4) default ' ' not null,
  sitrcrea    varchar2(30) default ' ' not null,
  sitrorg     varchar2(3) default ' ' not null,
  sitredat    varchar2(8) default ' ' not null,
  sitrtdat    varchar2(8) default ' ' not null,
  sitrtnum    number(3,0) default 0 not null,
  sitrspar    varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint sintrna1 primary key( 
sitrpurc)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index sintrna2 on sintrnaf
(
sitrstat,
sitrpurc
)
  tablespace pas_indx; 
