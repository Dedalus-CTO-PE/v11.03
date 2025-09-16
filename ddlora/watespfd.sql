create table watespaf
(
wtepurno    varchar2(8),
wtepedat    varchar2(8),
wteppdob    varchar2(8),
wteppsex    varchar2(1),
wtepmedi    varchar2(10),
wtepmref    varchar2(1),
wtepresi    varchar2(3),
wteppost    varchar2(4),
wtepsubr    varchar2(35),
wtepwebc    varchar2(10),
wtepcdat    varchar2(8),
wtepctim    varchar2(8),
wtepwebu    varchar2(10),
wtepudat    varchar2(8),
wteputim    varchar2(8),
wtepabrg    varchar2(3),
wtepedob    varchar2(1),
wtepspar    varchar2(46),
lf          varchar2(1),
constraint watespa1 primary key( 
wtepurno,
wtepedat)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create public synonym watespaf for watespaf;
create unique index watespa2 on watespaf
(
wtepedat,
wtepurno
)
  tablespace pas_indx; 
