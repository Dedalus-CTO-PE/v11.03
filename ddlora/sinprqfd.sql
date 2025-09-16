create table sinprqaf
(
  siprwar     varchar2(5) default ' ' not null,
  siprcst     varchar2(5) default ' ' not null,
  siprdel     varchar2(50) default ' ' not null,
  siprrac     varchar2(8) default ' ' not null,
  siprcat     varchar2(7) default ' ' not null,
  siprtyp     varchar2(1) default ' ' not null,
  siprreq     varchar2(7) default ' ' not null,
  siprrqt     number(14,2) default 0 not null,
  sipraqt     number(14,2) default 0 not null,
  siprbqt     number(14,2) default 0 not null,
  siprpfl     varchar2(2) default ' ' not null,
  siprspa     varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint sinprqa1 primary key( 
siprwar,
siprcst,
siprdel,
siprrac,
siprcat,
siprtyp,
siprreq)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index sinprqa2 on sinprqaf
(
siprcat,
siprwar,
siprtyp,
siprreq,
siprcst,
siprdel,
siprrac
)
  tablespace pas_indx; 
