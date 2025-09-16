create table emrsitaf
(
  emstscod    varchar2(3) default ' ' not null,
  emstdesc    varchar2(25) default ' ' not null,
  emsthrpw    number(6,0) default 0 not null,
  emstdpty    varchar2(3) default ' ' not null,
  emstspco    varchar2(3) default ' ' not null,
  emstspno    varchar2(10) default ' ' not null,
  emsthsno    varchar2(3) default ' ' not null,
  emstdloc    varchar2(3) default ' ' not null,
  emstdrlc    varchar2(4) default ' ' not null,
  emstdres    varchar2(4) default ' ' not null,
  emstedst    varchar2(6) default ' ' not null,
  emstedfp    varchar2(6) default ' ' not null,
  emstactv    varchar2(1) default ' ' not null,
  emstpprv    varchar2(8) default ' ' not null,
  emstspar    varchar2(74) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint emrsita1 primary key( 
emstscod)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index emrsita2 on emrsitaf
(
emstdesc,
emstscod
)
  tablespace pas_indx; 
