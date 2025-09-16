create table sinipsaf
(
  siipwar     varchar2(5) default ' ' not null,
  siipcst     varchar2(5) default ' ' not null,
  siipdel     varchar2(50) default ' ' not null,
  siiprac     varchar2(8) default ' ' not null,
  siipcat     varchar2(7) default ' ' not null,
  siiptyp     varchar2(1) default ' ' not null,
  siipreq     varchar2(7) default ' ' not null,
  siiprqt     number(14,2) default 0 not null,
  siipaqt     number(14,2) default 0 not null,
  siipbqt     number(14,2) default 0 not null,
  siippfl     varchar2(2) default ' ' not null,
  siipimp     varchar2(4) default ' ' not null,
  siipresi    varchar2(10) default ' ' not null,
  siipspa     varchar2(10) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint sinipsa1 primary key( 
siipwar,
siipcst,
siipdel,
siiprac,
siipcat,
siiptyp,
siipreq)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index sinipsa2 on sinipsaf
(
siipwar,
siipcst,
siipdel,
siipimp,
siiprac,
siipcat,
siiptyp,
siipreq
)
  tablespace pas_indx; 
